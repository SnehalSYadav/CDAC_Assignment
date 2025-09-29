#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Item {
public:
    int itemID;
    char itemName[30];  
    float price;
    int stockQuantity;

    void accept() {
        cout << "Enter Item ID: ";
        cin >> itemID;

        cout << "Enter Item Name: ";
        cin >> itemName;

        cout << "Enter Price: ";
        cin >> price;
        if(price < 0) {
            throw "Error: Price cannot be negative!";
        }

        cout << "Enter Stock Quantity: ";
        cin >> stockQuantity;
        
        if(stockQuantity < 0) {
            throw "Error: Stock quantity cannot be negative!";
        }
        if(stockQuantity == 0) {
            throw "Error: Item out of stock!";
        }
    }

    void display() {
        cout << itemID << "   " << itemName << "   " << price << "   " << stockQuantity;
    }
};

class Bill {
public:
    int billID;
    Item items[10];
    char customerName[30];
    int itemCount;
    float total;

    Bill() {
        itemCount = 0;
        total = 0;
    }

    void accept() {
        cout << "Enter Bill ID: ";
        cin >> billID;
        cout << "Enter Customer Name: ";
        cin >> customerName;
    }

    Bill& operator+(Item &it) {
        if(itemCount < 10) {
            items[itemCount] = it;
            it.price=it.price*it.stockQuantity;
            total += it.price;
            itemCount++;
        } else {
            throw "Error: Cannot add more than 10 items in one bill!";
        }
        return *this;
    }

    friend ostream& operator<<(ostream &out, Bill &b) {
        if(b.itemCount == 0) {
            throw "Error: Cannot generate empty bill!";
        }

        out << "\nBill ID: " << b.billID << endl;
        out << "Customer: " << b.customerName << endl;
        out << "-----------------------------------" << endl;
        out << "ID   Name   Price   Stock" << endl;
        for(int i=0; i<b.itemCount; i++) {
            out << b.items[i].itemID << "   " 
                << b.items[i].itemName << "   " 
                << b.items[i].price << "   " 
                << b.items[i].stockQuantity << endl;
        }
        out << "-----------------------------------" << endl;
        out << "Total = " << b.total << endl;
        return out;
    }
    

      void saveToFile() {
        fstream my_file("bills.txt", ios::app); // append mode
        my_file << "Bill ID: " << billID << "\n";
        my_file << "Customer: " << customerName << "\n";
        my_file << "Items: \n";
        for(int i=0; i<itemCount; i++) {
            my_file << items[i].itemID << " ";
               my_file<< items[i].itemName << " ";
               my_file<< items[i].price << " ";
                my_file<< items[i].stockQuantity << "\n";
        }
        my_file << "Total: " << total << "\n";
        my_file << "-----------------------------\n";
        my_file.close();
    }

        static void loadFromFile() {
        ifstream fin("bills.txt");
        if(!fin) {
            cout << "No previous bills found.\n";
            return;
        }
        cout << "\n===== Previous Bills =====\n";
        char line[200];
        while(fin.getline(line, 200)) {
            cout << line << endl;
        }
        cout << "==========================\n";
        fin.close();
    }
};

int main() {
    try {
        Bill b1;
        b1.loadFromFile();
        b1.accept();

        int n;
        cout << "How many items to purchase? ";
        cin >> n;

        for(int i=0; i<n; i++) {
            Item it;
            it.accept();   
            b1 + it;       
        }
        b1.saveToFile();

        cout << b1;  
    }
    catch(const char* msg) {
        cout << msg << endl;
    }

    return 0;
}

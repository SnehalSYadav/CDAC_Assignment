#include<iostream>
#include<fstream>
#include<string.h>


using namespace std;
class Item{
    public:
int ItemID;
char ItemName[30];
int stockQu;
int remainingStock=10;
float price;//float

void accept(){
       cout<<"Enter Item Id: "<<endl;
    cin>>ItemID;
       cout<<"Enter Item Name: "<<endl;
    cin>>ItemName;
       cout<<"Enter Item price: "<<endl;
    cin>>price;
       cout<<"Enter Item quantity: "<<endl;
    cin>>stockQu;
    if(remainingStock<stockQu){
        throw "Not sufficient stock available";
    }
}

};
class Bill{
    public:
    int billId;

   Item Items[10]; //setting the default object that only 10 items can purchese from our store.
    char CustomerName[50];
    int itemCount;//
    float total;//

    Bill(){
        itemCount=0;
        total=0;
     
    }
//

    void accept(){
        cout<<"Enter bill Id: "<<endl;
        cin>>billId;
        cout<<"Enter customer Name: "<<endl;
        cin>>CustomerName;

    }
    
    Bill& operator+(Item& itnew){
        total=itnew.price*itnew.stockQu+total;
    itemCount++;
    }


    friend ostream& operator<<(ostream& out, Bill &b1){
        out<<"Bill ID: " <<b1.billId<<endl;
        out<<"Customer: " <<b1.CustomerName<<endl;
        out<< "-----------------------------\n";
        out << "Item ID: " << "Item Name: " << "Price: "  << "Quantity: "  << endl;
        out<< "-----------------------------\n";
        for(int i=0;i<b1.itemCount;i++){

out<<b1.Items[i].ItemID<<"   ";
out<<b1.Items[i].ItemName<<"   ";
out<<b1.Items[i].price<<"   ";
out<<b1.Items[i].stockQu<<"   "<<endl;

        }
       out<< "-----------------------------\n";
        return out;
    }

void saveToFile() {
        fstream my_file("bills.txt", ios::app); // append mode
        my_file << "Bill ID: " << billId << "\n";
        my_file << "Customer: " << CustomerName << "\n";
        my_file << "Items: \n";
        for(int i=0; i<itemCount; i++) {
            my_file << Items[i].ItemID << " ";
               my_file<< Items[i].ItemName << " ";
               my_file<< Items[i].price << " ";
                my_file<< Items[i].stockQu << "\n";
        }
        my_file<< "-----------------------------\n";
        my_file << "Total: " << total << "\n";
        my_file<<"Total items"<<itemCount;
        my_file << "-----------------------------\n";
        my_file.close();
    }

 static void loadFromFile() {
        ifstream my_file("bills.txt");
        if(!my_file) {
            cout << "No previous bills found.\n";
            return;
        }
        cout << "\n===== Previous Bills =====\n";
        char line[200];
        while(my_file.getline(line, 200)) {
            cout << line << endl;
        }
        cout << "==========================\n";
        my_file.close();
    }
};


 int n;
int main(){
try
{
    cout<<"Enter the number of items you want to buy :";
    cin>>n;
      
    if(n>=10){
        throw "Cannot add more that 10 items";
    }
    Bill b1;
    b1.loadFromFile();
    b1.accept();
 

   for(int i=0;i<n;i++){

   Item it;
   it.accept();
   b1.Items[i] = it;      // Store the item
   b1+it;//oprator overloading for + //b1 oprator+(it)
   
}   b1.saveToFile();
   cout<<b1;//oprator overloading for <<
   cout<<"Total items"<<b1.itemCount;
    cout<<"Total: " <<b1.total<<endl;
    
}
catch(const char* msg)
{
    cout<<msg<<endl;
}

}
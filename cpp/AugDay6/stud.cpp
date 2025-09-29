#include<iostream>
#include<string>
using namespace std;

class student {
private:
    int roll_no;
    string date_of_birth;
    int total_marks;

public:
    void accept() {
        cout << "Enter Roll No.: ";
        cin >> roll_no;
        cout << "Enter Date Of Birth (DD-MM-YYYY): ";
        cin >> date_of_birth;
        cout << "Enter Total marks: ";
        cin >> total_marks;
        cout << endl;
    }

    void display() {
        cout << "Roll No.: " << roll_no << endl;
        cout << "Date Of Birth: " << date_of_birth << endl;
        cout << "Total marks: " << total_marks << endl;
        cout << endl;
    }

    // Accessor for total_marks, used for sorting
    int getMarks() const {
        return total_marks;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    student* ptr = new student[n];

    cout << "\n--- Accepting student details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        ptr[i].accept();
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ptr[j].getMarks() < ptr[j + 1].getMarks()) {
                
                student temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }

    cout << "\n--- Displaying sorted student details by total marks ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Details for student " << i + 1 << " (Rank " << i + 1 << "):\n";
        ptr[i].display();
    }

    delete[] ptr; // Free the dynamically allocated memory
    return 0;
}
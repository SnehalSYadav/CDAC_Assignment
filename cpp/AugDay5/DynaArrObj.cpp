#include <iostream>
using namespace std;
class student{
int RollNo;
char name[50];
public:
void accept(){
     cout<<"Enter Roll No. ";
    cin>>RollNo;
     cout<<"Enter student Name";
    cin>>name;

}
void display(){
    cout<<"Roll No. "<<RollNo<<"Name is "<<name<<endl;
}
};
int main(){
    int n,i;

    cout<<"enter the no of student: ";
    cin>>n;
    student *ptr = new student[n];
    for(i=0;i<n;i++){
        (ptr+i)->accept();

    }
 for(i=0;i<n;i++){
        (ptr+i)->display();

    }
}
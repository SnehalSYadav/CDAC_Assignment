#include<iostream>
using namespace std;
class Student{
 int rollNo;
 char Name[20];
   public:
   void accept(){
cin>>rollNo;
cin>>Name;
   }
   void Display(){
    cout<<"name is: "<<"Roll no is: "<<rollNo<<endl;
   }

   ~Student(){
    cout<<"distructor is called"<<endl;
   }
};

int main(){
    int n,i;
    cout<<"enter the no of students"<<endl;
    cin>>n;
    Student* ptr = new Student[n];
    for ( i = 0; i < n; i++)
    {
           ptr[i].accept();
    }
     for ( i = 0; i < n; i++)
    {
            ptr[i].Display();
    }
    
    delete ptr;
    
}
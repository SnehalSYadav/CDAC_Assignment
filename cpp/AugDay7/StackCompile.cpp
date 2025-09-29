#include<iostream>
using namespace std;
class employee{
int id;
public:
employee();
employee(int);
int GetSalary(int){
return 0;
}
void display();

};


employee::employee(){
id=0;
}
employee::employee(int i){
id=i;
}
void employee::display(){
cout<<"Id is: "<<id;
}


class wegemployee: public employee{
    int hrs,rate;
public:

    wegemployee();
    wegemployee(int ,int ,int );
void GetSalary(int);
void display();
};
wegemployee:: wegemployee(){
hrs=0;
rate=0;
}
wegemployee::wegemployee(int i, int h, int r) :employee(i){
hrs=h;
rate=r;
}
void wegemployee ::display(){
cout<<"Total working hrs are: "<<hrs<<endl;
cout<<"Per hour rate is: "<<rate<<endl;
}
void wegemployee ::GetSalary(int i){
 cout<<"Salary of the employee "<<i<<" is"<< hrs*rate;
}

int main(){
    employee *ptr;
    wegemployee we1(123,5,2);
    ptr=&we1;
    ptr->display();
    ptr->GetSalary(123);
    
}
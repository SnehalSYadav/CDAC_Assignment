#include<iostream>
using namespace std;
class employee{
int id;
public:
employee();
employee(int);
virtual int GetSalary()=0;//pure vertual function
virtual void display();

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
int GetSalary();
void display();
void show();
};
void wegemployee:: show(){
cout<<"in show function";
}
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
int wegemployee ::GetSalary(){
 cout<<"Salary of the employee "<<" is"<< hrs*rate;
}

int main(){
    employee *ptr;
    wegemployee we1(123,5,2);
    ptr=&we1;
    ptr->display();
    ptr->GetSalary();
    //ptr->show(); Not allows becaus the show function is not overrided 
    //and in abstract class only we can call overrided functions using baseclass pointer
    
}
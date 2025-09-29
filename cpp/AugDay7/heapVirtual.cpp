#include<iostream>
using namespace std;
class employee{
int id;
public:
employee();
employee(int);
virtual int GetSalary(){
return 0;
}
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
int wegemployee ::GetSalary(){
 cout<<"Salary of the employee "<<" is"<< hrs*rate;
}

int main(){
    employee *ptr=new wegemployee (123,5,2);
    ptr->display();
    ptr->GetSalary();
    
}
#include<iostream>
using namespace std;

class Cdate{
    int dd,mm,yy;
public:
    void accept();
    void display() const;
    void setDD(int); 
    int getMM() const;     
};

void Cdate :: accept(){
    cout<<"enter the day, month and year"<<endl;
    cin>>dd>>mm>>yy;
}

void Cdate :: display() const{
    cout<<"Date is "<<dd<<"/"<<mm<<"/"<<yy<<endl; 
}

void Cdate :: setDD(int d){
    dd=d;
}

int Cdate :: getMM() const{ 
    return mm;
}

int main(){
    Cdate d1 ;
    d1.accept();
    d1.display();
    d1.setDD(22);
    d1.display();
    cout<<"Month is: "<<d1.getMM()<<endl;
    return 0;
}
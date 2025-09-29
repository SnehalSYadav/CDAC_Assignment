#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
     complex();
     complex(int, int);
    void display();
    void setReal(int);
    int getReal();
};

complex :: complex(){
    cout<< "in complex";
    real=2;
    img= 6;
}

void complex :: display(){
cout<<"Complex Number "<<real<<"+"<<img<<"i"<<endl;

}

complex :: complex(int r,int i){
    cout<<"in para constructor\n";
    real = r;
    img = i;

}

void complex:: setReal(int r){
    real=r;
}

int complex::getReal(){
    return real;
}
int main(){
    complex c1;
    c1.display();
    complex c2(5,6);
    c2.setReal(50);
    c2.display();
    cout<<"real part is "<<c2.getReal();
}
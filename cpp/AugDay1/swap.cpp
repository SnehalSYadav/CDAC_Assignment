#include<iostream>
using namespace std;
int main(){
    int a =10,b=20;
    cout<<"Before swapping\n ";
    cout<<"a="<<a<<"b="<<b;
    swap(a,b);
    cout<<"after swapping using pass by value\n";
    cout<<"a="<<a<<"b="<<b;
    
    swapByPointer(&a,&b);
    cout<<"after swapping using pass by pointer\n";
    cout<<"a="<<a<<"b="<<b;
    
    swapByReference(a,b);
    cout<<"after swapping using pass by reference\n";
    cout<<"a="<<a<<"b="<<b;
    

    
}
void swap(int p,int q,int temp){
    temp = p;
    p=q;
    q=temp;
    cout<<"in swap function with pass by value\n";
    cout<<"p="<<p<<"\t"<<"q="<<q;
}





void swapByPointer(int *p,int *q){
    int temp;
    temp = *p;
    *p=*q;
    *q=temp;
    cout<<"in swap function with pass by address\n";
    cout<<"p="<<*p<<"\t"<<"q="<<*q;
}
void swapByReference(int &p,int &q){
    
    int temp;
    temp = p;
    p=q;
    q=temp;
    cout<<"in swap function with pass by reference\n";
    cout<<"p="<<p<<"\t"<<"q="<<q;
}

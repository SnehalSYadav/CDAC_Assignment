#include<iostream>
using namespace std;
void swapByReference(int& , int& );
int main(){
    int a =10,b=20;
    cout<<"Before swapping\n ";
    cout<<"a="<<a<<"b="<<b;
    
    swapByReference(a,b);
    cout<<"after swapping using pass by reference\n";
    cout<<"a="<<a<<"b="<<b;
    
}

void swapByReference(int &p,int &q){
    
    int temp;
    temp = p;
    p=q;
    q=temp;
    cout<<"in swap function with pass by reference\n";
    cout<<"p="<<p<<"\t"<<"q="<<q;
}


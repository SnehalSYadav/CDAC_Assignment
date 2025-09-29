#include<iostream>
using namespace std;
template <class T>
 T add(T &a, T &b){
    cout<<"addition of 2 no. : "<<a+b<<endl;

 }
 int main(){
    int i,j;
    cin>>i;
    cin>>j;
    add(i,j);
 }
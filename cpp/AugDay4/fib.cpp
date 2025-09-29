#include<iostream>
using namespace std;
int main(){
    int b, next=0,prev=0,current=1;
    cin>>b;
    if(prev>=0){
        cout<<prev<<",";
    }
    if(current>=1){
        cout<<current<<",";
    }
    for(int a=2;a<b;a++){
       next = prev + current;
        cout  << next<< ", ";
        prev =  current;
        current = next;
    }
}
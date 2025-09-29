#include<iostream>
using namespace std;
int main(){
    int ptr[5];
    int *ptr2[5];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<5;i++){
        cin>>ptr[i];
        ptr2[i]=&ptr[i];
    }
    for(int i =0;i<5;i++){
        cout<<*ptr2[i]<<endl;
    }

}
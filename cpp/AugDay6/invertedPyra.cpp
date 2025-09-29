#include<iostream>
using namespace std;
int main(){
    int row=5;

    for(int i =row;i>=1;i--){
        for(int s=0;s<(row-i);++s){
            cout<<" ";
        }
        for(int j =1;j<=2*i-1;j++){

            cout<<"*";
        }    
        cout<<endl;
        
    }
}
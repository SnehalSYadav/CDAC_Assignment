#include<iostream>
using namespace std;
int main(){
    int row=5;
    char ch ='A';
    for(int i =0;i<row;i++){
        for(int s=0;s<row-i;s++){
            cout<<" ";
        }
        for(int j =0;j<2*i-1;j++){
            
            cout<<ch;
            ch++;
        }
        ch='A';
        cout<<endl;
} 

for(int i =0;i<row;i++){
        for(int s=0;s<row-i;s++){
            cout<<" ";
        }
        for(int j =0;j<2*i-1;j++){
            
            cout<<ch;
            ch++;
        }
       
        cout<<endl;
}
}
    
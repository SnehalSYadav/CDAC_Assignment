#include<iostream>
using namespace std;
int main(){
    int i,j,num=1;
    for( i=0;i<=3;i++){
        for(j=0;j<=i;j++){
            cout<<num++ <<"\t";
        }
        cout<<endl;
    }
cout<<endl;


for( i=0;i<=3;i++){
        for(j=0;j<=i;j++){
            cout<<"*" <<"\t";
        }
        cout<<endl;
    }

    cout<<endl;

for( i=3;i>=0;i--){
        for(j=0;j<=i;j++){
            cout<<"*" <<"\t";
        }
        cout<<endl;
    }
cout<<endl;
        
num=1;
for( i=3;i>=0;i--){
        for(j=0;j<=i;j++){
            
            cout<<num++ <<"\t";
        }
        cout<<endl;
    }

}
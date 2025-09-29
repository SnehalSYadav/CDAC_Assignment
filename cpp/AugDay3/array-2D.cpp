#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;

    cout<<"Accept array elements by value"<<endl;
  
    for(i =0;i<=2;i++){
       for(j=0;j<=2;j++){
        cin>>a[i][j];
       }
    }
    cout<<"display array elements by value"<<endl;
   for(i =0;i<=2;i++){
       for(j=0;j<=2;j++){
        cout<<a[i][j]<<"\t";
       }
       cout<<endl;
    }

    cout<<"Accept array elements by pointer"<<endl;

     for(i =0;i<=2;i++){
          for(j=0;j<=2;j++){
        cin>>*(*(a+i)+j);
    }
     }
    cout<<"Display array elements by pointer"<<endl;
     
     for(i =0;i<=2;i++){
          for(j=0;j<=2;j++){
        cout<<*(*(a+i)+j)<<"\t";
    }
    cout<<endl;
     }
    
}
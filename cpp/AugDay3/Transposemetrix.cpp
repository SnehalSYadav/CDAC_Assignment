#include<iostream>
using namespace std;
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
   int z[3][3];
   
cout<<"Original metrix: "<<endl;
    for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){

        cout<<*(*(a+i)+j)<<"\t";
    }
    cout<<endl;
}

cout<<"Transpose metrix: "<<endl;
    for(int j=0;j<3;j++){
       for(int i=0;i<3;i++) {
            cout<<*(*(a+i)+j)<<"\t";
        }
      
        cout<<endl;
    }
    
}
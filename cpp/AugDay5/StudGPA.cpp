#include<iostream>
using namespace std;
int main(){
    int n;
    float* ptr;
     cin>>n;
    ptr= new float[n];// dynamic memory allocation
    cout<<"enter the no of student"<<endl;
   

    for(int i=1; i<=n; i++){
        cout<<"student "<<i<<endl;
        cin>>*(ptr + i);

    }
     for(int i=1; i<=n; i++){
        cout<<"student "<<i<<*(ptr + i)<<endl;
        

    }
    delete [] ptr;
}
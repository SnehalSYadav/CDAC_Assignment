#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter no of element\n";
    cin>>n;
    int* ptr =new int[n];
    cout<<"accept element\n";

    for(i=0; i<n; i++){
        cin>>ptr[i];}
        cout<<"display elements\n";
        for(i=0; i<n; i++){
            cout<<ptr[i]<<"\t";
           
        }
    
     delete [] ptr;
}
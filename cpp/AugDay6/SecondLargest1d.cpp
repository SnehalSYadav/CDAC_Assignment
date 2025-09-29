#include <iostream>
using namespace std;
int main(){
    int n,max=0,secmax=0;
    cout<<"enter row & Col of array =";
    cin>>n;
    int arr[n];
      for(int i =0;i<n;i++){
   
         cin>>arr[i];
}
    for(int i =0;i<n;i++){
   
         
             if(arr[i]>max){
            secmax=max;
                max=arr[i];
         }
         else if(arr[i]>secmax && arr[i]!=max){
            secmax=max;
         }
}
      cout<<"Second largest is : "<<secmax;
} 
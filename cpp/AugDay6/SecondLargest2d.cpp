#include <iostream>
using namespace std;
int main(){
    int n,max=0,secmax=0;
    cout<<"enter row & Col of array =";
    cin>>n;
    int arr[n][n];
    for(int i =0;i<n;i++){
   
         for(int j =0;j<n;j++){
         cin>>arr[i][j];
}
      
} 
    for(int i =0;i<n;i++){
   
         for(int j =0;j<n;j++){
         if(arr[i][j]>max){
            secmax=max;
                max=arr[i][j];
         }
         else if(arr[i][j]>secmax && arr[i][j]!=max){
            secmax=max;
         }
    
}

}
cout<<"second max is :"<<secmax;
}

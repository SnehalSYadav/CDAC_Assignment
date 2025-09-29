#include<iostream>
using namespace std;

int main(){
int arr[5]={1,2,3,4,5};
int target=7;
int ptr1=arr[0];
int ptr2=arr[0];
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
         
         if(target == arr[i]+arr[j]){
          cout<<"("<<i<<","<<j<<")"<<endl;
         }
        }

}
}
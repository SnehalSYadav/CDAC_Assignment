#include <iostream>
using namespace std;
int main(){

    int a;
    bool isprime=true;
    cin>>a;
    if(a==0||a==1){
        isprime =false;
    }
    for(int i=2;i<a;i++){

    if(a%i==0){

isprime=false;

    }
    }

    if(isprime){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}
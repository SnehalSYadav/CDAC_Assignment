#include <iostream>
using namespace std;
int main(){
    int a,b,exp,fdp=1,sdp=1,tdp=1;
    cin>>b;
    a=b;
    int fd=a%10;
    a=a/10;
      int sd=a%10;
       a=a/10;
        int td=a%10;

        for (int i=1; i<=3;i++){
     fdp = fdp*fd;
     sdp = sdp*sd;
     tdp = tdp*td;
        }
        int arm= fdp+sdp+tdp;
        cout<<arm<<endl;
if(b==arm)
{cout<<"yes the number is armstrong";}

else{cout<<"No number is not armstrong";}
        
}
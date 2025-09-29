#include <iostream>
using namespace std;
void cnt(){
    int static count=0;
    count++;
    cout<<count<<endl;
}
void demo()
{
    static int count2 = 1,sum=0;
     sum=sum+count2;
     cout<<sum<<"\n";
     count2++;
}
int main(){
int n;
cnt();
cnt();
cnt();
cnt();
cnt();
cout<<endl<<endl;
cin>>n;
 for (int i = 0; i < n; i++){
 demo();
 }  

}
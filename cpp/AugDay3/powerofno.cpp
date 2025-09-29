#include <iostream>
using namespace std;
int main(){
	
	int base,exponent,p=1;
    cout<<"Enter base and exponent"<<endl;
    cin>>base>>exponent;
	
     for(int i =1;i<=exponent;i++){
    p = p*base;
    }
	cout<<p;
}

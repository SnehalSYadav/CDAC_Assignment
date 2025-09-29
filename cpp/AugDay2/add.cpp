#include <iostream>
using namespace std;
int main(){
	int add(int,int);
	int a, b,c;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
	c = add(a,b);
	cout<<c;
}

int add(int q, int p){
    int c=p+q;
    return c;
    
	
}
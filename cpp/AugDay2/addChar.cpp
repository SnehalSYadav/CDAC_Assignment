#include <iostream>
using namespace std;
int main(){
	int add(char,char);
	char a, b;
    int c;
    cout<<"Enter two characters"<<endl;
    cin>>a>>b;
	c = add(a,b);
	cout<<c;
}

int add(char q, char p){
    int c=p+q;
    return c;
    
	
}
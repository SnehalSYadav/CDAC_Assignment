#include <iostream>
using namespace std;
int main(){
	
	int a,b,p,q,add,sub,mul,div,reminder;
    cin>>a>>b;
    cout<<"arithmetic oprations";
    add=a+b;
    cout<<"Addition of a and b"<<add<<endl;
     sub=a-b;
    cout<<"substraction of a and b"<<sub<<endl;
     mul=a*b;
    cout<<"multiplication of a and b"<<mul<<endl;
     div=a/b;
    cout<<"division of a and b"<<div<<endl;
     reminder=a%b;
    cout<<"reminder of a and b"<<reminder<<endl;


     cout<<"relational oprations";
     if(a>b){
    cout<<"yes a is greter than b"<<endl;
     }
    else{
    cout<<"yes a is less than b"<<endl;
    }

  if(a==b){
    cout<<"yes a is equals to b"<<endl;
     }
    else{
    cout<<"yes a is not equals b"<<endl;
    }


cout<<"relational oprations";
cin>>p>>q;
        if(a>b && p>q){
    cout<<"condition satisfied"<<endl;
     }
    else{
    cout<<"condition not satisfied"<<endl;
    }

      if(a>b || p>q){
    cout<<"condition satisfied"<<endl;
     }
    else{
    cout<<"condition not satisfied"<<endl;
    }

    cout<<"unary oprations";
    a=b;
    cout<<"a assigned to b"<<a;
    a++;
     cout<<"a ="<<a;
    a--;
    cout<<"a ="<<a;
    sizeof(a);
    cout<<"size of a ="<<a;


    cout<<"ternary oprations";
    a>b ? cout<<"yes" : cout<<"no";



}

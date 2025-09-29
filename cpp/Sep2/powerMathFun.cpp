
#include <iostream>  
#include<cmath>  
using namespace std;  
int main()  
{  
int base,exponent;
cout<<"enter base"<<endl;
cin>>base;
cout<<"enter exponent"<<endl;
cin>>exponent;  
  int power=pow(base,exponent);  
  cout << "Power of a given number is :" <<power;  
  return 0;  
}  
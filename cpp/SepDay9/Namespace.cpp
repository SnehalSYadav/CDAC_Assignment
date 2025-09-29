#include<iostream>
using namespace std;
namespace class1{
    void fun(){
cout<<"In class1 function"<<endl;
    }
}
namespace class2{
    void fun(){
cout<<"In class2 function"<<endl;
    }
}
int main(){
    class1::fun();
    class2::fun();
}
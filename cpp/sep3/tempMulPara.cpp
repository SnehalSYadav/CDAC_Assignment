#include<iostream>
using namespace std;

template<class t1, class t2>
void fun(t1 a,t2 b){
    cout<<"first number is:"<<a<<endl;
    cout<< "second number is:"<<b;
}
int main(){
    fun(12,13.5);
    return 0;
}
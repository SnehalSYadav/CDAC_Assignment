#include<iostream>
using namespace std;
template<class T,int size>
class A{
    public:
    T arr[size];
void fun(){
    
    for(int i = 0;i<size;i++){
    cin>>arr[i];
    }
}
    void display(){

    for(int i = 0;i<size;i++){
    cout<<arr[i];
    }
}
};
int main(){
    A <int,5> t1;
    t1.fun();
    t1.display();

}
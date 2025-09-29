#include<iostream>
using namespace std;
template <class t1,class t2>
t2 max(t1 a,t2 b){
    
   return (a>b) ? a : b;

}
int main(){
   cout<<max(23,4 );
    cout<<max(3, 'e');
}

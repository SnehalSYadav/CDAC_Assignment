#include <iostream>
using namespace std;

class Cdemo{

    public:
   int c, a, b;
   Cdemo(){
   }
    Cdemo(int a, int b=1){
c=a+b;
    }
    void print(){
        cout<<c<<endl;
    }
};
int main(){
    Cdemo c1(8,3);
    Cdemo c2 (4);
    c1.print();
    c2.print();
}
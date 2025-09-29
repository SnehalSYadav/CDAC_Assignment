#include<iostream>
using namespace std;
class Base{
    private: int Pvt =5;
    protected: int Pro =4;
    public:
    int pub=3;
    void getPvt(){
        cout<<"private member of base class: "<<Pvt<<endl;
    }


};
class child: public Base{
   public:
    void getPro(){
        cout<<"Protected member of base class: "<<Pro<<endl;
    }
};
int main(){
    child obj1;
    obj1.getPvt();
    obj1.getPro();
    cout<<"Public member of base class:"<<obj1.pub;

}
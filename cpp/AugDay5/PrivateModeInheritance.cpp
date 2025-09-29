#include<iostream>
using namespace std;
class Base{
     int Pvt =5;
    protected: int Pro =4;
    public:
    int pub=3;
    void getPvt(){
        cout<<"private member of base class: "<<Pvt<<endl;
        
    }

};
class child: private Base{
   public:
    void getPro(){
        cout<<"Protected member of base class: "<<Pro<<endl;
    }
    
    void getPub(){
          cout<<"public member of base class: "<<pub<<endl;
    }
};
int main(){
    child obj1;
    obj1.getPub();
    obj1.getPro();
    

}
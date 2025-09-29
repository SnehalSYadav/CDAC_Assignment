#include<iostream>
using namespace std;
class parent{
    protected: int Proid;
 
};
 class child: public parent{
 char name;
    public:
    void setId(int id){
        Proid=id;
    }
 void display(){
 cout<<" Protected Id is: "<<Proid<<" "<<name;
 }

};

int main(){
    int a;
    cout<<"Enter the Id: ";
    cin>>a;
child obj1;
obj1.setId(a);
obj1.display();

}
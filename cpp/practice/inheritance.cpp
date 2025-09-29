#include <iostream>
using namespace std;

class demo{  
 
public:    
int a,x,y;

demo(){
    cout<<"call default constructor of class demo";
}
demo(int x,int y){
    cout<<"call parametrized constructor of class demo";
}
void display();
void add();
};
void demo :: add()
{   cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    a=x+y;
  cout<<"addition of 2 nos is:"<<endl;
}
void demo :: display()
{  add();
   cout<<a;

}

class demo1:public demo{
    public:
    int s,t,u;
    demo1(){
      cout<<"call default constructor of class demo1";
    }
    void mult();
    void show();

};

void demo1::mult(){
    cout<<"Enter first number:";
    cin>>s;
    cout<<"Enter second number:";
    cin>>t;
   u=s*t;


}
void demo1 :: show(){
    mult();
    cout<<"Multiplication of two elements:"<<u<<endl;
}
int main(){
    //demo obj;
    //obj.display();
    demo1 obj1;
    obj1.show();
    obj1.display();
}


#include<iostream>
using namespace std;
void show();
int main(){
show();
show();
show();

}

void show(){
     int x=1;
     static int y=2;
     cout<<"local variable x is"<<x<<endl;
     x++;
  cout<<"static variable y is"<<y<<endl;
     y++;
    
}
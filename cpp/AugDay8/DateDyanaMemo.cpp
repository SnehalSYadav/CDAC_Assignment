#include<iostream>
using namespace std;
class cdate{
   int dd,mm,yy;
   public:
   cdate(){
    dd=mm=yy=0;
   }
   cdate(int d,int m,int y){
    dd=d;mm = m; yy =y;
   }
   void show(){
    cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
   }
};

int main(){
    cdate* ptr = new cdate(1,2,2018);
    ptr ->show();
    delete ptr;
    ptr ->show();
}
#include<iostream>
using namespace std;
class Cdate{
    int dd,mm,yy;
    public:
    Cdate(){
         dd=mm=yy=0;
    }
    Cdate(int d,int m,int y){
        dd=d;
        mm=m;
        yy=y;
    }

    void show(){
        cout<<"Display"<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }

};

int main(){
    int n=9;
    Cdate* obj1 = new Cdate[n];
    obj1 -> show();
    Cdate* obj2 = new Cdate(26,8,2025);
    obj2 -> show();

 

}
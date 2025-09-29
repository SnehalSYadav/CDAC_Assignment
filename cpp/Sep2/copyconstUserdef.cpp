#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
public:
	void show();
	date(int,int,int);
	date(date&);//copy constructor
};
 date::date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}
 void date::show()
 {
	 cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
 }
 date::date(date & d_new)
 {
	 this->dd=d_new.dd;
	 this->mm=d_new.mm;
	 this->yy=2026;
 }
int main()
{
	date d(8,8,17);
	date d1(d);
	d.show();
	d1.show();
}

#include <iostream>  
using namespace std; 
class Complex
{

	int real,img;
	static int cnt;
	public:
		void show();
		Complex();
		Complex(int,int);
		static int getCnt();
		
};

int Complex::cnt; //cnt=100;
int Complex::getCnt()
{
	return cnt;
}
void Complex:: show(){
    cout<<real<<"+"<<img<< " "<<endl;
}

Complex::Complex()
{
	cout<<"in default constructor\n";
	real=90;
	img=21;
	cnt++;
	
}
Complex::Complex(int r,int i)
{
	cout<<"in parametrized constructor\n";
	real=r;
	img=i;
	cnt++;
}
int main()
{
	Complex c1,c2;
	Complex c3(5,6);
	cout<<"no of obj created is "<<Complex::getCnt()<<endl;
	cout<<"sizeoof obj is     "<<sizeof(c1)<<endl;
}

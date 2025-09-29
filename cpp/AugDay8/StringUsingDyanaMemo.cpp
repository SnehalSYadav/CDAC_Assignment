
#include<iostream>
#include<string.h>
using namespace std;
class String1{
int len;
char* ptr;
public:
String1();
String1(char*);
String1(char, int);
String1(int);
void display();
~String1(){
    
			cout<<"destructor is called\n";
    if(ptr)
			{
			cout<<"in if\n";
			delete[]ptr;
			ptr=NULL;
			}
}


};
String1::String1()
{
	len=1;
	ptr=new char[len];
	*ptr='S';

}
String1::String1(char * s){
len=strlen(s);
	ptr=new char[len+1];
	strcpy(ptr,s);
}
String1::String1(char c,int len){
this->len=len;
ptr=new char[len+1];
for ( int i = 0; i < len; i++)
{
    ptr[i]=c;
}
ptr[len+1]='\0';

}
String1::String1(int l){
	len=1;
	ptr=new char[len];
	cout<<"enter the string";
    cin>>ptr;
}
void String1::display()
{
	if(len>1)
	{
			cout<<"length of character is "<<len<<endl;
			cout<<"string is "<<ptr<<endl;
	}
	else
	{
	cout<<"length of character is "<<len<<endl;
	cout<<"character is "<<*ptr<<endl;
	}
}
int main(){
    String1 s1;
	s1.display();
	String1 s2("rahul");
	s2.display();
	String1 s3('*',80);
	s3.display();
	String1 s4(4);
	s4.display();
}
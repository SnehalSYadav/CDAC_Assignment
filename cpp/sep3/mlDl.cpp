#include <iostream>
#include<string.h>
using namespace std;
class String1{
int len;
char * ptr;
public:
void display();
String1(char * );
~String1(){
    if(ptr){
    delete [] ptr;
    ptr=NULL;
    }
    
}

};
void String1::display(){
    cout<<"length is"<<len<<endl;
    cout<<"ptr is"<<ptr<<endl;

}

String1::String1(char * sptr){

    len=strlen(sptr);
    ptr=new char[len+1];
    strcpy(ptr,sptr);

}

int main(){
    String1 s1("abc");
    
    String1 s2("abcz");
   // s2=s1;
    s2.operator=(s1);
    
    s2.display();//it will show the s1 object name only because of we have copied s1 in the s2 due to that memory leakage happenned for s1.
    
}
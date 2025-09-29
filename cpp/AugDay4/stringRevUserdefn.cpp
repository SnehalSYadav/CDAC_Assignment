#include<iostream>
using namespace std;

int main(){
char str[100];
cout<<"enter the string : ";
cin.getline(str,100);

char *ptr=str;
int length=0;
while(*ptr!='\0'){
    length++;
    ptr++;

}
char* start = str;
char* end = str+length-1;

while(start<end){
    char temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;
}
cout<<str;
return 0;

}
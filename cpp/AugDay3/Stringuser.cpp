#include<iostream>
#include<string.h>
using namespace std;
void user_strcpy(char*,char*);
void user_concat(char*, char*);
int main(){
char str1[50];
char str2_cpy[50];

cin>>str1;
cout<<"copying string from str1 in str2_cpy user-define functions :"<<endl;
cout<<"Printing str1\t"<<str1<<endl; 
user_strcpy(str1, str2_cpy);
cout<<"Printing str2_cpy\t"<<str2_cpy<<endl;
cout<<"copying string from str1 in str2_cpy using user-define functions :"<<endl;
user_concat(str1,str2_cpy);
cout<<"Concatination in str1 from str2_cpy using user-define functions :"<<str1 <<endl;

}

void user_strcpy(char* s1,char* s2){
    while(*s1!='\0'){
        *s2=*s1;
        s1++;
        s2++;
    }
    *s2='\0';
}
void user_concat(char* s1,char* s2){
    while(*s1!='\0'){
        s1++;
    }
    while(*s2!='\0'){
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';
}
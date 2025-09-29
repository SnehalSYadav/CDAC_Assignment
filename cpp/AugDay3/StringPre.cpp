#include<iostream>
#include<string.h>
using namespace std;
void user_strcpy(char*,char*);
int main(){

    cout<<"Pre-define functions"; 
char str1[20]="hello world";
char str2_cpy[20];
char str3_concat[50]="Oh! ";

cout<<"copying in str1 to str_cpy\t"<<strcpy(str2_cpy, str1)<<endl;
cout<<"copying in str1 to str3_concat\t"<<strcat(str3_concat, str1)<<endl;
cout<<"length of str3_concat\t"<<strlen(str3_concat)<<endl;
cout<<"Size of str3_concat\t"<<(sizeof(str3_concat))<<endl<<endl;

}
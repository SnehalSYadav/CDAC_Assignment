#include<iostream>
using namespace std;
class Person{
public:
Person(int x){
cout<<"person::person(x) called"<<endl;
}
Person(){

}
};
class Student:public Person{
    public:
Student(int x):Person(x)   {
       cout<<"Student::Student(int ) called"<< endl;
    }
};
class Faculty:public Person{
    public:
Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
class TA :public Student,public Faculty{
       public:
TA(int x):Student(x), Faculty(x)   {
 
       cout<<"TA::TA(int ) called"<< endl;
    }
};
int main(){
    TA ta1(30);
}
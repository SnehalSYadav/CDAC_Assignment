// // Class Student with:

// rollNo, name, marks in 3 subjects

// Class Gradebook to manage multiple students

// 2. Operator Overloading
// Overload ++ to increment marks (e.g., bonus marks)

// Overload > to compare students based on average marks
#include <iostream>
using namespace std;
class student{
    public:
int rollNo;
char StudName;

int m1;
int m2;
int m3;
float avg;
char gd;
void accept(){
    cout<<"Enter marks m1,m2,m3 respectively";
    cin>>m1>>m2>>m3;
     avg = (m1+m2+m3)/3;
    
}

};

class Gradebook{
    public:
    char ch1= 'A';
    char ch2= 'B';
    char ch3= 'C';


 
// student& operator++(int){
       
//     .avg++;
// }
};


int main(){
    
    int strength;
    cout<<"Strength of the class:";
    cin>>strength;
   student snew[strength];
    for(int i =1;i<=strength;i++){
         
      snew[i].accept();
      if(snew[i].avg==90||snew[i].avg==80||snew[i].avg==79){
  snew[i]->avg++;//overloading ++ oprator
      }
  
    }
    Gradebook g1;
    s1.gread();
   

 


}
#include<iostream>
#include<string>
using namespace std;
class bank{
int DebitCardNo=9867;
protected:
bank(double a=9000){
    double balance=a;
    char strName[50];
  float Intrestpersonal=10;
}
public:
float RateOFInt=8.5;
  int getfun(int, char, int){
    int b;
    cout<<"enter the balance";
    cin>>b;
     RateOFInt;
     bank(b);
     DebitCardNo;
  }

};
class Homeloan: public bank{
double SimpleIntrestHome;
void getHomeLoan(){
    double SimpleIntrestHome;

}
};

class Personalloan: public bank{
double SimpleIntrestPersonal;
void getPersonalLoan(){
    double SimpleIntrestPersonal;
}
};


int main(){
cout<<"home Loan ";
Homeloan obj1;
int R=obj1.RateOFInt;
cout<<"Rate Of intrest is: "<<obj1.RateOFInt;
int bal=obj1.getfun(23,'sidd',987);
cout<<""<<bal;

}
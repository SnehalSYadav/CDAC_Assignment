#include <iostream>
using namespace std;
class computers{
int id=21;
protected:
string str="Master";
public:
string str2="command";


 friend void display(computers);
};
int a;
void display(computers aobj){
cout<<"Id of the Master computer is: "<<aobj.id<<endl;
 a=aobj.id;
}
class printer1: public computers{

    int printer1=a;
};
class printer2: public computers{
   int printer2=a;
};
class printer3: public computers{
   int printer3=a;
};
int main(){
    computers aobj;
    display(aobj);
}
#include <iostream>
using namespace std;
void def(int a, int b=1, int c=4, int d=3)//defining the default arguments in the function definition
{
    cout<<a+b+c+d<<endl;
}
int main(){
    def(1);
    def(1,6,7,8);
     def(3,4,5,6);
      def(1,2,3,4);

}
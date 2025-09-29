 
#include<iostream>
using namespace std;
 
class Circle
{   
   
    private: 
        double radius;
      
     
    public:    
        double  compute_area()
        {   // member function can access private data member radius
            cin>>radius;
            return 3.14*radius*radius;
        }
     
};

int main()
{   
    
    Circle obj;
     
    cout << "Area is:" << obj.compute_area();  // trying to access private data member directly outside the class using function
  
    return 0;
}
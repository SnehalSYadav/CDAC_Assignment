#include<iostream>
using namespace std;

class Shape{
public:
virtual double calculateArea() = 0;
};

class Circle: public Shape{
double radius;
public:
Circle(double r): radius(r){}
double calculateArea() {
    return 3.14*radius*radius;
}
};

class Rectangle: public Shape{
private:
double length;
double width;
public:
Rectangle(double l, double w): length(l), width(w){}
    double calculateArea() {
        return length*width;
    }
};

int main(){
Shape* shape1;
Shape* shape2;

Circle myCircle(5.0);
Rectangle myRectangle(70, 5.50);

shape1 = &myCircle;
shape2 = &myRectangle;

cout<<"Area of Circle is: "<<shape1->calculateArea()<<endl;
cout<<"Area of Rectangle is: "<<shape2->calculateArea()<<endl;

}
#include<iostream>
#include<math.h>

using namespace std;
class Shape{
    public:
        virtual float area() = 0;
        virtual float peri() = 0;

};

class Rectangle: public Shape{
    private:
        float len, bre;
    public:
        Rectangle(int l = 1, int b = 1){len = l; bre = b; }

        float area(){return len * bre;}
        float peri(){return (2*(len+bre));}

};

class Circle: public Shape{
    private:
     float rad;
    public:
        Circle(float r){rad = r;}
        float area(){return 3.14*(rad*rad);}
        float peri(){return 2*3.14*rad;}
};

int main(){
    Shape *s = new Rectangle(10,5);
    cout<<"Area of Rectangle "<<s->area()<<endl;
    cout<<"Perimeter of Rectangle "<<s->peri()<<endl;

    s = new Circle(10);
    cout<<"Area of Cicle "<<s->area()<<endl;
    cout<<"Perimeter of Circle "<<s->peri()<<endl;
}
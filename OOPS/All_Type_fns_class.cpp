#include<iostream>
using namespace std;

class Rectangle{
    private:
        int len, bre;
    public:
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &r);
        
        int getlen(){
            return len;
        }
        int getbre(){
            return bre;
        }

        void setlen(int l);
        void setbre(int b);

        int area();
        int peri();

        bool isSqr();
        ~Rectangle();

};

int main(){

    Rectangle r1(10,10);
    cout<<"Area "<<r1.area()<<endl;
    if(r1.isSqr()){
        cout<<"Yes\n";
    }

    return 0;
}

Rectangle::Rectangle(){  // :: is Scope Resolution Operator in cpp used to define member of fns outside the class def^n
    len = 1;
    bre = 1;
}

Rectangle::Rectangle(int l, int b){
    len = l;
    bre = b;
}

Rectangle::Rectangle(Rectangle &r){
    len = r.len;
    bre = r.bre;
}

void Rectangle::setlen(int l){
    len = l;
}

void Rectangle::setbre(int b){
    bre = b;
}

int Rectangle::area(){
    return len*bre;
}

int Rectangle::peri(){
    return 2*(len+bre);
}

bool Rectangle::isSqr(){
    return len == bre;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed";
}
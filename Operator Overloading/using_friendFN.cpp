#include<iostream>
using namespace std;

class Complex{
    public:
        int real;
        int img;
    
    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2){
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}

int main(){
    Complex c1,c2,c3;
    c1.real = 5; c1.img = 3;
    c2.real = 10; c2.img = 5;

    c3 = c1 + c2;
    cout<<c3.real<<" + i"<<c3.img<<endl;
    return 0;
}
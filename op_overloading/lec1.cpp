#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        Complex(int r=0, int i=0){
            real = r;
            img = i;
        }
        Complex operator+(Complex x){
            Complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;
            return temp;
        }
          
};
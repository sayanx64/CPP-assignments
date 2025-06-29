#include<iostream>
using namespace std;

class Complex{
    private:
        int real; int img;
    public:
        Complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }
        Complex add(Complex x){
            Complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;
            return temp;
        }
};

int main(){
    int r1,r2,c1,c2,c3,r3;
    cout<<"Enter 1st real and img: "; cin>>r1>>c1;
    cout<<"Enter 2nd real and img: "; cin>>r2>>c2;

    Complex C1(r1,c1);
    Complex C2(r2,c2);
    Complex C3;
    C3 = C1.add(C2);
    return 0;
}
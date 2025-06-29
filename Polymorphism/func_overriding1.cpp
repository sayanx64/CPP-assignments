#include<iostream>

using namespace std;

class Base{
    public:
        void disp(){
            cout<<"Disp of Base\n";
        }
};

class Derived: public Base{
    public:
        void disp(){
            cout<<"Disp of Derived\n";
        }
};

int main(){
    Derived d;
    d.disp();

}
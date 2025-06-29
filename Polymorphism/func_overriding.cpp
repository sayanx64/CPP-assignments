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
        void disp(int x){
            cout<<"Disp of Derived\n";
        }
        
};


int main(){
    Derived d;
    // d.Base::disp();
    d.disp(10);
    return 0;
}

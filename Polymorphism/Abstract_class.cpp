#include<iostream>
using namespace std;
// runtime polymorphism in java: Dynamic method for dispatch

class Base{
    public:
        virtual void fun1()=0;
        virtual void fun2()=0;
};

class Derived: public Base{
    public: 
        void fun1(){
            
        }
        void fun2(){
            cout<<"Fun2 of derived\n";
        }
};

int main(){
    Derived d;
    d.fun1();
    d.fun2();
    
}
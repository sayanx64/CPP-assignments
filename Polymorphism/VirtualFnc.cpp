#include<iostream>
using namespace std;

// class Base{
//     public:
//         void fun(){
//             cout<<"Fun of base"<<endl;
//         }
    
// };

// class Derived: public Base{
//     public:
//         void fun(){
//             cout<<"Fun of derived"<<endl;
//         }
// };

// int main(){
//     Base *p = new Derived(); // base class pointer and Derived object
//     p->fun(); // Fun of base
// }




class Base{
    public:
        virtual void fun(){ // virtual fnc
            cout<<"Fun of base"<<endl;
        }
    
};

class Derived: public Base{
    public:
        void fun(){
            cout<<"Fun of derived"<<endl;
        }
};

int main(){
    Base *p = new Derived(); // base class pointer and Derived object
    p->fun(); // Fun of deried
}
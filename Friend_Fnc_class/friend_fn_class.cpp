#include<iostream>

using namespace std;

// class Test{
//     private: int a;
//     protected: int b;
//     public: int c;
//     friend void fun();
// };

// void fun(){
//     Test t;
//     t.a = 10;
//     t.b = 15;
//     t.c = 9;
//     cout<<t.a<<" "<<t.b<<" "<<t.c<<endl;
// }

// int main(){
//     fun();
// }


//friend class:
class Your; // Type specifier
class My{
    private: int a;
    protected: int b;
    public: int c;
    friend Your;
};

class Your{
    public:
        My m;
        void fun(){
            m.a = 10;
            m.b = 10;
            m.c = 10;
            cout<<m.a+" "<<m.b+" "<<m.c<<endl;
        }
};

int main(){
    Your y;
    y.fun();
}
#include<iostream>
using namespace std;
// runtime polymorphism in java: Dynamic method for dispatch
class Car{
    public:
        virtual void start(){
            cout<<"Car started"<<endl;
        }

};

class Innova: public Car{
    void start(){
        cout<<"Innova started\n";
    }
};

class Swift: public Car{
    void start(){
        cout<<"Swift started\n";
    }
};

int main(){
    Car *p = new Innova();
    p->start();
    p = new Swift();
    p->start();
}
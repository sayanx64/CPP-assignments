#include<iostream>
using namespace std;


class BasicCar{
    public:
        virtual void start(){cout<<"basic car started :)\n";}

};

class AdvanceCar: public BasicCar{
    void start(){cout<<"AdvanceCar Started :)\n";}
};

int main(){
    BasicCar *p = new AdvanceCar();
    p->start();
    return 0;
}
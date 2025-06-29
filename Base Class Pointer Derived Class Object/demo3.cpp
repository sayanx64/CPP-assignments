#include<iostream>

using namespace std;

class BasicCar{
    public:
        void start(){
            cout<<"Car started"<<endl;
        }
};

class AdvanceCar: public BasicCar{
    public: 
        void playMusic(){
            cout<<"music playing"<<endl;
        }
};
int main(){
    // AdvanceCar a;
    // BasicCar *ptr = new AdvanceCar;

    // ptr->start();
    // ptr->playMusic(); // not possible

    BasicCar b;
    // AdvanceCar *ptr = &b; // meaning less 

}

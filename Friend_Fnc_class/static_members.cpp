#include<iostream>

using namespace std;

class Test{
    public:
        int a;
        static int count;

        Test(){
            a = 10;
            count++;
        }
        static int getcount(){
            //a++; cant use non static members in static fncs 
            return count;
        }
};

int Test::count = 0;

int main(){
    Test t1, t2;
    cout<<Test::getcount();
    cout<<t1.getcount();
}
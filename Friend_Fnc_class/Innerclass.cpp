#include<iostream>
using namespace std;

class Outer{
    public:

        void fun(){
            i.disp();
        }
        // Inner i; // not allowed here
        class Inner{
            public:
                void disp(){
                    cout<<"Disp of Inner"<<endl;
                }
        };
        Inner i; // only after the class
};

int main(){
    Outer::Inner i;
    
}
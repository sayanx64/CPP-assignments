#include<iostream>

using namespace std;

class  Rectangle
{
private:
    /* data */
public:
    void area(){
        cout<<"Area of Rect"<<endl;
    }
};

class Cuboid: public Rectangle{
    public:
        void volume(){
            cout<<"Cuboid Volume"<<endl;
        }
};

int main(){

    // Rectangle r;
    // Cuboid *q = new Rectangle; // not allowed

    Cuboid c;
    Rectangle *p = new Cuboid; // though its a cuboid , and im saying that its a rect , im not wrong, but i dont have full knowledge of cuboid
    
    p->area();
    p->volume();

    return 0;
}
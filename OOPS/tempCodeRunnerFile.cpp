#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        void setlen(int l){
            if(l>=0)
                length = l;
            else{
                cout<<"Length can't be negative(assigned 0)";
                length = 0;
            }
        }

        void setbreadth(int b){
            if(b>=0)
                breadth = b;
            else{
                cout<<"breadth can't be negative(assigned 0)";
                breadth = 0;
            }
        }

        int getlen(){
            return length;
        }
        int getbreadth(){
            return breadth;
        }
        int area(){
            return length*breadth;
        }
        int peri(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle *p = new Rectangle();
    int l,b;
    cout<<"Enter length: "; cin>>l;
    p->setlen(l);
    cout<<"Enter breadth: "; cin>>b;
    p->setbreadth(b);

    cout<<"Area is: "<<p->area()<<endl;
    cout<<"Perimeter is: "<<p->peri()<<endl;

    cout<<"Length: "<<p->getlen()<<endl;
    cout<<"Breadth: "<<p->getbreadth()<<endl;

    delete p;
    return 0;
}
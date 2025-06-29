#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        // Rectangle(){
        //     length = 1;
        //     breadth = 1;
        // }

        Rectangle(int l=1, int b=1){
            setlen(l);
            setbreadth(b);
        }

        Rectangle(Rectangle &r){
            length = r.length;
            breadth = r.breadth;
        }


        void setlen(int l){
            if(l>=0)
                length = l;
            else{
                cout<<"Length can't be negative(assigned 0)\n";
                length = 0;
            }
        }

        void setbreadth(int b){
            if(b>=0)
                breadth = b;
            else{
                cout<<"breadth can't be negative(assigned 0)\n";
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
    Rectangle r1;
    Rectangle r2(r1);
    cout<<r2.area()<<endl;
    return 0;
}
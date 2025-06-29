#include<iostream>
using namespace std;

class Student{
    private:
        int roll;
        string name;
        int x, y, z;
    public:
        Student(int r, string n, int p, int c, int m){
            roll = r;
            name = n;
            x = p; y = c; z = m;
        }
        int total(){
            return x+y+z;
        }
        char grade(){
            float avg = (x+y+z)/3;
            if(avg>=90 && avg<=100){
                return 'O';
            }
            else if(avg>=80 && avg<90){
                return 'E';
            }
            else{
                return 'F';
            }
        }
};

int main(){
    int rno, m,p,c;
    string name;
    cout<<"Enter Roll Num: "; cin>>rno;
    cout<<"Enter Student's Name: "; cin>>name;
    cout<<"Enter marks of 3 subs(phy, chem, maths): "; cin>>p>>c>>m;

    Student s(rno, name, p, c, m);

    cout<<"\n\n";
    cout<<"Total marks: "<<s.total()<<endl;
    cout<<"Grade: "<<s.grade();


}
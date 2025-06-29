#include<iostream>
using namespace std;

// class Innova{
//     public:
//         static int price;
//         static int getPrice(){
//             return price;
//         }
// };

// int Innova::price = 20;

// int main(){
//     Innova i1,i2,i3;
//     cout<<i1.price<<endl;
//     cout<<i3.price<<endl;
    
//     cout<<Innova::price<<endl;
// }



class Student{
    public:
        int roll;
        string name;
        static int adno;
        Student(string n){
            adno++;
            roll = adno;
            name = n;
        }
        void display(){
            cout<<"Name "<<name<<endl<<"Roll No. "<<roll<<endl;
        }
};

int Student::adno = 0;

int main(){
    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");
    Student s4("Khan");
    Student s5("Khan");
    Student s6("Khan");
    Student s7("Khan");
    
    s1.display();
    s3.display();
    s7.display();
    cout<<"Number of admissions: "<<Student::adno<<endl;
}
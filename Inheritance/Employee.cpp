#include<iostream>
using namespace std;

class Employee{
    private:
        int eid;
        string name;
    public:
        Employee(int e, string n){
            eid = e;
            name = n;
        }
        int getEmployeeID(){return eid;}
        string getName(){return name;}
};

class PartTimeEmployee: public Employee{
    private:
        int wage;
    public:
        PartTimeEmployee(int e, string n, int w):Employee(e,n){
            wage = w;
        }
        int getWage(){return wage;}
};

class FullTimeEmployee: public Employee{
    private:
        int salary;
    public:
        FullTimeEmployee(int e, string n, int sal):Employee(e,n){
            salary = sal;
        }
        int getSal(){return salary;}
};

int main(){
    PartTimeEmployee p1(1,"John",300);
    FullTimeEmployee p2(2,"Raj",5009);

    cout<<"Salary of  "<<p2.getName()<<" is "<<p2.getSal()<<endl;
    cout<<"Daily wage of "<<p1.getName()<<" is "<<p1.getWage()<<endl;
}
#include<iostream>

using namespace std;


namespace First{
void fun(){
    cout<<"First";
}
}

namespace Second{
void fun(){
    cout<<"sec";
}
}

using namespace First;
int main(){
    fun();
}
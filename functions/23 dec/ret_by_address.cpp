#include<iostream>
using namespace std;

// int * fun(){
//     int *p = new int[5];
//     for(int i = 0; i<5; i++){
//         p[i] = 5*i;
//     }
//     cout<<p<<endl;
//     return p;
// }

// int main(){

//     int *q = fun();
//     cout<<q<<endl;
//     for(int i = 0; i<5; i++){
//         cout<<q[i]<<endl;
//     }

//     delete[] q;
//     return 0;
// }



// return by reference

// int & fun(int &x){
//     return x;
// }

// int main(){
//     int a = 10;
//     fun(a) = 25;
//     cout<<a;
//     return 0;
// }


int &fun(int &a){
    cout<<a<<endl; // 10
    return a; // return by reference ... returns the address of a
}

int main(){
    int x = 10;
    fun(x) = 25; // we can use this fn as L value... in LHS
    cout<<x;
    return 0;
}
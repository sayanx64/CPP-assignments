#include<iostream>
using namespace std;

// int g = 5;

// void fun(){
//     int g = 10;
//     {
//         int g = 0;
//         g++;
//         cout<<g<<endl;
//     }
//     cout<<g<<endl;
//     g++;
// }


// int main(){
//     cout<<g;
//     fun();
//     cout<<g;
//     return 0;
// }

//// Scoping rule:
int x = 10;
int main(){
    int x = 20;
    {
        int x = 30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;
    return 0;
}
#include<iostream>
using namespace std;

// int main(){
//     int x = 10;
//     const int *const ptr = &x;
    
//     // ++*ptr;

//     int y = 20;

//     // ptr = &y;
    
//     //++*ptr;
//     cout<<*ptr<<" "<<x<<endl;
    
// }


// class Demo{
//     public:
//         int x=10;
//         int y=20;

        
//         void disp() const {   // constant fncs
//             // x++;
//             cout<<x<<" "<<y<<endl;
//         }
// };

// int main(){
//     Demo d;
//     d.disp();
// }


void fun(int const &a, int &b){ // constant reference
    cout<<a<<" "<<b<<endl;
    // a++;
}

int main(){
    int x =10, y =20;

    fun(x,y);

    cout<<"Main: "<<x<<" "<<y<<endl;
}

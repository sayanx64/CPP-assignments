#include<iostream>
using namespace std;

// int max(int a=0, int b=0, int c=0){
//     return (a>b && a>c) ? a : (b>c ? b:c);
// }

// int main(){
//     cout<<max();
//     return 0;
// }


// pass by value
// void swap(int a, int n){
//     cout<<a<<" "<<n<<endl;
//     int t = a;
//     a = n;
//     n = t;
//     cout<<a<<" "<<n<<endl;
// }

// int main(){
//     int x=10, y = 20;
//     swap(x,y);
//     cout<<x<<" "<<y<<endl;
//     return 0;
// }


// call by address
// machine code will not be having two fns... the speudo swap fn will be pasted inside the main fn
// single piece of function
// can be used only for simple functions
// void swap(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
//     for(int i = 0; i<10; i++){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     int x = 10, y = 20;
//     swap(&x, &y);

//     cout<<x<<" "<<y<<endl;
//     return 0;
// }









// return by address

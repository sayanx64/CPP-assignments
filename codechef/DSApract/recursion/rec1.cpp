#include<iostream>
using namespace std;


void fun1(int x){
    if(x>0){
        cout<<x<<endl;
        fun1(x-1);
        
        
    }
}
int main(){
    int n=3;
    fun1(3);
    return 0;
}
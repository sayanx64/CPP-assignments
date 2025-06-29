#include<iostream>
using namespace std;


void fun(int n){
    if(n>0){
        fun(n-1);
        printf("%d ", n); cout<<endl;
        
    }
}

int main(){
    int x=4;
    fun(x);
    return 0;
}
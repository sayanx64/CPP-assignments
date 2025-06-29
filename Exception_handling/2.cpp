#include<iostream>
using namespace std;

float division(int x, int y){
    if(y==0){
        throw 1;
    }
    else{
        return x/y;
    }
} 

int main(){
    int x=10, y=0, z;

    try{
        z = division(x,y);
        cout<<z<<endl;
    }
    catch(int e){
        cout<<"Zero Div Error"<<e;
    }
    cout<<"Bye"<<endl;
}
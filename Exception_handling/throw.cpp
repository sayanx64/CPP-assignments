#include<iostream>
using namespace std;

class MyException{

};



float division(int x, int y)throw(int)
{
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
    catch(MyException e){
        cout<<"Zero Div Error "<<endl;
    }
    cout<<"Bye"<<endl;
}
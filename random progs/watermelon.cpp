#include<iostream>
using namespace std;

string dividew(int w){
    if(w%2 == 0 && w>=4){
        return "YES";
    }
    else{
        return "NO";
    }
}
int main(){
    int w;
    cout<<"Enter the weight of watermelon: "; cin>>w;
    cout<<dividew(w);
}
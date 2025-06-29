#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t>0){
        int N,X;
        cin>>N>>X;
        if(N%6==0){
            cout<<((int)(N/6)*X);
        }
        else{
            cout<<(((int)(N/6)+1)*X);
        }
        t--;
    }

    return 0;
}
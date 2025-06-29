#include<iostream>
using namespace std;


int main(){
    int n; cin>>n;
    int scores[n];
    int gs = 0, ms = 0;

    for(int i=0; i<n; i++){
        cin>>scores[i];
        if(scores[i] >= 7) gs++;
        else ms++;
    }
    cout<<gs<<" "<<ms<<endl;
    return 0;
}
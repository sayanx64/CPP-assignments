#include<iostream>
#include <vector>
using namespace std;

bool canBuy(int b, const vector<int>& P) {
    for (int i : P) {
        if (i == b) {
            return true;
        }
    }
    return false;
}

int main(){
    int budget; 
    cout<<"Enter budget: "; cin>>budget;
    vector<int> Prices = {10, 20, 30, 40, 50}; 
    if(canBuy(budget, Prices)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
#include<iostream>
using namespace std;


int maxCostOfDay(int cost[], int labels[], int dC){
    int max_cost = 0;
    int running_cost = 0;
    int legal_count = 0;
    int n = cost.size();

    for(int i = 0; i<n; i++){
        running_cost += cost[i]; // legal or illegal cost will add
        if(labels[i] == "legal"){
            legal_count++;
        }
        if(legal_count == dC){
            max_cost = max(max_cost, running_cost);
            running_cost = 0;
            legal_count = 0;
        }
    }
    return max_cost;
}



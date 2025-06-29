/*
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
*/

#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter array size: "; cin>>n;
    int A[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    for(int i = 0; i<n; i++){
        A[n-1] += 1;
        if(n-1 == 9){
            A[n-1-i] = 0;
        }
    }
    return 0;
}
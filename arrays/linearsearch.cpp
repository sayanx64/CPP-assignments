#include<iostream>
using namespace std;
// int main(){

//     int s;
//     cout<<"Enter array size: "; cin>>s;
//     int A[s];
//     cout<<"Enter array elements: ";
//     for(int i = 0; i<s; ++i){
//         cin>>A[i];
//     }

//     int key;
//     cout<<"Enter key to search an element: ";
//     cin>>key;
//     for(int i = 0; i<s; i++){
//         if(key == A[i]){
//             cout<<"Key found at index: "<<i<<endl;
//             return 0;
//         }
//     }
//     cout<<"Key not found"<<endl;

//     return 0;
// }

/* 
Time complexity :min-> O(1) , max-> O(n)
avg case time: (1+2+3+...+n)/n = (n+1)/2
Space Compl : O(1)
*/


// improving linear search: when we're searching an element, possibly we'll search it again... like books...
// so after 1 search we'll move the key element 1 step ... then again 1 step forward , towards left .. starting index[0]
// move that key elements to previous elem... it will come closer and closer...(swapping) 
// this method is called : TRANSPOSITION


// int main(){
//     int A[10] = {1,2,3,4,5,6,7,8,9,12};
//     int k;
//     cout<<"Enter key to search: "; cin>>k;
//     for(int i = 0; i<10; i++){
//         if(k == A[i]){
//             //swap(A[i] , A[i-1])
//             int t = A[i];
//             A[i] = A[i-1];
//             A[i-1] = t;
//             cout<<"element found at index: "<<(i)<<endl;
//             return 0;
//         }
//     }
//     cout<<"key not found"<<endl;
//     return 0;
// }








// now another method: called: Move to front or MOVE TO HEAD
// if we found an element we'll shift it to the front ... to search in constant time

// int Lsearch(int A[], int n){
//     int k;
//     cout<<"Enter key to search: "; cin>>k;
//     for(int i =0; i<10; i++){
//         if(k == A[i]){
//             //swap A[i] with A[0];
//             int t = A[i];
//             A[i] = A[0];
//             A[0] = t;
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n = 10;
//     int A[n] = {1 , 2,3,4,5,6,7,8,9,10};
//     int result = Lsearch(A,n);
//     if(result != -1){
//         cout<<"Element found at index: "<<result<<endl;
//     }
//     else{
//         cout<<"Element not found"<<endl;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << A[i] << " ";
//     }
//     cout << endl;

// }




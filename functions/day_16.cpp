#include<iostream>

using namespace std;


// int sumofodd(int A[], int n){
//     int sum=0;
//     for(int i = 0; i<n; i++){
//         if(A[i]%2 != 0){
//             sum+=A[i];
//         }
//     }
//     return sum;
// }
// int main(){
//     int n;
//     int A[100];
//     printf("Enter the size of the array: "); scanf("%d", &n);
//     printf("Enter the array elems: ");
//     for(int i = 0; i<n ; i++){
//         scanf("%d", &A[i]);
//     }
//     printf("Sum of the odd nums present in the given array: %d", sumofodd(A,n));
    
//     return 0;
// }


// q2.

// #include<limits.h>
// void swap(int A[], int n){
//     int l=INT_MIN;
//     int s=INT_MAX;
//     int li = -1, si=-1;
//     for(int i = 0; i<n; i++){
//         if(A[i]>l){
//             l=A[i];
//             li = i;
//         }
//         if(A[i]<s){
//             s=A[i];
//             si = i;
//         }
//     }
//     // swap
//     int t = A[li];
//     A[li] = A[si];
//     A[si] = t;
// }
// int main(){
//     int n;
//     int A[100];
//     printf("Enter the size of the array: "); scanf("%d", &n);
//     printf("Enter array elems: ");
//     for(int i =0; i<n ; i++){
//         scanf("%d", &A[i]);
//     }
//     printf("Original Array: ");
//     for(int i =0; i<n ; i++){
//         printf("%d ", A[i]);
//     }

//     swap(A,n);

//     printf("\nArray after swapping: ");
//     for(int i =0; i<n ; i++){
//         printf("%d ", A[i]);
//     }
//     return 0;
// }



// q3.
// #include<limits.h>
// int secondLargest(int A[], int n){
//     int lar = A[0];
//     int seclar = INT_MIN;
//     for(int i = 1 ; i<n ;i++){
//         if(A[i] > lar){
//             seclar = lar;
//             lar = A[i];
//         }
//         else if(A[i]>seclar && A[i] < lar){
//             seclar = A[i];
//         }
//     }
//     return seclar;
// }
// int main(){
//     int n;
//     int A[100];
//     printf("Enter the array size: "); scanf("%d", &n);
//     printf("Enter array elems: "); 
//     for(int i = 0 ; i<n; i++){
//         scanf("%d", &A[i]);
//     }
//     printf("Second largest element of the given array is: %d",secondLargest(A,n));
//     return 0;
// }


// q4.
// int LinearSearch(int A[], int n, int t){
//     int f=0;
//     for(int i = 0; i<n; i++){
//         if(A[i] == t){
//             f=1;
//             return i+1;
//         }
//     }
//     return f;
// }

// int main(){
//     int n;
//     int A[100];
//     printf("Enter the array size: "); scanf("%d", &n);
//     printf("Enter array elems: "); 
//     for(int i = 0 ; i<n; i++){
//         scanf("%d", &A[i]);
//     }
//     int target;
//     printf("Enter the element to search: "); scanf("%d", &target);
//     if(LinearSearch){
//         printf("Element found at position: %d",LinearSearch(A, n, target));
//     }
//     else{
//         printf("Element not found");
//     }
//     return 0;
// }


// q5.
// move zeros to the right
// void moveZeroes(int A[], int n){
//     int j = 0;
//     for(int i = 0; i<n; i++){
//         if(A[i] != 0){
//             if(i!=j){
//                 int t = A[i];
//                 A[i] = A[j];
//                 A[j] = t;
//             }
//             j++;
//         }
//     }
// }

// int main(){
//     int n;
//     int A[100];
//     printf("Enter the array size: "); scanf("%d", &n);
//     printf("Enter array elems: "); 
//     for(int i = 0 ; i<n; i++){
//         scanf("%d", &A[i]);
//     }
//     printf("Original Array: ");
//     for(int i =0; i<n ; i++){
//         printf("%d ", A[i]);
//     }

//     moveZeroes(A,n);

//     printf("\nArray after moving zeroes: ");
//     for(int i =0; i<n ; i++){
//         printf("%d ", A[i]);
//     }
//     return 0;
// }




//q6.

void bubsort(int A[], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(A[j] > A[j+1]){
                int t=  A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
}

double findMedian(int A[], int n){
    bubsort(A,n);
    if(n%2!=0){
        return A[n/2];
    }
    else{
        return (A[n / 2 - 1] + A[n / 2]) / 2.0;
    }
}

int main(){
    int n;
    int A[100];
    printf("Enter the array size: "); scanf("%d", &n);
    printf("Enter array elems: "); 
    for(int i = 0 ; i<n; i++){
        scanf("%d", &A[i]);
    }
    printf("Median of the array: %fd", findMedian(A,n));
    return 0;
}
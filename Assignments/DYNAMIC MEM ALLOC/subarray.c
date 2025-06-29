// #include <stdio.h>
// int n=10;
// int arr[]={1,2,3,4,5,6,7,8,9,10};
// int start=0;
// int end=9;

// int sum(int L, int R){
//     if(L>R)
//     return 0;
//     return arr[L]+sum(++L,R);
// }

// int sub(int L, int R, int k){
//     if(L>R)
//     return 0;
//     int S=sum(L,R);
//     if(S==k){
//         start=L;
//         end=R;
//         return 1;
//     }
//     if(S>k)
//     return sub(L,--R,k);
//     if(S<k)
//     return sub(++L,R,k);
// }

// void display(int L,int R){
//     for(int i=L;i<=R;i++){
//         printf("%d ",arr[i]);
//     }
// }

// int main(){
//     int target=15;
//     if(sub(start,end,target)==1){
//         printf("subarray is found ");
//         display(start,end);
//     }
//     else
//     printf("element not fond");
    
// }




// subarray sliding window 2 pointer approach

#include <stdio.h>

int n = 10;
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void display(int L, int R) {
    for (int i = L; i <= R; i++) {
        printf("%d ", arr[i]);
    }
}

void findSubarray(int target) {
    int start = 0, end = 0, current_sum = 0;

    while (end < n) {
        current_sum += arr[end];

        // Adjust the `start` pointer if the sum exceeds the target
        while (current_sum > target && start <= end) {
            current_sum -= arr[start];
            start++;
        }

        // Check if we found the target sum
        if (current_sum == target) {
            printf("Subarray found: ");
            display(start, end);
            return;
        }

        // Move the `end` pointer to the right
        end++;
    }

    // If no subarray is found
    printf("No subarray with sum %d found.\n", target);
}

int main() {
    int target = 15;
    findSubarray(target);
    return 0;
}

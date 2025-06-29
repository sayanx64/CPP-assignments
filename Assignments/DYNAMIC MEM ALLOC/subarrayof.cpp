#include<stdio.h>
#include<stdlib.h>

void subarray(int target, int *arr, int n){
    int start = 0, end = 0, cursum = 0;
    while(end<n){
        cursum += arr[end];
        while(cursum > target && start <= end){
            cursum -= arr[start];
            start++;
        }

        if(cursum == target){
            printf("Subarray found: ");
            for(int i = start; i<=end; i++){
                printf("%d ", arr[i]);
            }
            return;
        }
        end++;
    }

    printf("No subarray found :(");

}


int main(){
    int n;
    printf("Enter array size: "); scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter array elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int t;
    printf("Enter target: "); scanf("%d", &t);
    subarray(t,arr, n);
    return 0;
}
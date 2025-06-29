
// wap to multiply two nums using pointers
#include<stdio.h>

// int mult(int *p1, int *p2){
//     return *(p1) * *(p2);
// }

// int main(){
//     int a,b;
//     printf("Enter a: "); scanf("%d", &a);
//     printf("Enter b: "); scanf("%d", &b);
//     int c = mult(&a,&b);
//     printf("result: %d",c);
//     return 0;
// }



// wap to swap two nums:

// void swap(int *p1, int *p2){
//     int t = *p1;
//     *p1 = *p2;
//     *p2 = t;

// }

// int main(){
//     int a,b;
//     printf("Enter a: "); scanf("%d", &a);
//     printf("Enetr b :"); scanf("%d", &b);

//     printf("Before swapping: a = %d , b = %d", a,b);
//     swap(&a,&b);
//     printf("\nAfter swapping: a = %d , b = %d", a,b);
//     return 0;
// }

#include<stdlib.h>
// // sum of elems of array using ptrs


// int arrsum(int *A, int n){
//     int s=0;
//     for(int i = 0; i<n; i++){
//         s += (A[i]);
//     }
//     return s;
// }
// int main(){
//     int n, *arr;
//     printf("Enter array size: "); scanf("%d", &n);
//     arr = (int *)malloc(n * sizeof(int));
//     printf("Enter array elems: ");
//     for(int i = 0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("sum = %d",arrsum(arr,n));
//     return 0;
// }



// wap to read a string and print it in rev order
#include<string.h>
void revstring(char *s){
    int n = strlen(s);
    for(int i = n; i>=0; i--){
        printf("%c",s[i]);
    }
}

void revstr(char *s){
    
    for(int start = 0, end = strlen(s)-1; start<end; start++, end--){
        char t = s[start];
        s[start] = s[end];
        s[end] = t;
    }
}

int main(){
    char s[100];
    printf("Enter a string: "); scanf(" %[^\n]", s);
    // revstring(s);
    revstr(s);
    printf("Reversed : %s",s);
}


// swap two consecutive chars

// void swapcons(char *str){
//     int n = strlen(str)-1;
//     for(int i = 0; i<n; i+=2){
//         int t = str[i];
//         str[i] = str[i+1];
//         str[i+1] = t;
//     }
// }

// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     scanf(" %[^\n]", str);

//     swapcons(str);

//     printf("after swapping consecutive: %s", str);

//     return 0;

// }


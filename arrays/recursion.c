#include<stdio.h>

// int fibo(int n){
//     if(n == 0){
//         return 0;
//     }
//     if(n ==1){
//         return 1;
//     }
//     return fibo(n-1) + fibo(n-2);
// }


// int main(){
//     int n;
//     printf("Enter no of terms: "); scanf("%d", &n);
//     printf("Fibo sequence: ");
//     for(int i = 0; i<n ; i++){
//         printf("%d ", fibo(i));
//     }
//     return 0;
// }


// int sod(int n){
//     if(n==0){
//         return 0;
//     }
//     return n%10 + sod(n/10);
// }

// int main(){
//     int a = 654;
//     printf("sod: %d", sod(a));
//     return 0;
// 

#include<string.h>

void revstr(char s[], int start, int end){
    if(start>=end){
        return;
    }
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    revstr(s, start+1, end-1);
}


int main(){

    char s[100];
    printf("Enter a str: "); scanf(" %[^\n]",s);
    revstr(s,0,strlen(s)-1);
    printf("Reversed: %s", s);
    return 0;
}
#include<stdio.h>


int sod(int num){
    int sum = 0;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main(){
    int num;
    printf("Enter number: "); scanf("%d", &num);
    while(num >= 10){
        num = sod(num);
    }
    printf("SUm of the digits until single digit: %d\n", num);
    return 0;
}

// int palindrome(int n){
//     int rev=0;
//     int t = n;
//     while(t>0){
//         int r=t%10;
//         rev=rev*10+r;
//         t/=10;
        
//     }
//     return (rev==n);
// }

// int main(){
//     int num;
//     printf("Enter a number: "); scanf("%d", &num);
//     if(palindrome(num)){
//         printf("%d is a palindrome number\n", num);
//     }
//     else{
//         printf("%d is not a palindrome number\n", num);
//     }
//     return 0;
// }

// int zeroCount(int n){
//     int c=0;
//     if(n == 0){
//         return 1;
//     }
//     while(n>0){
//         if(n%10==0){
//             c++;
//         }
//         n/=10;
//     }
//     return c;
// }

// int main(){
//     int n;
//     printf("Enter a number: "); scanf("%d", &n);
//     printf("Number of zeroes in the number %d : %d",n,zeroCount(n));
//     return 0;
// }



// int hcf(int m, int n){
//     while(m!=n){
//         if(m>n){
//             m=m-n;
//         }
//         else{
//             n = n-m;
//         }
//     }
//     return m;
// }
// int main(){
//     int a, b;
//     printf("Enter two numbers: "); scanf("%d%d", &a, &b);
//     printf("GCD of %d and %d = %d", a,b, hcf(a,b));

//     return 0;
// }

// n!/r! * (n-r)!


// int fact(int num) {
//     int f = 1;
//     for (int i = 1; i <= num; i++) {
//         f *= i;
//     }
//     return f;
// }

// int ncr(int n, int r){
//     return ((fact(n))/(fact(r)*fact(n-r)));
// }

// int main(){
//     int n, r;
//     printf("Enter the value of n: "); scanf("%d", &n);
//     printf("Enter the value of r: "); scanf("%d", &r);
//     printf("%d C %d = %d", n,r,ncr(n,r));
// }


// int fibo(int n){
//     int t1=0, t2=1, t3;
//     if (n==0 || n==1){
//         return 1;
//     }
//     while(t2<n){
//         t3 = t1+t2;
//         t1 = t2;
//         t2 = t3;
//     }
//     return (n==t2);
// }

// int main(){
//     int n; 
//     printf("Enter a number : "); scanf("%d", &n);
//     if(fibo(n)){
//         printf("%d is in the fibonacci series\n", n);
//     }
//     else{
//         printf("number is not in the series\n");
//     }

//     return 0;
// }
#include<stdio.h>

int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int t1=0,t2=1, nt;
    for(int i = 2; i<n; i++){
        nt = t1+t2;
        t1 = t2;
        t2 = nt;
    }
    return t2;
}

int main(){
    int n;
    printf("Enter the value of n: "); scanf("%d",&n);
    printf("%dth term of the fibonacci is: %d\n",n,fibo(n));
    return 0;
}
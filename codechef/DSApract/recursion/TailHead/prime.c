#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter n:"); scanf("%d", &n);
    int a = n;
    int sum=0;
    while(a>0){
        int r = a%10;
        sum+=pow(r,3);
        a= a/10;
    }
    if(sum==n){
        printf("yes");
    }
    else{
        printf("no");
    }
}
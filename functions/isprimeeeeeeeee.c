#include<stdio.h>

int IsPrime(int n){
    int cf=0;
    for(int i = 1; i<=n; i++){
        if(n%i ==0){
            cf++;
        }
    }
    if(cf==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter num to check: "); scanf("%d",&n);
    if(IsPrime(n)){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }
    return 0;
}
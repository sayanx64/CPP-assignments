int fibo(int n){
    int t1=0, t2=1, t3;
    if (n==0 || n==1){
        return 1;
    }
    while(t2<n){
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
    }
    return (n==t2);
}
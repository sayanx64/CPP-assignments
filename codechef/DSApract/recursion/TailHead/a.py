n = int(input("Enter a num: "))
a = n;
while n>0:
    r = n%10;
    n/=10;
    sum+=pow(r,3)
if (sum==a):
    print("yes")
else:
    print("no")
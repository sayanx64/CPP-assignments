#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
void revstr(char a[],int size)
{
    for(int i=0, j=size-1;i<j;i++,j--)
    {
       int t = a[i];
       a[i] = a[j];
       a[j] = t;
    }
}

int main(){
    char name[100],copy[100];
    printf("Enter the String : ");
    scanf("%[^\n]s",name);
    int l = strlen(name);
    revstr(name,l);
    printf("the reversed string is : %s ",name);
    return 0;
}
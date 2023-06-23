#include<stdio.h>
#include<stdlib.h>
int main(void){
    int sum=0,n,i;
    printf("enter the n value");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d number is %d",n,sum);
}
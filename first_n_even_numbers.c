#include<stdio.h>
#include<stdlib.h>
int main(void){
    int sum=0,n,i;
    printf("enter the n value");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
    printf("sum of first %d even number is %d",n,sum);
}
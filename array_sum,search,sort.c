#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100],i,limit,sum=0,searchkey,flag=0,j,temp;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the values\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);}
    for(i=0;i<limit;i++){
        sum=sum+a[i];
    }
    printf("sum is %d\n",sum);
    printf("enter the search number");
    scanf("%d",&searchkey);
    for(i=0;i<limit;i++){
        if(searchkey==a[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
    printf("the value found the position %d",i+1);
    }
    else{
        printf("value not found");
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted list\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }
    
}

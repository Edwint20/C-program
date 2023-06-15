#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num<0){
        printf("number is neagative");
    }else{
        printf("number is positive");
    }
    return EXIT_SUCCESS;

}
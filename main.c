#include<stdio.h>
#include "NumClass.h"

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("The Armstrong numbers are:");
    for(int i=a;i<=b;i++)
    {
        if(isArmstrong(i)==1)
        {
            printf(" ");
            printf("%d",i);
        }
    }
    printf("\n");
    printf("The Palindromes numbers are:");
    for(int i=a;i<=b;i++)
    {
        if(isPalindrome(i)==1)
        {
            printf(" ");
            printf("%d",i);
        }
    }
    printf("\n");
    printf("The Prime numbers numbers are:");
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i)==1)
        {
            printf(" ");
            printf("%d",i);
        }
    }printf("\n");
    printf("The Strong numbers are:");
    for(int i=a;i<=b;i++)
    {
        if(isStrong(i)==1)
        {
            printf(" ");
            printf("%d",i);
        }
    }

    return 0;
}
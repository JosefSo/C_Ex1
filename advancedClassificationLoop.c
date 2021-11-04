#include<stdio.h>
#include<math.h>
#include "NumClass.h"

int numOfDigits(int x){
    int sum = 0;
    while(x>0){
        sum = sum+1;
        x = x/10;
    }
    return sum;
}
int isArmstrong(int x){
    int tmp = x, sum=0;
    int numdig = numOfDigits(x);

    while (tmp>0){
        sum = sum + pow((tmp%10), numdig);
        tmp = tmp/10;
    }
    if (x == sum){return 1;}
    return 0;

}

int isPalindrome(int x){
    int r, sum = 0, n = x;
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if (x == sum){
        return 1;
    }
    return 0;
}
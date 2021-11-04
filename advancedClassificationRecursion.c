#include<stdio.h>
#include<math.h>
#include "NumClass.h"

int Armstrong(int x, int len){
    if (x == 0){return 0;}
    if(x > 0 ) {
        return (pow(x%10,len) + Armstrong(x/10, len));
    }
}

int isArmstrong(int x){
    int len = 0;
    int tmp = x;
    while(tmp>0){
        len++;
        tmp = tmp/10;
    }
    if (x == Armstrong(x, len)){return 1;}
    return 0;
}

int num_reverse(int x, int rev){
    if (x == 0){return rev;}
    rev = (rev*10) + (x%10);
    return num_reverse(x/10, rev);
}

int isPalindrome(int x){
    int rev = num_reverse(x, 0);
    if (rev == x){return 1;}
    return 0;  
}
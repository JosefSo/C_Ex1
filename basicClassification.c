#include<stdio.h>
#include "NumClass.h"

int isPrime(int x){
    for(int i = 2; i<x; i++){
        if (x%i == 0){return 0;}
    }
    return 1;
}

int factorial(int n){
    int sum = 1;
    for(int i = 1; i<=n; i++){
        sum = sum*i;
    }
    return sum;
}
int isStrong(int x){
    int tmp = x;
    int sum = 0;
    while(tmp!=0){
        sum = sum+factorial(tmp%10);
        tmp = tmp/10;
    }
    if (sum == x){return 1;}
    return 0;  
}

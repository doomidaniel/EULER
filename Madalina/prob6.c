#include<stdlib.h>
#include<stdio.h>
//Problem 6
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
//((1+2+3+...+n)^2) - (1^2+...n^2) = [n*(n+1)*1/2]^2 - [n*(n+1)*(2*n+1)*1/6] = ... = [n*(n+1)*(n-1)*(3*n+2)*1/12]
/*
unsigned int diff( int n)
{
    return (n*(n+1)*(n-1)*(3*n+2)*1/12);
}*/

int main()
{
    int sum1=0, sum2=0,sum3=0,dif;
    int i;
    for(i=1;i<=100;i++)
    {
      sum1 += i*i;
      sum2 += i;
      
    }
    sum3  = sum2 *sum2;
    dif = sum3 - sum1;
    printf("diferenta = %d", dif);
    system("pause");
}

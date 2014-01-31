//Problem 6
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
//((1+2+3+...+n)^2) - (1^2+...n^2) = [n*(n+1)*1/2]^2 - [n*(n+1)*(2*n+1)*1/6] = ... = [n*(n+1)*(n-1)*(3*n+2)*1/12]

#include <stdio.h>

unsigned int diff( int n)
{
    return (n*(n+1)*(n-1)*(3*n+2)*1/12);
}

int main(void)
{
 printf("%d\n",diff(100));
 system("pause");
 return 0;
}

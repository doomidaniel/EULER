//Problem 7
#include <stdio.h>
#include <math.h>

int prime(n)
{
    int primes[n+5];
    int i=1,j,N;
    primes[0] = 1;
    primes[1] = 2;
    while(i<=n)
       {
           for(N=primes[i]+1;;N++)
           {
               for(j=i;j>0;j--)
               {
                   if (N%primes[j]==0) break;
               }
               if (j==0) 
               {primes[++i] = N;
                break;
               }
           }
       }
       return primes[n];
}


int main(void)
{
 printf("%d\n",prime(10001));
 system("pause");
 return 0;
}

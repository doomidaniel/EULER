//Problem 10
/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.*/

#include <stdio.h>
#include <math.h>

unsigned char IsPrime(unsigned long nr)
{
  unsigned long i;
  for(i=3;i<=sqrt(nr);i+=2)
  {
   if (nr%i==0)
     return 0;                        
  }
  /*if (i>sqrt(nr)) */return 1;
         
}

int main(void)
{
 unsigned long i;
 unsigned long long sum = 2;
 for(i=3;i<2000000;i+=2)
 {
   if(IsPrime(i)) sum+=i;                    
 }
 printf("%llu\n",sum);
 system("pause");
 return 0;
}

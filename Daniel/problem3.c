//Problem 3
// What is the largest prime factor of the number 600851475143 ?
#include <stdio.h>

long long LargestPrimeFactor(long long n) 
{ 
  long long i; 
  long long largestfactor=0; 

  for (i=2;i*i<=n;i++) 
  { 
    while(n%i==0) 
    { 
      n=n/i; 
      largestfactor=i; 
    } 
  } 
  if (n>1) 
  { 
    if (n>largestfactor) 
    { 
    largestfactor=n; 
    } 
  } 

  return largestfactor; 
} 

int main(void)
{
    
  printf("%lld",LargestPrimeFactor(600851475143ll)); 
  system("pause");    
  return 0;
   
}

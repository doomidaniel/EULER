//Problem 4
#include <stdio.h>
#include<math.h>

int IsThreeDigitProd(int n)
{
 int i,p;
 for (i=100;i<1000;i++)
 {
     if (n%i == 0)
     {
       p = n/i;
       if ( p>99 && p<1000) return 1;
     }
 }
 return 0;    
}

int IsPalindrome(int n)
{
  int R=0,N,r;
  N=n;
  while(N)
  {
     r = N%10;
     R = R*10 + r;
     N/=10;
  }
  
  if (n==R) return 1;
  return 0;    
}

int main(void)
{
 int n = 999*999;
 while(n>10000)
 {
  if (IsThreeDigitProd(n))
     {
       if(IsPalindrome(n)) 
       { printf("%d\n",n);
         break;
       }
     }
     --n;        
 }


 system("pause");
 return 0;
}

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
  int i,r,v[50];
  r=n;
  for(i=0;r;i++)
  {
     v[i] = r%10;
     r/=10;
  }
  while(i)
  {
    r+=v[i]*pow(10,i);
    --i;
  }
  if (n==r) return 1;
  return 0;    
}

int main(void)
{
 int n = 999*999;
 while(n>0)
 {
  if (IsThreeDigitProd(n))
     {
       if(IsPalindrome(n)) 
       { printf("%d\n",n);
         break;
       }
     }
             
 }


 system("pause");
 return 0;
}

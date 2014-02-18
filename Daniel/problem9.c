//Problem 9
/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/
/*

It is easy to construct sets of Pythagorean Triples.

When m and n are any two positive integers (m < n):

a = n2 - m2
b = 2nm
c = n2 + m2

*/
#include <stdio.h>

int main(void)
{
 int n,m,sum;
 
 for(n=1;n<23;n++)
 {
   for(m=1;m<23;m++)
   {
      if(n*n + n*m == 500)
      {
          printf("%d",(n*n*n*n-m*m*m*m)*(1000-2*n*n));
          system("pause");
          return 0;
      }                           
   }   
 }
 system("pause");
 return 0;

}

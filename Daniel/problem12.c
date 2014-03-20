/*

For a non-square integer every divisor d of n is paired with divisor n/d of n and \sigma_{0}(n) is then even; for a square integer one divisor (namely \sqrt n) is not paired with a distinct divisor and \sigma_{0}(n) is then odd.
*/

#include <stdio.h>
#include <math.h>
int NrDiv(int nr)
{
int sqrtnr = (int) sqrt(nr);
int d,ret=0;
for(d=1;d<sqrtnr;d++)
    {
     if(nr%d==0) ret+=2;
    }
if ( sqrtnr * sqrtnr == nr ) ret--; //for a square integer one divisor (namely \sqrt n) is not paired
return ret;
}
int main(void)
{
int triag=0;
int i;

for(i=1;;i++)
{
  triag +=i;
  if (NrDiv(triag)>=500) break;  
}

 printf("%u\n",triag);
 system("pause");
 return 0;
}

#include <stdio.h>

unsigned int Collatz_terms(unsigned int nr)
{
 unsigned int ret=1, working_nr = nr;
 
 while(working_nr>1)
 {
   if(working_nr%2==0) 
     {
      working_nr/=2;
      ret++;
     }
   else
    {
     working_nr = working_nr*3+1;
     ret++;
    }
 }
 return ret;     
}
int main(void)
{
 unsigned int i,terms,starting=1,max=0;
 for(i=1;i<1000000;i++)
 {
  terms = Collatz_terms(i);
  if(terms > max) 
   {
     max = terms;
     starting = i;
   }
 }
 printf("Starting=%u\n",starting);    
 system("pause");
 return 0;
}

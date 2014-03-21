#include<stdio.h>
#include<stdlib.h>
int ePrim(unsigned long count)
{
   unsigned long i;
  for(i=3;i<=sqrt(count);i+=2)
  {
   if (count%i==0)
     return 0;
  }
  return 1;
}
int main()
{
   unsigned long count; 
   unsigned long long n;
   unsigned long long sum = 2;
   FILE * pFile;
   pFile = fopen("Problema10.txt","w");
  // printf("Numarul de nr prime dorite:\n");
   //scanf("%lld",&n);
   n = 2000000;
   for(count = 3;count<=n;count+=2)
   {
         if(ePrim(count))
         {
                  sum += count;
                  fprintf(pFile,"suma numere prime mai mici decat %lu este = %llu\n",count,sum);
         }
      
   }
    fprintf(pFile,"suma finala este:: %llu",sum);
     fclose(pFile);
    system("pause");
    return 0;
}

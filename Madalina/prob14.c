#include<stdio.h>
#include<stdlib.h>
int main()
{
     //FILE * pFile;
     //pFile = fopen("Problema14.txt","w");
    unsigned int i,j,count=0,count_max=0,aux=0;
    for(i=2;i<1000000;i++)
    {
       j = i;
       //fprintf(pFile,"\n Pentru %lld sirul obtinut este: ",i);
       while(j>1)
       {
          if(j%2 == 0)
          {
              j=j/2;  
          }
          else
          {
              j=3*j+1;
          }
          count++;
         // fprintf(pFile,"%lld ",j);
       }
       //fprintf(pFile,"\n Numarul de valori este: %lld", count); 
       
       if(count > count_max)
       {
           count_max= count;
           aux = i;
       }
    }
   // fprintf(pFile,"numarul cu cel mai lung sir - %lld este %lld",count_max,aux);
     printf("numarul cu cel mai lung sir - %u este %u",count_max,aux);
   // fclose(pFile);
    system("pause");
    return 0;
}

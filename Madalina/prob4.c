#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int LargestPalindrome(void);
int main()
{
    int langestPalindrome;
  
    langestPalindrome = LargestPalindrome();
    printf("langestPalindrome = %d",langestPalindrome);
    system("pause");
    return 0;
}
int LargestPalindrome()
{
   int n, m, langestPalindrome=0, result,result_temp;
   int i,j,k;
   int aux[6];
   for(i=100;i<=999;i++) 
    for(j=100;j<=999;j++)
    {
        result = i*j;
        result_temp = result;
        //printf("i = %d;j=%d ",i,j);
        for(k=5;k>=0;k--)
        {
          // printf(" result[%d] = %d\n",k, result);
           aux[k]=result%10;
           result = result/10; 
          // printf("aux[%d]= %d \n",k, aux[k]);
         }
         if((aux[0]==aux[5]) && (aux[1]==aux[4]) && (aux[2]==aux[3]))
         {
          if(result_temp>langestPalindrome)
           {
              langestPalindrome = result_temp;
           }
        
          // printf("i = %d;j =%d;  palindromul este = %d \n ",i,j,langestPalindrome );
          }
    }
   return langestPalindrome;
}

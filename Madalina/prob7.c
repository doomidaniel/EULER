#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n, i = 3, count, j;
 
   printf("Numarul de nr prime dorite:\n");
   scanf("%d",&n);
   printf("Numerele prime sunt: \n");
   for ( count = 2 ; count <= n ;  )
   {
      for ( j = 2 ; j <= i - 1 ; j++ )
      {
         if ( i%j == 0 )
            break;
      }
      if ( j == i )
      {
         printf("%d - %d\n",count,i);
         count++;
      }
      i++;
   }
   system("pause");
   return 0;
}

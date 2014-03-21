#include <stdio.h>
int main()
{
    int a,b,c,prod=0;
    for(a=0;a<=500;a++)
       {for(b=0;b<=500;b++)
         {for(c=0;c<=500;c++)
          {
             if(a+b+c == 1000)
             { 
               if(a*a + b*b == c*c)
               {
                  prod = a*b*c;
                  printf("\n a = %d; b =%d ; c= %d",a,b,c);
                  printf("produsul: %d",prod);
               }
             }
          }
         }
       }
    system("pause");
    return 0;
}

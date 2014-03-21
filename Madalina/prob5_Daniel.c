#include <stdio.h>

int main(void)
{
int i=2520;
for(;;i+=20)
{
 if ( (i%11==0) && (i%13==0) && (i%14==0) && (i%16==0) && (i%17==0) && (i%18==0) && (i%19==0) )
     {
         printf("%d\n",i);break;
     }
}
 system("pause");
 return 0;
}
intele

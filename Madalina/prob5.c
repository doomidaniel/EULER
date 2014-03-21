#include<stdio.h>
#include<stdlib.h>
int verifySmallestMultiple(long long n);
int main()
{
    long long n;
    printf("numarul pentru test:");
    scanf("%lld",n);
    verifySmallestMultiple(n);
    system("pause");
    return 0;
}
int verifySmallestMultiple(long long n)
{
     int i;
     for(i=1;i<=20;i++)
     { if  ( n%i == 0) 
     {
         printf("multimplu de %d \n", i);
     }
     }
     return 0;
}

//gresit programul
//raspunsul corect este 232792560

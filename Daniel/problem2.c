//Euler Problem 2
//sum of even valued fib terms < 4mil
//sequence starts 1,2,3,5...
//OBS: reminder from 2-div -->Pisano period 3 (cycle 1 0 1  1 0 1 ...)
#include <stdio.h>
int fibonacci(int n)
{
 if (n==1) return 1;
 else if (n==2) return 2;
 else if (n>2) return (fibonacci(n-1) + fibonacci(n-2));
 else return 0;    
 
}

int main(void)
{
    int i,sum = 0;
    int a;
    a = fibonacci(2+3*0);
    for(i=1;a<4000000;i++)
    {
     sum+=a;                           
     a = fibonacci(2+3*i);                     
    }
    printf("%d\n",sum); //output: 4613732
     system("pause");
    return 0;
}

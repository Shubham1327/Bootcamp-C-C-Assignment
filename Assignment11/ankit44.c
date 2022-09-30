//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void printFibonacciNumber(int n)
{
    int f1=0, f2=1,i;

    if(n < 1)
    return ;
    printf("%d",f1);
    for(i=1;i<=n;i++)
    {
    printf("%d",f2);
    int next = f1+f2;
    f1 = f2;
    f2 = next;
    }
    }
        int main()
    {
        printFibonacciNumber(8);
        return 0;
    }

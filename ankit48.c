//2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void  printNatural(int );
void  printNatural(int n)
{
    if(n == 0)
    return;
    printf("%d",n);
    printNatural(n-1);
}
int main()
{
    int n = 10;
    printNatural(n);
    
    return 0;
}
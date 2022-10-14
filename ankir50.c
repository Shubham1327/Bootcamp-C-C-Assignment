//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void printOdd(int);
void printOdd(int n)
{
    if(n ==0)
    return ;
    printf("%d",2*n-1);
         printOdd(n-1);
}
int main()
{
    int n = 10;
    printOdd(n);
    return 0;
}
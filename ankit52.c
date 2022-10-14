//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void printEven(int);
void printEven(int n)
{
    if(n == 0)
    return ;
    printf("%d",2*n);
    printEven(n-1);
}
int main()
{
    int n= 10;
    printEven(n);
    return 0;
}
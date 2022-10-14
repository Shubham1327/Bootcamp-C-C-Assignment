//3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void printOdd(int);
void printOdd(int n)
{
    if (n== 0)
    return ;
    printOdd(n-1);
    printf("%d",2*n-1);
    printf("\n");
    
}
int main()
{
int n = 10;
printOdd(n);
return 0;
}

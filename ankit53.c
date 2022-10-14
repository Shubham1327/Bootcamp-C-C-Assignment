//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void printSquare(int);
void printSquare(int n)
{
    if (n== 0)
    return ;
    printSquare(n-1);
    printf("%d",n*n);
    printf("\n");

}
int main()
{
int n = 10;
printSquare(n);
return 0;
}

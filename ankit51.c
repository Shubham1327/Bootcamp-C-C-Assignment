//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
void printEven(int);
void printEven(int n)
{
    if (n== 0)
    return ;
    printEven(n-1);
    printf("%d",2*n);

}
int main()
{
int n = 10;
printEven(n);
return 0;
}

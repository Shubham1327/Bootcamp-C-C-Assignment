//8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void printDecimaltobinary(int);
void printDecimaltobinary(int n)
{
    if (n > 0)
    {
    printDecimaltobibary(n/2);
    printf("%d",n%2);
    printf("\n");
    }


}
int main()
{
int n = 25;
printdecimaltobinary(n);
return 0;
}
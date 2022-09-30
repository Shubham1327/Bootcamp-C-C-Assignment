//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void prime();
void main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    prime(n);
}
void prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    prime=prime*i;
    return prime;
}


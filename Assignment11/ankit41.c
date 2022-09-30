//3. Write a function to check whether a given number is Prime or not. (TSRS)
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
    {
        if(n% i == 0){
            c++;
        }
    }
    if(c==0){
        printf("\n %d is a prime number",n);
    }
    else{
        printf("\n%d is not a prime number",n);
    }
}

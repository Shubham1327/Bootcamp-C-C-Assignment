//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
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
    
    for(n=2;i<=n;n++)
    {
     flag=0;
        for(i=2;i<=n\2;i++)
        {
            if(n%2 i==0)
            flag =1;
        }
        if(flag == 0)
        printf("%d",n);
        return 0;
     }
    }
    

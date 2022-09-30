//8. Write a function to print PASCAL Triangle. (TSRN)
 #include<stdio.h>
 int fact(int n)
 {
    int i,fact=1;
 for(i=1;i<=n;i++)
 fact=fact*i;
 return fact;
 }
 int comb(int n, int r)
 {
    return fact(n)/(fact(r) *fact(n-r));
 }
 int prem(int n,int r)
 {
    return fact(n)/(fact(n-r));
 }
 void pascal(int n)
 {
    int pascal(int n)
    {
        int i,j;
        for(i= 0 ;i<=n; i++)
        {
     for(j = 0 ;j<=i; j++)
     {
        printf("%d",comb(i,j));
     }
     printf("\n");
        }
    }
 }
 int main()
 {
    return pascal(5)
 }



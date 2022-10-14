//10. Write a recursive function to print reverse of a given number
#include<stdio.h>
int reverse(int a);
int main()
{ 
	int n;
	printf(" enter a number");
	scanf("%d", &n);
	printf(" the reverse of %d is %d " , n, reverse(n));
}
int reverse(int a)
{
	int rem;
	for (int a; a>0; a=a/10 )
	{
	rem= a%10;
	printf("%d", rem);
	}
}
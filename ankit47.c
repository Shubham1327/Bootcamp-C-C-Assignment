//1. Write a recursive function to print first N natural numbers
 #include<stdio.h>
 void printnatural(int);
 void printnatural(int n)
 {        
    if(n == 0)
    return ;
    printnatural(n-1);
    printf("%d",n);

      }
 int main()
 {
    int n = 10;
    printnatural(n);
    return 0;
}
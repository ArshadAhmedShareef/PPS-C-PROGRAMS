#include<stdio.h> 
void fibonacci(int n);
void main()
{
int n;
int i = 0, j = 1;
printf("Enter the range of the Fibonacci series: "); 
scanf("%d", &n);
printf("Fibonacci Series: ");
printf("%d %d ", i, j); 
fibonacci(n);
}
void fibonacci(int n)
{
static long int first = 0, second = 1, sum;

if(n > 0)
{
sum = first + second; 

first = second; 
second = sum; 
printf("%ld ", sum); 
fibonacci(n-1);
}
}



#include<stdio.h>
int a,b,c;
int main()
{
	printf("Enter your dividend \t");
	scanf("%d",&a);
	printf("Enter your divisor \t");
	scanf("%d",&b);
	c=a/b;
	printf("your quotient is %d \t",c);
	return 0;
}
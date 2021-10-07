#include<stdio.h>
int gcd(int m,int n);
int main()
{
	int m,n; 
	printf("\n Enter two numbers:");
	scanf("%d%d", &m, &n);
	printf("\n The gcd of %d & %d is %d", m,n, gcd(m,n));
}
int gcd(int m, int n)
{
	if(m%n==0)
	return n;
	else
	return(gcd(n,m%n));
}


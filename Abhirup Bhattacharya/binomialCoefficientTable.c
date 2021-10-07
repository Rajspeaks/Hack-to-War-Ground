#include<stdio.h>

int main()
{
	int n,a,b;
	printf("\t\t\tPrint the BINOMIAL Coefficient Table!!\n");
	printf("\n______________________________________________\n");
	printf("Mx  ");
	
	//code to print the topmost row from 0-10
	for(n=0;n<=10;n++)
	{
		printf("%d   ",n);
	}
	printf("\n______________________________________________\n");
	
	//code to print the leftmost column(0-10) and the table
	n=0;
	do
	{
		a=0;b=1;
		printf("%2d",n);
		while(a<=n)
		{
			if(n==0||a==0)
			{
				printf("%4d",b);
			}
			else
			{
				b=b*(n-a+1)/a;
				printf("%4d",b);
			}
			a++;
		}
		printf("\n");
		n++;
	}while(n<=10);
	printf("______________________________________________");
}

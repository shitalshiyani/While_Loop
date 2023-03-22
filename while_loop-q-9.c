#include<stdio.h>

main()
{
	int a=1,n,fact=1;
	printf("Enter value of N=");
	scanf("%d",&n);
	while (a<=n)
	{
		printf("%d\n",a);
		fact=fact*a;
		a++;
	}
	printf("Factorial of all elements=""%d",fact);
}

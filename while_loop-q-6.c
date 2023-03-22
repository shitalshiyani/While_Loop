#include<stdio.h>

main()
{
	int a=1,n;
	printf("Enter value of N=");
	scanf("%d",&n);
	while (n>=a)
	{
		if (n%2==0)
		{
			printf("%d\n",n);
		}
		n--;
	}
	
}

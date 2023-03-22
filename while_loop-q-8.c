#include<stdio.h>

main()
{
	int a=1,n,sum=0;
	printf("Enter value of N=");
	scanf("%d",&n);
	while (a<=n)
	{
		printf("%d\n",a);
		sum=sum+a;
		a++;
	}
	printf("sum of all elements=""%d",sum);
}

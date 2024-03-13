#include<stdio.h>

main()
{
	int n,f,d,sum;
	
	printf("enter the number to find sum of f and d =");
	scanf("%d",&n);
	
	d = n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	
	sum = f+d;
	printf("sum of f and d =%d",sum);
	
}


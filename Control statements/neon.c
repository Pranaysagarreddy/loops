#include<stdio.h>
int main()
{
	int n ,i,sum=0,r;
	printf("enter the value ");
	scanf("%d",&n);
	i=n*n;
	printf("the value of i is :%d\n",i);
	while(i!=0)
	{
		r=i%10;
		sum+=r;
		printf("the sum of number is :%d\n",sum);
		i=i/10;
	}
	if(n==sum)
		printf("neon number");
	else
		printf("not a neon");
	return 1;
}
		
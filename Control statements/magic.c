#include<stdio.h>
int main()
{
	int i,n,sum=0,sum1=0,r,r1;
	printf("enter the number ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
		printf("the sum of number is :%d\n",sum);
		if(sum>0)
		{
			r1=sum%10;
		   sum1+=r1;
		   n=n/10;
		    printf("the sum of number is :%d\n",sum1);
			
	}
	}
	if(sum1==1)
		printf("magic ");
	else
		printf("not a  magic");
	return 1;
}
			
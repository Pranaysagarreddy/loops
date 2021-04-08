//a number is said to automorphic when last two digits is same as given input 
// for example take a number as 25 it's square is 625 and last two digits is 25 the it is said to be Automorphic

#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,temp,count=0;
	printf("enter the number");
	scanf("%d",&n);
	i = n*n; //Square of number
	temp=n;//assigning  
	while(temp>0)
	{
		count++; //Increment and count
		temp=temp/10;
	}
	int a =pow(10,count);//power of 10^count(example count is 2)10^2=100
	int b = i%a;//calculate i(625) with 100 we get remainder as 25
	
	if(b== n)
		printf("auto");
	else
		printf("no");
}
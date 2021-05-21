#include<stdio.h>
int SOD(int num);
int SOD(int num)
{
	if(num==0)
	return 0;
	return((num%10)+ SOD(num/10));
}
int main()
{
int num, sum;
printf("\ninput number:");
scanf("%d",&num);
sum=SOD(num);
printf("\nsum of digits :%d",sum);
return 0;	
}


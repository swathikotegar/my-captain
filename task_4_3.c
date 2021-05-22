#include<stdio.h>
int lcm(int ,int);

int lcm(int n1 ,int n2)
{
static int temp = 1;
if(temp % n1 == 0 && temp % n2 == 0)
{
	return temp;
	}	
	
	
		temp++;
		lcm(n1,n2);
		return temp;
	
}
int main()
{
	int n1, n2, result;

		printf("\ninput first number:");
	scanf("%d",&n1);
		printf("\ninput second number:");
	scanf("%d",&n2);
	result = lcm(n1,n2);
	printf("\n LCM of %d and %d = %d",n1,n2,result);
	return 0;
	
	}

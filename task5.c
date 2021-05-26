#include<stdio.h>
main()
{
	int element[3][3],i,j,sum=0, *p[3][3];
	printf("input elements in the matrix-\n");
	for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
			{
					printf("element-[%d],[%d]:",i,j);
						scanf("%d",&element[i][j]);
						p[i][j]=&element[i][j];
			}
	}
	printf("\nthe matrix is:");
	for(i=0;i<3;i++)
	{
		printf("\n");
			for(j=0;j<3;j++)
			{
			
			
					printf("%d\t",*p[i][j]);
				}
			}
			
	printf("\n");
	for(i=0;i<=2;i++)
{
		
	sum=sum + element[i][i];
}

printf("\n sum of diagonal elements=%d",sum);
	return 0;
}

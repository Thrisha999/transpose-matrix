#include<stdio.h>
void main()
{
	int a[10][10],i,j,r,c,trans[10][10];
	printf("enter the no. of rows you want:\n");
	scanf("%d",&r);
	printf("enter the no. of columns you want:\n");
	scanf("%d",&c);
	printf("enter the matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix form of elements are:\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	printf("the transpose of matrix is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
}

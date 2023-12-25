// Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of an array:-");
	scanf("%d",&n);
	
	printf("Enter array A's elements:\n");
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)//printing a matrix
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\n");
	
	printf("Enter array B's elements:\n");
	int b[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)//printing b matrix
	{
		printf("%d ",b[i]);
	}
	
//	summation

	printf("\n\n");
	
	printf("Summation of A and B both elements are:\n");
	int c;
	for(i=0;i<n;i++)
	{
		c=a[i]+b[i];
		printf("%d ",c);	
	}
}

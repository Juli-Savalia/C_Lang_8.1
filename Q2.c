// Write a Program to find the average of a 1D array.

#include<stdio.h>

void main()
{
	int n;
	printf("Enter the size of an array =");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the elements of an array:- \n");
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum = sum+a[i];
	}
	
	float avg = sum/n;
	printf("your average is = %f",avg);
}

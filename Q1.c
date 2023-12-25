//Write a Program to find the length of a 1D array.

#include<stdio.h>

void main()
{
	int n;
	printf("Enterthe size of an array :-");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the elements of an array:-\n");
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("length of your Array is =");
	printf("%d ",n);
	
}

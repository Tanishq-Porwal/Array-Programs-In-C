#include<stdio.h>
#define size 5
int arr[size];
int element,indexx=-1;
//.......................................
void insert()
{
	if(indexx>=size-1)
		printf("Array is full\nNo insertion possible\n\n");
	else
	{
		if(indexx==-1)
		{
			printf("Enter first element : ");
			scanf("%d",&element);
			indexx=indexx+1;
			arr[indexx]=element;
			printf("First element inserted successfully\n\n");
		}
		else
		{
			printf("Enter element : ");
			scanf("%d",&element);
			indexx=indexx+1;
			arr[indexx]=element;
			printf("Element inserted successfully\n\n");
		}
	}
}
//.......................................
void dlt()
{
	if(indexx==-1)
		printf("Array is empty\nDeletion not possible\n\n");
	else
		indexx=indexx-1;
}
//.......................................

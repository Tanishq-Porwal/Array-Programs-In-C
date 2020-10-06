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
void insertSP()
{
if(indexx==size-1)
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
int position,temp;
printf("enter position at which you want to insert : ");
scanf("%d",&position);
position=position-1;
printf("Enter element : ");
scanf("%d",&element);
for(temp=indexx;temp>=position;temp--)
arr[temp+1]=arr[temp];
arr[position]=element;
indexx++;
}
}
}

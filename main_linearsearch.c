#include<stdio.h>
int main()
{
	//int arr[7]={9,7,8,40,0,2,5};
	int n;
	printf("Enter number of elements of the array: ");
	scanf("%d",&n);
	int arr[n],ele,key,i,j;
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&ele);
		arr[i]=ele;
	}
	printf("\nEnter element to be found: ");
	scanf("%d",&key);
	//int i,flag=0,key=5;
	int index,flag=0;
	for(j=0;j<n;j++)
	{
		if (key==arr[j])
		{
			flag=1;
			index=j;
		}
	}
	if(flag==1)
	{
		printf("Element found at %d",index+1);
	}
	else
	{
		printf("Element not found");
	}
}

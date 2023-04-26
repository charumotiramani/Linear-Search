#include <stdio.h>
#include <stdlib.h>

int main()
{

	int arr[10]={4 , 6 , 9 , 1 , 45 , 50 , 2 , 23 , 80 , 91};
	int s,i, count=0;
	printf("the number to be checked:");
	scanf("%d", &s);

	for(i=0;i<10;i++)
	{
		if (arr[i]== s)
	{
		count=1;
	}
}
      if (count==1)
      {
      	printf("the number is present");
	  }
	  else
	  {
	  	printf("the number is not present");
	  }
	
	return 0;
}

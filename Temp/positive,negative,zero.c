#include<stdio.h>

void main()
{
	int no;
	printf("enter a number");
	scanf("%d",&no);
	
	if(no>=0)
	{
	       	if(no==0)
	       	{ 
	       	printf("no is zero");
		   }
		   else
		   {
		   	printf("no is positive");
		   }   
	}	
    else if(no<0)
    {
    printf("no is negative");
	}
}

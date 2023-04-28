#include<stdio.h>

main()

{
	int r,c,a=n,b=n;
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(c==a && c==b)
			{
			    printf("*");
			}	
	        else
		    {
		    	printf(" ");
			}
		}
		printf("\n");
	}
}

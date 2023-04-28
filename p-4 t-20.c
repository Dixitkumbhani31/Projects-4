#include<stdio.h>

main()

{
	int r,c,a=n,b=n;
	
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n*2;c++)
		{
			if(c==a || c==b)
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

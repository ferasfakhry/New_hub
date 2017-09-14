#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int x = 5;
	int y = 7;

	int z= x+y;

    int a =256;
    int x = 0;
	float original[a];
	float output[a];

	for(int n=0; n<252;n++)
	{
		for(int m=0; m<=4;m++)
		{
		x=x + original[n+m];	
		}

		output[n]=x/5;
	}

	printf("hella");
	printf("\nThe answer to %d + %d is " "%d",x,y,z);

	return 0;
}
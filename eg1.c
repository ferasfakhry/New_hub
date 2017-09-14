#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	float x;
	float y;

	float* z;

	//FILE* fp;/* this is the file pointer*/

	//fp =fopen(:"afile.dat","");
	
	x=5;
	y=7;

	z= &x;

	//int z= x+y;

    //int a =256;
    //int x = 0;
	//float original[a];
	//float output[a];

	//for(int n=0; n<252;n++)
	//{
		//for(int m=0; m<=4;m++)
		//{
		//x = x + original[n+m];	
		//}

		//output[n]=x/5;
	//}

	printf("\nx=%f y=%f ",x,y);
	
	printf("\nx is at %p y is at %p", (void*) &x, (void*) &y);

printf("\nz=%p *z = %f",z,*z);

	
	
}
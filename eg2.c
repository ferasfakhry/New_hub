#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	

	FILE* fp;/* this is the file pointer*/

	fp =fopen("afile.dat","w");
	
	

	for(int i=0; i<100;i++)
	{
		fprintf(fp,"%i\n",i);

	}
	fclose(fp);

	int a = 0;

	fp =fopen("afile.dat","r");
	char line[32];

	for(int j=0;j<100;j++)
	{
		fgets(line, sizeof line,fp);
		a = a+ atoi(line);
	}

	fclose(fp);

	printf("%i",a);
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

/*	printf("\nx=%f y=%f ",x,y);
	
	printf("\nx is at %p y is at %p", (void*) &x, (void*) &y);

printf("\nz=%p *z = %f",z,*z); */

	
	
}
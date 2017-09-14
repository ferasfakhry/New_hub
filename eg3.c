#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int main(void)
{
	

	FILE* fp;/* this is the file pointer*/
	FILE* out;

	fp =fopen("afile.dat","w");
	
	float x;

	for(int i=0; i<500;i++)
	{
		x =sin(2.0*M_PI/500.0*(float)i)+ 0.2*((float)rand() / (float)RAND_MAX)-0.1;
		fprintf(fp,"%f\n",x);

	}
	fclose(fp);


	float a = 0;
	float z;
     out=fopen("bfile.dat","w");
	fp =fopen("afile.dat","r");
	char line[32];
	int y =500;
	
	float original[y];
	float output[y];
	for(int j=0;j<500;j++)
	{
		fgets(line, sizeof line,fp);
		a = atof(line);
		original[j]=a;
	}

		for(int n=0; n<450;n++)
	{
		for(int m=0; m<=50;m++)
		{

		z = original[n+m];	
		}

		output[n]=z/50.0;

		printf("%lf\n", output[n]);
		fprintf(out,"%lf\n",output[n]);
	}
	

	fclose(fp);
fclose(out);
	printf("%f",a);
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
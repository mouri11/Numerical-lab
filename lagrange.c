#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	printf("Enter the number of elements\n");
	int n,i,j;
	float* x; // array to store x values
	float* fx; // array to store f(x) values
	scanf("%d",&n); // number of elements
	x=(float *)malloc(n*sizeof(float));
	fx=(float *)malloc(n*sizeof(float));
	for(i=0;i<n;i++)
	{
		printf("x: ");
		scanf("%f",&x[i]);
		printf("f(%.2f): ",x[i]);
		scanf("%f",&fx[i]);
		printf("\n");
	}
	printf("----------\n");
	float xn; // the value of x whose f(x) we have to find
	printf("Enter the value of x to find the f(x):");
	scanf("%f",&xn);
	printf("\n----------\n");
	float num,deno; // numerator and denominator
	float ans=0;
	for(i=0;i<n;i++)
	{
		num=1;
		deno=1;
		for(j=0;j<n;j++)
		{
			if(i==j)
				continue;
			num=num*(xn-x[j]);
			deno=deno*(x[i]-x[j]);
		}
		ans+=(num/deno)*fx[i];
	}
	printf("Value of f(%.2f) is %.4f\n",xn,ans);
	return 0;
}

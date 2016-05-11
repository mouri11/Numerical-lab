#include<stdio.h>
float a[2][100];
int main()
{
	int i,j,count;
	float x,sum;
	printf("Enter no of terms:\n");
	scanf("%d",&count);
	printf("Enter the values of x: \n");
	for(i=0;i<count;i++)scanf("%f",&a[0][i]);
	printf("Enter the values of f(x): \n");
	for(i=0;i<count;i++)scanf("%f",&a[1][i]);
	printf("Enter the value for which f(x) is to be calculated:\n");
	scanf("%f",&x);
	float num,deno;
	for(i=0;i<count;i++)
	{
		num=1;
		deno=1;
		for(j=0;j<count;j++)
		{
			if(i==j)continue;
			num=num*(x-a[0][j]);
			deno=deno*(a[0][i]-a[0][j]);
		}
		sum+=(num/deno)*a[1][i];
	}
	printf("x \t f(x)\n");
	for(i=0;i<count;i++)printf("%.2f \t %.4f \n",a[0][i],a[1][i]);
	printf("Value of f(%.2f) is %.4f\n",x,sum);
	return 0;
}

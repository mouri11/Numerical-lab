#include<stdio.h>
#include<math.h>
int fact(int a)
{
	int f=1;
	while(a)f*=a--;
	return f;
}
int main()
{
	int i,j,m,n,b,count,k=0;
	count=0;
	float x[100][100],h,xm;
	printf("Enter no. of elements:\n");
	scanf("%d",&count);
	count=(2*count)-1;
	printf("Enter elements for x:\n");
	for(i=0;i<count;i++){
		if(i%2==0)scanf("%f",&x[i][0]);
		else x[i][0]=0;
	}
	int u;
	i=0;
	h=x[2][0]-x[0][0];
	printf("Enter elements for y:\n");
	for(i=0;i<count;i++){
		if(i%2==0)scanf("%f",&x[i][1]);
		else x[i][1]=0;
	}
	printf("Enter value of x for which y is to be calculated:\n");
	scanf("%f",&xm);
	u=(xm-x[0][0])/h;
	for(i=2;i<(count/2)+2;i++){
		k=0;
		while(k<=count)x[k++][i]=0;
	}
	k=0;
	m=1;
	n=count;
	b=1;
	while(n-m>=1){
		for(i=m,k=m-1;i<n;i+=2,k+=2){
			x[i][b+1]=(x[k+2][b]-x[k][b]);
		}
		b++;
		n--;
		m++;
	}
	for(i=0;i<count;i++){
		for(j=0;j<(count/2)+2;j++){
			if(x[i][j]!=0)printf("%.5f \t",x[i][j]);
			else printf("      \t \t");
		}
		printf("\n");
	}
	float sum=x[0][1];
	float prod;
	int z,a=1;
	for(i=2;i<2+(count/2);i++){
		prod=1;
		z=0;
		while(x[z][i]==0){
			if(x[z][i]!=0)break;
			z++;
		}
		prod=x[z][i];
		prod/=fact(a);
		j=0;
		while(j<a){
			prod*=(u-j++);
		}
		a++;
		sum+=prod;
	}
	printf("%f \n",sum);
}

//gauss seidal
#include<stdio.h>
#include<math.h>
int i,j,k, con[3], coeff[3][3];
float ep, x[3][1000];
void main()
{
	printf("Enter values of matrix for linear equations:\n");\
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)scanf("%d",&coeff[i][j]);
	}
	printf("Enter value of constants:\n");
	for(i=0;i<3;i++)scanf("%d",&con[i]);
	printf("Enter value of epsilon:\n");
	scanf("%f",&ep);
	x[0][0]=x[1][0]=x[2][0]=0;
	printf("Coefficient matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)printf("%d  ",coeff[i][j]);
		printf("\n");
	}
	printf("Constant matrix:\n");
	for(i=0;i<3;i++)printf("%d \n",con[i]);
	i=0;j=0;k=0;
	printf("   x        y        z\n===============================\n");
	while(1){
		x[0][i+1]=(con[0]-coeff[0][1]*x[1][i]-coeff[0][2]*x[2][i++])/coeff[0][0];
		x[1][j+1]=(con[1]-coeff[1][0]*x[0][i]-coeff[1][2]*x[2][j++])/coeff[1][1];
		x[2][k++]=(con[2]-coeff[2][0]*x[0][i]-coeff[2][1]*x[1][j])/coeff[2][2];
		printf("%.4f    %.4f    %.4f\n",x[0][i],x[1][j],x[2][k]);
		if(fabs(x[2][k]-x[2][k-1])<ep)break;
	}
	printf("x= %.4f, y= %.4f, z= %.4f \n",x[0][i],x[1][j],x[2][k]);
}

#include<stdio.h>
int main()
{
    int i,j,k,n;
    float M[20][20],c,x[10],sum=0.0;
    printf("\nENTER THR ORDER OF MATRIX: ");
    scanf("%d",&n);
    printf("\nENTER THE ELEMENTS OF MATRIX :\n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("M[%d][%d] : ", i,j);
            scanf("%f",&M[i][j]);
        }
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=M[i][j]/M[j][j];
                for(k=1; k<=n+1; k++)
                {
                    M[i][k]=M[i][k]-c*M[j][k];
                }
            }
        }
    }
    x[n]=M[n][n+1]/M[n][n];
   
    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+M[i][j]*x[j];
        }
        x[i]=(M[i][n+1]-sum)/M[i][i];
    }
    printf("\nANSWER: \n");
    for(i=1; i<=n; i++)
    {
        printf("\nx%d=%f\n",i,x[i]);
    }
    return 0;
}

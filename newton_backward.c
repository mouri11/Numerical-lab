//newton backward
#include<stdio.h>
int main()
{
    int x[20],y[20];
    int n,i,h,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&x[i]);
    for(i=1;i<=n;i++)
    scanf("%d",&y[i]);
    h=x[2]-x[1];
    printf("enter the searching point f:");
    scanf("%f",&f);
    printf("\n");
    s=(f-x[n])/h;
    d=y[n];
    p=1;
    for(i=n,k=1;i>=0,k<n;i--,k++)
    {
        for(j=n;j>=1;j--)
        {
            y[j]=y[j]-y[j-1];
        }
        p=p*(s+k-1)/k;
        d=d+p*y[n];
    }
    printf("The value for f=%d is %d\n",f,d);
    return 0;
}

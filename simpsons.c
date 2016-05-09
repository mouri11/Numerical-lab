//simpson's 1/3rd
#include<stdio.h>
float f(float x)
{
    return (x*1.0)/(1+x);
}
int main()
{
    float a,b,h,sum1,sum2,ans;
    printf("Enter the value of a, b and n\n");
    int n,i;
    scanf("%f %f %d",&a,&b,&n);
    h=((float)(b-a))/n;
    printf("x \t\t| f(x)\n");
    printf("%5f \t| %f\n",a,f(a));
    for(i=1;i<n;i++)
    {
        float x = a+(i*h);
        if(i&1)
        {
            sum1+=f(x);
        }
        else
        {
            sum2+=f(x);
        }
        printf("%f \t| %f\n",x,f(x));
    }
    printf("%f \t| %f\n",b,f(b));
    ans = (h/3.0)*(f(a)+f(b) + 2*sum2 + 4*sum1);
    printf("Value of the integral by Simpson's 1/3rd Rule is %5.4f\n",ans);
    return 0;
}

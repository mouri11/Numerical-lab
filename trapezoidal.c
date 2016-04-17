//trapezoidal rule
#include<stdio.h>
float f(float x)
{
    return (x*1.0)/(1+x);
}
int main()
{
    float a,b,h,sum,ans;
    printf("Enter the value of a, b and n\n");
    int n,i;
    scanf("%f %f %d",&a,&b,&n);
    h=((float)(b-a))/n;
    printf("x \t\t| f(x)\n");
    printf("%5f \t| %f\n",a,f(a));
    for(i=1;i<n;i++)
    {
        float x = a+(i*h);
        sum+=2*(f(x));
        printf("%f \t| %f\n",x,f(x));
    }
    printf("%f \t| %f\n",b,f(b));
    ans = (h/2.0)*((float)f(a)+f(b)+sum);
    printf("The value of the integral by trapezoidal rule is %f\n",ans);
    return 0;
}

#include<stdio.h>
#include<math.h>
float ab(float x)
{
    if(x<0) return (-1*x);
    return x;
}
float f(float p)
{
    return (p*exp(p)-cos(p));
}
float df(float p)
{
    return ((p+1)*exp(p)+sin(p));
}

int main()
{
    float diff,err,x,x0;
    printf("Starting value : \n");
    scanf("%f",&x0);
    printf("Error : \n");
    scanf("%f",&err);
    printf("x0 \t x \t f(x)\n");
    while(1)
    {
        x=x0-(f(x0)/df(x0));
        diff=x-x0;
        printf("%f \t %f \t %f\n",x0,x,f(x));
        if(ab(diff)<err) break;
        x0=x;
    };
    printf("\nThe Root is %f\n",x);
    return 0;
}

//rangakutta
#include<stdio.h>
float f(float x, float y)
{
    return x*y;
}
int main()
{
    float x,y,h,xn,k1,k2,k3,k4;
    printf("Enter values of x0,y0,h\n");
    scanf("%f %f %f",&x,&y,&h);
    printf("Enter value of x to end\n");
    scanf("%f",&xn);
    printf("x \t\t y\n");
    while(x+h<xn)
    {
        k1=f(x,y);
        k2=f(x+(h/2.0),y+k1*(h/2.0));
        k3=f(x+(h/2.0),y+k2*(h/2.0));
        k4=f(x+h,y+(k3*h));
        x+=h;
        y+=(h/6.0)*(k1+k4+2*(k2+k3));
        printf("%f \t %f\n",x,y);
    }
    printf("Value of the expression is %f\n",y);
    return 0;
}

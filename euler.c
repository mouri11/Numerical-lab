//euler
#include<stdio.h>
float f(float a,float b)
{
	return ((b-a)/(b+a));
}
int main()
{
    float x,y,h,xn;
    printf("Enter values of x0,y0,h\n");
    scanf("%f %f %f",&x,&y,&h);
    printf("Enter value of x to end\n");
    scanf("%f",&xn);
    printf("x \t\t y\n");
    while(1)
    {
        float func=f(x,y);
        x+=h;
        y+=h*func;
        printf("%f \t %f\n",x,y);
        if(x>=xn) break;
    }
    printf("The value is %f\n",y);
    return 0;
}

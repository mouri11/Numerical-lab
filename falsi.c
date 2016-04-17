#include<stdio.h>
#include<math.h>
float ab(float x)
{
    if(x<0)
    return -1*x;
    return x;
}
float f(float p)
{
	return (cos(p)-(p*exp(p)));
}
float val(float p,float q)
{
	return (p*f(q)-(q*f(p)))/(f(q)-f(p));
}
int main()
{
    float a,b,err,diff,w;
    int i=1;
    printf("Enter a, b, error\n");
    scanf("%f %f %f",&a,&b,&err);
    printf("s.no \t a \t b \t w \t f(x)\n");
    do
    {
        w=val(a,b); //
        printf("%d \t %f \t %f %f \t %f\n",i,a,b,w,f(w));
        if(f(w)<0)
        {
            diff=w-a;
            a=w;
        }
        else
        {
            diff=w-b;
            b=w;
        }
        i++;
        //printf("diff=%f %f\n",ab(diff),err);
    }while(ab(diff)>=err);
    printf("The Root is %f\n",w);
    return 0;
}

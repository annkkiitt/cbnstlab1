#include<stdio.h>

float fun(float x,float y)
{
    return x+y;
}

int main()
{
    float a,b,x,y,h,t,k;
    printf("Enter x0,y0: \n");
    scanf("%f%f",&a,&b);

    printf("Enter h and xn: ");
    scanf("%f%f",&h,&t);
    x=a;
    y=b;

    printf("\n  x\t  y\n");

    while(x<=t)
    {
        k=h*fun(x,y);
        y=y+k;
        x=x+h;
        printf("%0.3f\t%0.3f\n",x,y);
    }
}
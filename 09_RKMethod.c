#include<stdio.h>
#include<math.h>

float f(float x,float y){
    return x+y;
}

int main()
{
    float x0,y0,h,xn,k1,k2,k3,k4,k,y,x;
    printf("Enter the x0 and y0: ");
    scanf("%f%f",&x0,&y0);

    printf("Enter the value of h: ");
    scanf("%f",&h);

    printf("Enter the value of x for which y is required: ");
    scanf("%f",&xn);

    x=x0;
    y=y0;

    while(x<=xn){
        k1 = h*f(x,y);
        k2 = h*f(x+h/2,y+k1/2);
        k3 = h*f(x+h/2,y+k2/2);
        k4 = h*f(x+h,y+k3);

        k = (k1 + 2.0*k2 + 2.0*k3 + k4)/6.0;
        printf("\nX=%f\t Y=%f",x,y);
        x = x+h;
        y = y+k;
    }
}

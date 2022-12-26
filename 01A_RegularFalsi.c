#include <stdio.h>
#include <math.h>

float f(float x){
    return cos(x)-x*pow(2.71828,x);
}

int main()
{
    float a,b;
    int m,n;
    printf("Enter the range: ");
    scanf("%d %d",&m,&n);

    for(float i=m;i<n;i++){
        if(f(i)*f(i+1) < 0){
            a=i;
            b=i+1;
            break;
        }
    }

    printf("Interval is %f and %f\n",a,b);
    float x = (a*f(b) - b*f(a))/(f(b)-f(a));
    int itr=1;

    do{
        printf("At iteration %d, x=%f\n",itr,x);

        if(f(a)*f(x) < 0) b=x;

        else a=x;
        x = (a*f(b) - b*f(a))/(f(b)-f(a));
        itr++;

    }while(fabs(x-a) >= 0.0001 && fabs(x-b)>= 0.0001);
    
}
#include <stdio.h>
#include <math.h>

float function(float x){
    return (1/(1+pow(x,2)));
}

int main()
{
    int n;
    float i,a,b,sum=0.0,h;

    printf("Enter the value of lower limit and upper limit: ");
    scanf("%f%f",&a,&b);

    printf("Enter the number of intervals: ");
    scanf("%d",&n);

    h = fabs(b-a)/n;
    

    for(int i=1;i<n;i++){
        sum = sum + function(a+i*h);
    }

    printf("X\tY\n");
    for(int i=1;i<=n;i++){
        printf("%f\t %f\n",a+i*h,function(a+i*h));
    }
    float ans = (h/2)*((function(a) + function(b))+2*sum);

    printf("\nThe value of intergral is : %f",ans);
}
#include <stdio.h>
#include <math.h>

float function(float x){
    return 1/(1+pow(x,2));
}

int main(){
    int n;
    float a,b,h;
    printf("Enter the lower and upper limit: ");
    scanf("%f%f",&a,&b);

    printf("Enter the number of interval: ");
    scanf("%d",&n);

    h = fabs(b-a)/n;

    float sum1=0,sum2=0;

    printf("X\tY\n");
    for(int i=0;i<=n;i++){
        printf("%f\t%.2f\n",a+i*h,function(a+i*h));
    }

    for(int i=1;i<n;i++){
        if(i%2==0){
            sum1 = sum1 + function(a+i*h);
        }
        else{
            sum2 = sum2 + function(a+i*h);
        }
    }

    float ans = (h/3)*((function(a)+function(b) + 4*sum2 + 2*sum1));
    printf("The value of integral is :%f",ans);
}
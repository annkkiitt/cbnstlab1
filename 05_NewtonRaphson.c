#include <stdio.h>
#include <math.h>

float f(float x){
    return pow(x,3)-4*x-9;
}

float differentiate(float x){
    return 3*pow(x,2)-3;
}

int main(){
    float a,b;
    int m,n;
    printf("Enter the range: ");
    scanf("%d %d",&m,&n);

    for(float i=m;i<n;i++){
        if(f(i)*f(i+1)<0){
            a=i;
            b=i+1;
            break;
        }
    }

    printf("Interval is a=%f and b=%f\n",a,b);
    float x=a - f(a)/differentiate(a);
    int itr=1;

    do{
        a=x;
        printf("At iteration %d    x=%f  diff=%f\n",itr,x,x-a);
        x=a - f(a)/differentiate(a);         
        itr++;

    }while(fabs(x-a)>=0.0001);
}
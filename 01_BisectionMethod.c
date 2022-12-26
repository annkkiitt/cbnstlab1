#include <stdio.h>
#include <math.h>

float fun(float x){
    return pow(x,3)-(4*x)-9;
}

int main(){
    int m,n;
    float a,b;

    printf("Enter the range: ");
    scanf("%d %d",&m,&n);

    for(int i=m;i+1<=n;i++){
        if(fun(i) * fun(i+1) < 0){
            a = i;
            b=i+1;
            break;
        }
    }

    printf("Interval is a=%f and b=%f\n",a,b);
    float x;
    int itr=1;

    do{
        printf("At iteration %d    x=%f\n",itr,x);
        x=(a+b)/2.0;

        if(fun(x)*fun(a)<0) b=x;

        else a=x;
        
        itr++;

    }while(fabs(x-a)>0.0001 || fabs(x-b)>0.0001);
}
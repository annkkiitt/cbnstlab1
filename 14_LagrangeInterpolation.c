#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    int x[n],y[n];
    printf("Enter the value of x: ");
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }

    printf("Enter the value of y: ");
    for(int i=0;i<n;i++){
        scanf("%d",&y[i]);
    }
    
    int xn;
    printf("Enter the value of x: ");
    scanf("%d",&xn);

    float term,sum=0.0;
    for(int i=0;i<n;i++){
        term=1.0;
        for(int j=0;j<n;i++){
            if(i!=j){
                term = term * ((xn-x[j])/(x[i] - x[j]));
            }
        }
        sum = sum + term*y[i];
    }

    printf("Value at %d is %f",xn,sum);
}
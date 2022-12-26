#include<stdio.h>
int main(){
    int n ;
    printf("Enter the size of the input : ");
    scanf("%d",&n);
    int x[n] , x_2[n];
    float y[n],xy[n];
    printf("Enter the values of x and y : ");
    for(int i = 0 ; i <  n ; i++){
        scanf("%d %f", &x[i], &y[i]);
        xy[i] = x[i] * y[i];
        x_2[i] = x[i]*x[i];
    }
    int sum_x = 0 , sum_x_2 = 0;
    float sum_xy = 0 , sum_y = 0 ; 

    for(int i = 0 ; i < n ;i++)
    {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += xy[i];
        sum_x_2 += x_2[i];
    }
    float a ,  b ;
    a = ((sum_x_2 * sum_y) - (sum_xy * sum_x))/((n*sum_x_2) - (sum_x * sum_x));
    b = ((n * sum_xy) - (sum_x * sum_y) )/ ((n * sum_x_2) - (sum_x * sum_x));
    printf("value of a is : %f\nvalue of b is :  %f",a , b);
}
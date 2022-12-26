#include <stdio.h>

int main()
{
    int n,x;
    printf("Enter the total number of values: ");
    scanf("%d",&n);

    int a[n][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            a[i][j] = 0;
        }
    }
    
    printf("Enter the values of x");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i][0]);
    }
    printf("Enter the values of y");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i][1]);
    }

    printf("Enter the value of x");
    scanf("%d",&x);

    int ind=0;

    while(a[ind][0]<x){
        ind++;
    }

    for(int i=2;i<n+1;i++){
        for(int j=0;j<n-i+1;j++){
            a[j][i] = a[j+1][i-1] - a[j][i-1];
        }
    }

    float u = (float)(x-a[ind][0])/(a[1][0] - a[0][0]);
    printf("u: %f\n",u);
    float y = a[ind][1];
    float u1 = u;
    int fact = 1;
    ind--;
    
    for(int i=2;i<n+1;i++){
        y = y+(u1*a[ind--][i])/fact;
        u1 = u1*(u+(i-1));
        fact = fact*i;
    }

    printf("For x %d y %f",x,y);
    
}
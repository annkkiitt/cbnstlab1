//C Program to Implement Iteration Method
#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001

float f(float x)
{
    return x*x*x + x*x -1;
}

float findValueAt(float x)
{
    return 1/sqrt(1+x);
}
float differentiate(float x)
{
    return 1/2.0 * (pow(1,pow((1+x),3/2.0)));
}

int main()
{
    int maxIteration=10,i;
    float a,b,x,x0;
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

    //find x0
    x0= (a+b)/2;
    //check if the function form used is valid or invalid
    if(fabs(differentiate(x0))<1)
        printf("Function Form is Correct. Iteration Method can be applied\n");
    else
    {
        printf("Function Form is NOT Correct. Iteration Method CAN'T be applied\n");
        return 0;
    }

    //Apply Successive approximation to find the root b/w a and b
    //..........Find root............   
    x=findValueAt(x0);
    do
    {
      x0=x;
      printf("Iterations=%d  Roots=%f\n",i,x); 

      x = findValueAt(x0);   //find the mid point
      
    }while(fabs(x-x0)>=EPSILON);
}
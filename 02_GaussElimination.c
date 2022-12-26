#include <stdio.h>
int n;

void convertToUpperTriangular(float arr[][n+1],int n){
    float ratio;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i){
                ratio = arr[j][i]/arr[i][i];
                for(int k=0;k<n+1;k++){
                    arr[j][k] = arr[j][k] - (ratio*arr[i][k]);
                }

                //printing the matrix after changed row
                printf("Intermediate forms:\n");
                for(int x=0;x<n;x++){
                    for(int y=0;y<n+1;y++){
                        printf("%f ",arr[x][y]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
        }
    }
}

void backSubstitution(float arr[][n+1],float value[],int n){
    float sum;
    value[n-1] = arr[n-1][n]/arr[n-1][n-1];

    for(int i=n-2;i>=0;i--){
        sum=0.0;
        for(int j=i+1;j<n;j++){
            sum = sum + arr[i][j]*value[j];
        }
        value[i] = (arr[i][n]-sum)/arr[i][i];
    }
}

int main(){
    printf("Enter the number of unknown : ");
    scanf("%d",&n);

    float arr[n][n+1],value[n];

    printf("\nEnter the augmented matrix: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            scanf("%f",&arr[i][j]);
        }
    }

    convertToUpperTriangular(arr,n);
    backSubstitution(arr,value,n);

    //printing the values;
    for(int i=0;i<n;i++){
        printf("\nvalue[%d]=%f\n",i,value[i]);
    }
    

}
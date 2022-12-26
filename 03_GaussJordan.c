#include <stdio.h>
int n;

void convertToDiagonal(float arr[][n+1],int n){
    float ratio;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
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

    convertToDiagonal(arr,n);

    //printing the values;
    for(int i=0;i<n;i++){
        printf("\nvalue[%d]=%f\n",i,arr[i][n]/arr[i][i]);
    }
    

}
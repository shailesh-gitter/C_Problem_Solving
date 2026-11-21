#include<stdio.h>
#include<string.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1||n%2==0||n<0||n>100){
        return 1;
    }
    int num=n;
    int array[n][n];
    memset(array,0,sizeof(array));
    int k=0;
    int r=n/2;
    while(r<n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0+k||j==0+k||i==n-1||j==n-1){
                    if(array[i][j]==0){
                        array[i][j]=n;
                    }
                }
            }
        }
        k++;
        n--;
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            printf("%4d",array[i][j]);
        }
        printf("\n");
    }
}
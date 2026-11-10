#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ages=(int *)malloc(3*sizeof(int));
    if(ages==NULL){
        printf("Memory allocation failed!!\n");
        return 1;
    }
    ages[0]=45;
    ages[1]=36;
    ages[2]=53;
    int *temp=(int *)realloc(ages,sizeof(int));
    if(temp==NULL){
        printf("Resizing failed!!!!\n");
        free(ages);
        return 1;
    }
    else{
        ages=temp;
    }
    ages[3]=54;
    for(int i=0;i<4;i++){
        printf("The age %d:%d\n",i+1,ages[i]);
    }
    free(ages);
    ages=NULL;
    return 0;
}
#include<stdio.h>
void reverser(int* a,int* b);
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter Number %d:\n",i);
        scanf("%d",&arr[i]);
    }
    int *l=arr+9;
    int *f=arr;
    reverser(f,l);
    printf("The New Arrat:");
    for(int i=0;i<10;i++){
        printf("%4d",arr[i]);
    }
    printf("\n");
    return 0;
}
void reverser(int* a,int* b){
    int* first=a;
    int* last=b;
    int temp;
    for(int i=0;i<10/2;i++){
        temp=*(first+i);
        *(first+i)=*(last-i);
        *(last-i)=temp;
    }
}
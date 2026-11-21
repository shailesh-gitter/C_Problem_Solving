#include<stdio.h>
int* finder(int* a);
int main(){
    int arr[]={1,2,3,4,5,8,9};
    int *largest=finder(arr);
    int position=(largest-arr);
    printf("The largest number is %d and it's index position is %d\n",*largest,position);
    *(arr+position)=0;
    printf("The arr[%d] is now 0\n",position);
    return 0;
}
int* finder(int* a){
    int* max=a;
    for(int i=1;i<9;i++){
        if(*max<*(a+i)){
            max=(a+i);
        }
    }
    return max;
}
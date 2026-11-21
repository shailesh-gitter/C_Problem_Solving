#include<stdio.h>
int main()
{
    int N;
    printf("Enter the N for the square matrix(N*N):");
    scanf("%d",&N);
    int sqma[N][N];
    int top=0;
    int right=N-1;
    int left=0;
    int down=N-1;
    int val=1;
    while(top <= down && left <= right)
    {
    for(int i=0;i<N;i++)
    {
        sqma[top][i]=val;
        val++;
    }
    for(int i=0;i<N;i++)
    {
        sqma[i][right]=val;
        val++;
    }
    for(int i=N-2;i==0;i--)
    {
        sqma[down][i]=val;
        val++;
    }
    for(int i=N-2;i==0;i--)
    {
        sqma[i][left]=val;
        val++;
    }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d \t",sqma[i][j]);
        }
        printf("\n");
    }
}
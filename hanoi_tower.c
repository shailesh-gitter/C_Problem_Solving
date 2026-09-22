#include<stdio.h>
void hanoi(int n,char source,char temp,char destination);

void hanoi(int n,char source,char temp,char destination)
{
    // BASE CASE: If there is only 1 disk, move it directly and STOP recursing.
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // RECURSIVE CASE: For n > 1 disks
    // 1. Move top n-1 disks from source to temp (destination acts as spare)
    hanoi(n - 1, source, destination, temp);

    // 2. Move the remaining largest disk directly from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // 3. Move the n-1 disks from temp to destination (source acts as spare)
    hanoi(n - 1, temp, source, destination);
}

int main()
{
    int n;
    char source,destination,temp;
    printf("Enter the Number of Pegs:");
    scanf("%d",&n);
    printf("Enter the source peg(a/b/c):");
    scanf(" %c",&source);
    printf("Enter the temprorary peg(a/b/c):");
    scanf(" %c",&temp);
    printf("Enter the destination peg(a/b/c):");
    scanf(" %c",&destination);
    hanoi(n,source,temp,destination);
    return 0;
}
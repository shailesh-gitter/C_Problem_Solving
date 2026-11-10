#include <stdio.h>
#include <string.h>

int main() {
    printf("This program creates a magic square of a specified size!!\n");
    printf("Enter an odd number only between 1 and 99!!\n");
    
    int num;
    printf("Enter the number: ");
    // Note: Standard magic squares using this method require an ODD number
    if (scanf("%d", &num) != 1 || num > 99 || num < 1 || num % 2 == 0) {
        printf("Invalid Input (Must be an odd number between 1 and 99)\n");
        return 1;
    }
    
    int magix[num][num];
    memset(magix, 0, sizeof(magix));
    
    // Start at the middle of the first row
    int row = 0;
    int col = num / 2;
    
    // Loop strictly for the total number of cells
    for (int sas = 1; sas <= num * num; sas++) {
        magix[row][col] = sas;
        
        // Calculate the next positions wrapping around the grid edges
        int next_row = (row - 1 + num) % num;
        int next_col = (col + 1) % num;
        
        // Check if the next cell is already occupied
        if (magix[next_row][next_col] != 0) {
            // Move directly down from the CURRENT position instead
            row = (row + 1) % num;
        } else {
            row = next_row;
            col = next_col;
        }
    }
    
    // Print the grid neatly
    printf("\nGenerated Magic Square:\n");
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%5d", magix[i][j]);
        }
        printf("\n");
    }
    // Sum up an row to check if it was correct
    int sum=0;
    for (int i = 0; i < num; i++) {
        int j=0;
        sum+=magix[i][j];
    }
    printf("The Sum of the row:%d\n",sum);
    sum=0;
    for (int j= 0; j< num; j++) {
        int i=0;
        sum+=magix[i][j];
    }
    printf("The Sum of the column:%d\n",sum);
    return 0;
}


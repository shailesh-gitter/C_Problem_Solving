#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10

int main(void) {
    char array[SIZE][SIZE];
    srand((unsigned int)time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            array[i][j] = '*';
        }
    }
    int i = 0, j = 0;
    char letter = 'A';
    array[i][j] = letter;

    while (letter < 'Z') {
        bool down_blocked  = (i == SIZE - 1 || array[i + 1][j] != '*');
        bool up_blocked    = (i == 0        || array[i - 1][j] != '*');
        bool right_blocked = (j == SIZE - 1 || array[i][j + 1] != '*');
        bool left_blocked  = (j == 0        || array[i][j - 1] != '*');

        if (down_blocked && up_blocked && right_blocked && left_blocked) {
            printf("The Walker is blocked on all sides after placing '%c'.\n\n", letter);
            break;
        }

        int dir = rand() % 4;

        switch (dir) {
            case 0:
                if (i < SIZE - 1 && array[i + 1][j] == '*') {
                    i++;
                    array[i][j] = ++letter;
                }
                break;
            case 1: 
                if (i > 0 && array[i - 1][j] == '*') {
                    i--;
                    array[i][j] = ++letter;
                }
                break;
            case 2: 
                if (j < SIZE - 1 && array[i][j + 1] == '*') {
                    j++;
                    array[i][j] = ++letter;
                }
                break;
            case 3: 
                if (j > 0 && array[i][j - 1] == '*') {
                    j--;
                    array[i][j] = ++letter;
                }
                break;
        }
    }
    printf("   =====================================\n\n");
    for (int k = 0; k < SIZE; k++) {
        for (int p = 0; p < SIZE; p++) {
            printf("%4c", array[k][p]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define WAIT_MS(ms) usleep((ms) * 1000)

int main() {
    char name1[50];
    char name2[50];
    char orig1[50];
    char orig2[50];

    printf("Enter the First Name: ");
    scanf("%49s", name1);
    printf("Enter the Second Name: ");
    scanf(" %49s", name2);

    int len1 = strlen(name1);
    int len2 = strlen(name2);

    // Convert to uppercase and keep original copies
    for (int i = 0; i < len1; i++) {
        name1[i] = (char)toupper((unsigned char)name1[i]);
        orig1[i] = name1[i];
    }
    orig1[len1] = '\0';

    for (int i = 0; i < len2; i++) {
        name2[i] = (char)toupper((unsigned char)name2[i]);
        orig2[i] = name2[i];
    }
    orig2[len2] = '\0';

    // Cancel out common letters
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (name1[i] == name2[j]) {
                name1[i] = 1;
                name2[j] = 1;
                break;
            }
        }
    }

    // Display Name 1 with strikethrough on cancelled letters
    printf("\n");
    for (int i = 0; i < len1; i++) {
        if (name1[i] == 1) {
            printf("\033[9m%c\033[0m", orig1[i]);
        } else {
            printf("%c", orig1[i]);
        }
    }
    printf("\n");

    // Display Name 2 with strikethrough on cancelled letters
    for (int i = 0; i < len2; i++) {
        if (name2[i] == 1) {
            printf("\033[9m%c\033[0m", orig2[i]);
        } else {
            printf("%c", orig2[i]);
        }
    }
    printf("\n\n");

    // Count remaining unmatched letters
    int tot_count = 0;
    for (int i = 0; i < len1; i++) {
        if (isalpha((unsigned char)name1[i])) tot_count++;
    }
    for (int i = 0; i < len2; i++) {
        if (isalpha((unsigned char)name2[i])) tot_count++;
    }

    // Handle edge case where all letters cancel out (tot_count == 0)
    if (tot_count == 0) {
        printf("All letters cancelled out! Exact Match (Soulmates / Friends)\n");
        return 0;
    }

    // 3-second loading animation
    printf("Calculating");
    fflush(stdout);
    for (int cycle = 0; cycle < 3; cycle++) {
        for (int dot = 0; dot < 3; dot++) {
            WAIT_MS(250);
            printf(".");
            fflush(stdout);
        }
        WAIT_MS(250);
        printf("\b\b\b   \b\b\b");
        fflush(stdout);
    }
    printf("\r\033[K");

    // Traditional Circular FLAMES Elimination
    char flames[] = "FLAMES";
    int active[6] = {1, 1, 1, 1, 1, 1}; // 1 = still active, 0 = cut/eliminated
    int remaining = 6;
    int index = 0;

    // Show initial FLAMES
    printf("F L A M E S");
    fflush(stdout);

    // Eliminate 5 letters one by one until 1 remains
    while (remaining > 1) {
        int steps = 0;
        
        // Count up to tot_count, skipping already eliminated letters
        while (steps < tot_count) {
            if (active[index] == 1) {
                steps++;
                if (steps == tot_count) {
                    break; // Stop right on the letter to eliminate
                }
            }
            index = (index + 1) % 6; // Wrap around from 'S' back to 'F'
        }

        // Eliminate the landed letter
        active[index] = 0;
        remaining--;

        // Pause and redraw FLAMES on the same line with the newly cut letter
        WAIT_MS(600);
        printf("\r");
        for (int i = 0; i < 6; i++) {
            if (active[i] == 0) {
                printf("\033[9m%c\033[0m ", flames[i]); // Strikethrough cut letter
            } else {
                printf("%c ", flames[i]);
            }
        }
        fflush(stdout);

        // Move index to the next active letter for the next round
        index = (index + 1) % 6;
    }

    WAIT_MS(600);
    printf("\n\nThe Result is: ");

    // Find the single remaining letter (where active[i] == 1)
    char winner = 'F';
    for (int i = 0; i < 6; i++) {
        if (active[i] == 1) {
            winner = flames[i];
            break;
        }
    }

    switch (winner) {
        case 'F': printf("Friend\n"); break;
        case 'L': printf("Lover\n"); break;
        case 'A': printf("Affection\n"); break;
        case 'M': printf("Marriage\n"); break;
        case 'E': printf("Enemy\n"); break;
        case 'S': printf("Sibling\n"); break;
    }

    return 0;
}

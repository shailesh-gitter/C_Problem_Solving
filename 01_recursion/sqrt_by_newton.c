#include <stdio.h>
#include <math.h>
#include <stdbool.h> 

int main() {
    int x;
    printf("Enter the Number to find its root: ");
    if (scanf("%d", &x) != 1 || x < 0) {
        printf("Invalid Input \n");
        return 1;
    }
    if (x == 0) {
        printf("The square root is 0.000000\n");
        return 0;
    }
    double y = 1.00;
    double sqrt_val = 0.00; 
    double avg;
    while (true) {
        double temp = (double)x / y; 
        avg = (y + temp) / 2.0;      
        
        if (fabs(y - avg) < (0.00001 * y)) {
            sqrt_val = avg;
            break;
        }
        y = avg;
    }
    printf("The square root is %lf\n", sqrt_val);
    return 0;
}

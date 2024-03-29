#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter the size of diamond pattern: ");
    scanf("%d", &n);

    // Upper part
    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            printf("  ");
        }
        for (k = 0; k < 2 * (n - i - 1); k++) {
            printf("* ");
        }
        for (j = 0; j <= i; j++) {
            printf("  ");
        }
        printf("\n");
    }
    //lower part
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("  ");
        }
        for (k = 0; k < 2 * (n - i - 1); k++) {
            printf("* ");
        }
        for (j = 0; j <= i; j++) {
            printf("  ");
        }
        printf("\n");
    }

    
    return 0;
}

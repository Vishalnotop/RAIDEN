#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter the size of the butterfly pattern: ");
    scanf("%d", &n);

    //upper part
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        for (k = 0; k < 2 * (n - i - 1); k++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower part                                 //  upper part           
    for (i = n - 1; i >= 0; i--) {                //  for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {                //     for (j = 0; j <= i; j++) {
            printf("* ");                         //       printf("* ");
        }                                         //  }
        for (k = 0; k < 2 * (n - i - 1); k++) {   //  for (k = 0; k < 2 * (n - i - 1); k++) {
            printf("  ");                         //       printf("  ");
        }                                         //  }
        for (j = 0; j <= i; j++) {                //  for (j = 0; j <= i; j++) {
            printf("* ");                         //       printf("* ");
        }                                         //  }
        printf("\n");                             //       printf("\n");
    }                                             //  }

    return 0;
}

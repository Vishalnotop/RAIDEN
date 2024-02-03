#include <stdio.h>

int main() {
    int vishal;
    printf("Check the number weather it is even or odd\n");
    
    printf("Enter the number\n  ",vishal);
   scanf("%d",&vishal);
        if (vishal%2 == 0)
        {
        printf("\nThis number is even ");
        }
         else if  (vishal%2 != 0)
        {
            printf("\nThis number  is odd");
        }
    return 0;
}
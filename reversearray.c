#include <stdio.h>
int main()
{
    int arr[100];
    int size, n;
    printf("Enter the size of array \n");
    scanf("%d", &n);
    printf("Enter the element of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d \n", arr[i]);
    }
    printf("\nTHE REVERSE ELEMENTS OF ARRAYS ARE : \n");
    for (int j = n - 1; j >= 0; j--)
    {
        printf("%d\n", arr[j]);
    }

    return 0;
}
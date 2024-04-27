#include <stdio.h>
int main()
{
    int arr1[100];
    int arr2[100];
    int n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    printf("Enter the elements of arr1[] : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("The elements are \n");
    for(int i=0;i<n;i++){
        printf("%2d  ",arr1[i]);
    }
    printf("\nNow copying the elements of arr1[...] to arr2[...]\n");
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("the elements of arr2[...] are \n");
    for(int i=0;i<n;i++){
        printf("%2d  ",arr2[i]);
    }
    return 0;
}
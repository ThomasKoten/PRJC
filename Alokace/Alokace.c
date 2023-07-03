#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void vypis(long *arr, int rep)
{
    for (int j = 0; j < rep; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}
int main()
{
    int n = 5;
    int n2 = 2 * n;
    long *arr1 = (long *)malloc(sizeof(long) * n);
    long *arr2 = (long *)malloc(sizeof(long) * n2);
    printf("%d",sizeof(*arr1));
    for (int k = 0; k < 5; k++)
    {
        arr1[k] = k;
    }
    vypis(arr1,5);

    for (int k = 0; k < 5; k++)
    {
        arr2[k] = arr1[k];
        arr2[k + 5] = arr1[k];
    }
    vypis(arr2,10);

    for (int i = 0; i < 5; i++)
    {
        long temp = *(arr2 + i);
        *(arr2 + i) = *(arr2 + n2 - i - 1);
        *(arr2 + n2 - i - 1) = temp;
    }
    vypis(arr2,10);
    free(arr1);
    free(arr2);
}
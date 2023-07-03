#include <stdio.h>
#include <stdlib.h>
const int MAX = 3;

int main() {

    int  var[] = { 10, 100, 200 };
    int i, * ptr[MAX];
    int** z = (int**)malloc(sizeof(int*) * MAX);
    for (i = 0; i < MAX; i++) {
        z[i] = &var[i]; /* assign the address of integer. */
        ptr[i] = &var[i];
    }

    int* temp = ptr[0];
    ptr[0] = ptr[2];
    ptr[2] = temp;
    ptr[2] = temp;
    for (i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
        printf("Value of var[%d] = %d\n", i, *z[i]);
    }

    return 0;
}
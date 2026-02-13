#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){
    int a = 5;
    int b = 3;
    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);
    printf("After swap: a = %d, b = %d", a, b);

    return 0;
};


#include <stdio.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 10; i++){
        printf("%d ", a[i]); // the number after a[4] will be random
    }

    return 0;
}
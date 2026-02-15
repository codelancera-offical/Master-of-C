#include <stdio.h>

void printArray(float *x, size_t len){
    // because we passing a pointer to function, we can directly access to the origin elements of the array
    for(int i = 0; i < len; i++){
        printf("%f ", x[i]); // 4. access every elements with []
    }
    printf("\n");
}

void scaleArray(float *x, size_t len, int scale){
    for(int i = 0; i < len; i++){
         x[i] *= scale; 
    }
}

int main(){
    float f[4] = {3.14, 2.68, 9.21, 5.26}; // 1. declare and init an array of 4 floats

    // 2. calculate the len of the array
    size_t f_len = sizeof(f) / sizeof(float); // 长度应该为无符号整数

    printf("The Array before scaled:\n");
    printArray(f, f_len); // 3. pass the pointer of f to function

    scaleArray(f, f_len, 2);
    printf("The Array after scaled:\n");
    printArray(f, f_len); 

    return 0;
}
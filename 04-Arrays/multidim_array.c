#include <stdio.h>

void print2DArray(int x[][3], int row, int col){ // 需要知道列数才能计算地址
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// 下面的函数和上面功能一样，但是更体现底层原理，性能更好

void print2DArrayHPC(int *x, int row, int col){ // 当一维数组指针传入
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", *(x + i * col + j)); // 指针算数，自动乘类型大小之后再加
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    int a[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} }; // 这种存储方式叫行优先存储，内存中排布：[1, 0, 0, 0, 1, 0, 0, 0, 1]

    printf("specify col method:\n");
    print2DArray(a, 3, 3);
    printf("pointer arithmetic method:\n");
    print2DArrayHPC((int *)a, 3, 3);

    return 0;
}
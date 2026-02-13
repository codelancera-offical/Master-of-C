#include <stdio.h>
#include <stdlib.h> // malloc函数所在的头文件

int main(){
    int *p;
    p = (int *)malloc(4); //  找出一个4Byte的内存空间，把其首地址地址赋值给指针p，解释为int类型指针
    *p = 10;               //  把指针p所指向的内存地址中存储值10
    printf("Address stored in pointer p: %p\n", p);
    printf("Value stored at the address pointed to by p: %d\n", *p);
}
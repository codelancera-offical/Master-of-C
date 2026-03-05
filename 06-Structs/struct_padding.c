#include <stdio.h>

// #pragma pack(1) 如果这个开了，所有的结构体都会被打包

typedef struct data_padding{
    char x;
    int y;
    char z;
} D1;

// Address  Data
//
//    0x00  x
//    0x01  padding
//    0x02  padding
//    0x03  padding
//    0x04  y
//    0x05  y
//    0x06  y
//    0x07  y
//    0x08  z
//    0x09  padding
//    0x0A  padding
//    0x0B  padding


typedef struct data_well_placed{
    int y;
    char x;
    char z;
} D2;

// Address  Data
//
//    0x00  y
//    0x01  y
//    0x02  y
//    0x03  y
//    0x04  x
//    0x05  z
//    0x06  padding
//    0x07  padding


typedef struct data_packed{
    char x;
    int y;
    char z;
}__attribute__((packed)) D3;  // 单独给一个类指定打包

// Address  Data
//
//    0x00  y
//    0x01  y
//    0x02  y
//    0x03  y
//    0x04  x
//    0x05  z


int main(){
    D1 data1;
    printf("The size of D1: %zu Bytes\n", sizeof(data1));

    D2 data2;
    printf("The size of D2: %zu Bytes\n", sizeof(data2));

    D3 data3;
    printf("The size of D3: %zu Bytes\n", sizeof(data3));

    return 0;
}


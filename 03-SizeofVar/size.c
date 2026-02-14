#include <stdio.h>


int main(){
    int a = 1;
    float b = 1.1;
    double c = 1.21;
    char d = 'd';

    printf("The output result depends on System.\n");
    printf("------------------\n");
    printf("The size of int var is %zu Bytes\n", sizeof(a));
    printf("The size of float var is %zu Bytes\n", sizeof(b));
    printf("The size of double var is %zu Bytes\n", sizeof(c));
    printf("The size of char var is %zu Bytes\n", sizeof(d));
    printf("------------------\n");

    int *pa = &a;
    float *pb = &b;
    double *pc = &c;
    char *pd = &d;

    printf("The size of int pointer var is %zu Bytes\n", sizeof(pa));
    printf("The size of float pointer is %zu Bytes\n", sizeof(pb));
    printf("The size of double pointer is %zu Bytes\n", sizeof(pc));
    printf("The size of char var pointer is %zu Bytes\n", sizeof(pd));

    return 0;
}
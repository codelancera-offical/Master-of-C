#include <stdio.h>

// 使用 typedef
// 这样不需要每次都写 struct Ball2D myBall;，而可以直接写 Ball2D myBall;
typedef struct Ball2D{
    char id[16];
    int r;
    int x;
    int y;
    double vx;
    double vy;
    double ax;
    double ay;
} Ball2D; // <--- 这里就是起的别名


void set_status(Ball2D *ball, double new_x, double new_y, double new_vx, double new_vy, double new_ax, double new_ay){
    (*ball).x = new_x; // 解引用之后再赋值，作用和下面一样，建议使用下面的写法
    ball->y = new_y;   // 使用C提供的语法糖：“去 ball 指向的地址，加上 y 的偏移量，直接操作那块内存。
    ball->vx = new_vx;
    ball->vy = new_vy;
    ball->ax = new_ax;
    ball->ay = new_ay;
}

void print_status(Ball2D *ball){
    printf("Ball ID: %s\n", ball->id);
    printf("Ball coordinates: (%d, %d)\n", ball->x, ball->y);
    printf("Ball velocity: (%.2f, %.2f)\n", ball->vx, ball->vy);
    printf("Ball accelerate: (%.2f, %.2f)\n", ball->ax, ball->ay);
}

int main(){

    // 指定参数初始化，没有指定的参数就会初始化为0或者\0
    Ball2D tennis_ball = {.id="t001", .r=5, .x=100, .y=100, 
                        .vx=0, .vy=0, .ax=0, .ay=0};

    print_status(&tennis_ball);
    set_status(&tennis_ball, 0, 0, 0, 0, 0, 0);
    printf("----------After Reset----------\n");

    print_status(&tennis_ball);

    return 0;
}



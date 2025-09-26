// hybrid.c
#include <emscripten.h>
#include <stdio.h>

int c_multiply_and_print(int a, int b) {
    int r = a * b;
    printf("C 计算结果: %d\n", r);
    return r;
}

EMSCRIPTEN_KEEPALIVE
int add_and_multiply(int a, int b) {
    int sum = a + b;
    printf("C 计算 sum: %d\n", sum);
    return c_multiply_and_print(a, b);
}

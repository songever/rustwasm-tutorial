#include <stdio.h>
#include <emscripten/emscripten.h>

// 定义一个 JS 函数 addAndPrint
EM_JS(void, addAndPrint, (int a, int b), {
    console.log("JS 计算结果:", a + b);
});

int main() {
    printf("C 调用 JS:\n");
    addAndPrint(10, 20);  // 调用 JS 函数
    return 0;
}

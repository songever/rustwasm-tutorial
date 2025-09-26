-s EXPORTED_FUNCTIONS="['_c_multiply_and_print']"#include <stdio.h>
#include <emscripten/emscripten.h>

// 1️⃣ C 调用 JS
EM_JS(void, js_add_and_print, (int a, int b), {
    console.log("JS 计算结果:", a + b);
    // 2️⃣ JS 再调用 C 函数
    Module._c_multiply_and_print(a, b);
});

EMSCRIPTEN_KEEPALIVE
// 3️⃣ C 中被 JS 调用的函数
void c_multiply_and_print(int a, int b) {
    printf("C 计算结果: %d\n", a * b);
}

int main() {
    printf("开始 C 调用 JS\n");
    js_add_and_print(3, 5);
    return 0;
}

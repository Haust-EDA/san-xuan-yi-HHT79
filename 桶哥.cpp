#include <stdio.h>

int main() {
    // 正三角形99乘法表
    printf("正三角形九九乘法表：\n");
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%2d ", j, i, i * j); // %2d 表示输出的数字占两个字符宽度，右对齐
        }
        printf("\n");
    }

    // 倒三角形99乘法表
    printf("倒三角形九九乘法表：\n");
    for (int i = 9; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%2d ", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}

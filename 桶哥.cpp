#include <stdio.h>

int main() {
    // ��������99�˷���
    printf("�������ξžų˷���\n");
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%2d ", j, i, i * j); // %2d ��ʾ���������ռ�����ַ���ȣ��Ҷ���
        }
        printf("\n");
    }

    // ��������99�˷���
    printf("�������ξžų˷���\n");
    for (int i = 9; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%2d ", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}

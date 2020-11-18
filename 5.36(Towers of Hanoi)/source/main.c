#include<stdio.h>
#include<stdlib.h>
void hanoi(int n, char A, char B, char C);
int main() {
    int n;
    printf("請輸入盤數：");
    scanf_s("%d", &n);
    hanoi(n, '1', '2', '3');
    system("pause");
    return 0;
}
void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("從 %c 移動到 %c \n", A, C);
    }
    else {
       hanoi(n - 1, A, C, B);
       printf("從 %c 移動到 %c \n", A, C);
       hanoi(n - 1, B, A, C);
    }
}

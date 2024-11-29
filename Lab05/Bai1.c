#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("Nhap 3 gia tri bat ky: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = num1;

    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    printf("So lon nhat la: %d\n", max);
    return 0;
}
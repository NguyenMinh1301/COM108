#include <stdio.h>

int main() {
    int Min, Max;
    int i;
    float Tong = 0, BienDem = 0, TrungBinh = 0;

    // Nhập vào Min và Max
    printf("=============================================================================\n");
    printf("Input Min: ");
    printf("=============================================================================\n");
    scanf("%d", &Min);
    printf("=============================================================================\n");
    printf("Input Max: ");
    printf("=============================================================================\n");
    scanf("%d", &Max);  

    // Lặp qua các số từ Min đến Max
    for (i = Min; i <= Max; i++) {
        if (i % 2 == 0) {  // Kiểm tra nếu số chia hết cho 2
            Tong += i;
            BienDem++;
        }
    }

    // Nếu có ít nhất một số chia hết cho 2, tính trung bình
    if (BienDem > 0) {
        TrungBinh = Tong / BienDem;
        printf("=============================================================================\n");
        printf("Average of numbers divisible by 2: %.2f\n", TrungBinh);
        printf("=============================================================================\n");
    } else {
        printf("=============================================================================\n");
        printf("There is no number divisible by 2 in the range [Min, Max]\n");
        printf("=============================================================================\n");
    }

    return 0;
}

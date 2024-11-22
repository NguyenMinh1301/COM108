#include <stdio.h>

int main() {
    int number, i;
    printf("=============================================================================\n");
    printf("Input number: ");
    printf("=============================================================================\n");
    scanf("%d", &number); 

    //Tìm số chỉnh phương
    for(i = 1; i * i <= number; i++) {
        if(i * i == number) {  
            printf("=============================================================================\n");
            printf("(%d) is a perfect square number\n", number);
            printf("=============================================================================\n");
            break;  //Nếu tìm thấy số, trương trình thoát khỏi vòng lặp
        }
    }

    // Nếu không tìm thấy số chính phương
    if (i * i != number) {
        printf("=============================================================================\n");
        printf("(%d) is not a perfect square number\n", number);
        printf("=============================================================================\n");
    }

    return 0;  // Trả về 0 để kết thúc chương trình
}

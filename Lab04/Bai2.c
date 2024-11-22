#include <stdio.h>

int main() {

    int number;
    int i;
    int count = 0;
    //Mời người dùng nhập
    printf("=============================================================================\n");
    printf("Input number: ");
    printf("=============================================================================\n");
    scanf("%d", &number);

    //Đếm số lượng của các ước số từ number cho đến number - 1. Nếu 1 số 1 chia hết cho number (number % i == 0), biến count sẽ được tăng lên ++count 
    for (i = 2; i < number; ++i) {
        if (number % i == 0) {
            count++;
        }
    }

    //In kết quả
    if (count == 0){
        printf("=============================================================================\n");
        printf("(%d) is prime number.", number);
        printf("=============================================================================\n");
    } else{  
        printf("=============================================================================\n");
        printf("(%d) is not prime.", number);
        printf("=============================================================================\n");
    }

    return 0;
}
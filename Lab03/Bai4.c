#include <stdio.h>

int main() {

    float kW, answer;

    printf("===========================================================\n");
    printf("||                                                       ||\n");
    printf("||   Calculate electricity bill and energy consumption   ||\n");
    printf("||                                                       ||\n");
    printf("===========================================================\n");

    //Mời người dùng nhập số điện và kiểm tra xem có phải 1 số không
    printf("Please enter the amount of electricity consumed: ");
    if (scanf("%f", &kW) != 1) {
        printf("Invalid input, please enter a valid value.\n");
        return 1;
    }

    //Kiểm tra số > 0
    if (kW <= 0) {
        printf("Invalid value.\n");
        return 1;
    }

    //Tính toán và Output số điện
    if (kW <= 50) {
        answer = kW * 1.687;
        printf("Your total bill is: %.2f thousand VND\n", answer);
    } else if (kW > 51 && kW <= 101) {
        answer = kW * 1.734;
        printf("Your total bill is: %.2f thousand VND\n", answer);
    } else if (kW > 101 && kW <= 200) {
        answer = kW * 2.014;
        printf("Your total bill is: %.2f thousand VND\n", answer);
    } else if (kW > 201 && kW <= 300) {
        answer = kW * 2.536;
        printf("Your total bill is: %.2f thousand VND\n", answer);
    } else if (kW > 301 && kW <= 400) {
        answer = kW * 2.834;
        printf("Your total bill is: %.2f thousand VND\n", answer);
    } else if (kW >= 401) {
        answer = kW * 2.927;
        printf("Your total bill is: %.2f thousand VND\n", answer);
    }
    printf("===========================================================\n");

    return 0;
}
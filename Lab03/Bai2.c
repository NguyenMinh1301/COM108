#include <stdio.h>

int main() {
    float numberA, numberB, answer;
    //Mời người dùng nhập
    printf("Input number A: ");
    scanf(" %f", &numberA);

    printf("Input number B: ");
    scanf(" %f", &numberB);

    //Tính kết quả
    if (numberA == 0) {
        if (numberB == 0) {
            printf("Equation has infinite solutions!\n");
        } else {
            printf("Equation with no solution!\n");
        }
    } else {
        answer = -numberB / numberA;
        printf("The equation has the following solution: (%.2f)\n", answer);
    }

    return 0;
}
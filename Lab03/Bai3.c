#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, X;
    int check;

    //Mời người dùng nhập giá trị
    printf("Enter coefficient A: ");
    check = scanf("%f", &A);
    //Kiểm tra người dùng có nhập đúng giá trị hay không (ở đây là 1 số)
    while (check != 1) {
        printf("!! Invalid input. Please enter again: ");
        fflush(stdin); //Xóa bộ nhớ
        check = scanf("%f", &A);
    }

    //Thực hiện yêu cầu nhập và kiểm tra với B và C
    printf("Enter coefficient B: ");
    check = scanf("%f", &B);
    while (check != 1) {
        printf("!! Invalid input. Please enter again: ");
        fflush(stdin);
        check = scanf("%f", &B);
    }

    printf("Enter coefficient C: ");
    check = scanf("%f", &C);
    while (check != 1) {
        printf("!! Invalid input. Please enter again: ");
        fflush(stdin);
        check = scanf("%f", &C);
    }

    //Tính giá trị nhập vào và in kết quả
    if (A == 0) {
        if (B == 0) {
            if (C == 0) {
                printf("The equation has infinitely many solutions");
            } else {
                printf("The equation has no solution");
            }
        } else {
            X = -C / B;
            printf("The equation has a solution: (%.3f)", X);
        }
    } else {
        float delta = (B * B) - 4 * A * C;
        if(delta < 0) {   
            printf("The equation has no real solutions");
        } else if (delta == 0) {
            printf("The equation has a double root: (%.3f)", X = -B / (2 * A));
        } else {
            float x1 = (- B +sqrt(delta))/(2 * A);
            float x2 = (- B -sqrt(delta))/(2 * A);
            printf("The equation has two distinct roots: (%.3f) and (%.3f)", x1, x2);
        }
    }
}

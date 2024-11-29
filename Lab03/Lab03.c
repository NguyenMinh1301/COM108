#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int ChucNang1 () {

    float score;
    //Mời người dùng nhập điểm và kiểm tra xem có phải là một số hay không (nếu không phải số trương trình hiện thông báo và tắt)
    printf("=============================================================================\n");
    printf("Please input the score: ");
    if (scanf("%f", &score) != 1) { 
        printf("Invalid input. Please enter a valid number.\n");
        printf("=============================================================================\n");
        return 1;
    }

    //Kiểm tra và hiện dánh giá
    if (score >= 9.0 && score <= 10.0) {
        printf("=============================================================================\n");
        printf("EXCELLENT!!\n");
        printf("=============================================================================\n");
    } else if (score >= 8.0 && score < 9.0) {
        printf("=============================================================================\n");
        printf("GREAD!\n");
        printf("=============================================================================\n");
    } else if (score >= 6.5 && score < 8.0) {
        printf("=============================================================================\n");
        printf("GOOD\n");
        printf("=============================================================================\n");
    } else if (score >= 5.0 && score < 6.5) {
        printf("=============================================================================\n");
        printf("MIDDLE\n");
        printf("=============================================================================\n");
    } else if (score >= 3.5 && score < 5.0) {
        printf("=============================================================================\n");
        printf("WEAK\n");
        printf("=============================================================================\n");
    } else if (score >= 0.0 && score < 3.5) {
        printf("=============================================================================\n");
        printf("LEAST\n");
        printf("=============================================================================\n");
    } else {
        printf("=============================================================================\n");
        printf("Invalid score. Please enter a score between 0 and 10.\n");
        printf("=============================================================================\n");
    }

    return 0;
}

int ChucNang2 () {

    float numberA, numberB, answer;
    //Mời người dùng nhập
    printf("Input number A: ");
    scanf(" %f", &numberA);

    printf("Input number B: ");
    scanf(" %f", &numberB);

    //Tính kết quả
    if (numberA == 0) {
        if (numberB == 0) {
            printf("=============================================================================\n");
            printf("Equation has infinite solutions!\n");
            printf("=============================================================================\n");
        } else {
            printf("=============================================================================\n");
            printf("Equation with no solution!\n");
            printf("=============================================================================\n");
        }
    } else {
        answer = -numberB / numberA;
        printf("=============================================================================\n");
        printf("The equation has the following solution: (%.2f)\n", answer);
        printf("=============================================================================\n");
    }

    return 0;
}

int ChucNang3 () {

    float A, B, C, X;
    int check;

    //Mời người dùng nhập giá trị
    printf("Enter coefficient A: ");
    check = scanf("%f", &A);
    //Kiểm tra người dùng có nhập đúng giá trị hay không (ở đây là 1 số)
    while (check != 1) {
        printf("!! Invalid input. Please enter again: \n");
        fflush(stdin); //Xóa bộ nhớ
        check = scanf("%f", &A);
    }

    //Thực hiện yêu cầu nhập và kiểm tra với B và C
    printf("Enter coefficient B: ");
    check = scanf("%f", &B);
    while (check != 1) {
        printf("!! Invalid input. Please enter again: \n");
        fflush(stdin);
        check = scanf("%f", &B);
    }

    printf("Enter coefficient C: ");
    check = scanf("%f", &C);
    while (check != 1) {
        printf("!! Invalid input. Please enter again: \n");
        fflush(stdin);
        check = scanf("%f", &C);
    }

    //Tính giá trị nhập vào và in kết quả
    if (A == 0) {
        if (B == 0) {
            if (C == 0) {
                printf("=============================================================================\n");
                printf("The equation has infinitely many solutions\n");
                printf("=============================================================================\n");
            } else {
                printf("=============================================================================\n");
                printf("The equation has no solution\n");
                printf("=============================================================================\n");
            }
        } else {
            X = -C / B;
            printf("=============================================================================\n");
            printf("The equation has a solution: (%.3f)\n", X);
            printf("=============================================================================\n");
        }
    } else {
        float delta = (B * B) - 4 * A * C;
        if(delta < 0) {   
            printf("=============================================================================\n");
            printf("The equation has no real solutions\n");
            printf("=============================================================================\n");
        } else if (delta == 0) {
            printf("=============================================================================\n");
            printf("The equation has a double root: (%.3f)\n", X = -B / (2 * A));
            printf("=============================================================================\n");
        } else {
            float x1 = (- B +sqrt(delta))/(2 * A);
            float x2 = (- B -sqrt(delta))/(2 * A);
            printf("=============================================================================\n");
            printf("The equation has two distinct roots: (%.3f) and (%.3f)\n", x1, x2);
            printf("=============================================================================\n");
        }
    }
    return 0;
}

int ChucNang4 () {

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
        printf("=============================================================================\n");
        printf("Your total bill is: %.2f thousand VND\n", answer);
        printf("=============================================================================\n");
    } else if (kW > 51 && kW <= 101) {
        answer = kW * 1.734;
        printf("=============================================================================\n");
        printf("Your total bill is: %.2f thousand VND\n", answer);
        printf("=============================================================================\n");
    } else if (kW > 101 && kW <= 200) {
        answer = kW * 2.014;
        printf("=============================================================================\n");
        printf("Your total bill is: %.2f thousand VND\n", answer);
        printf("=============================================================================\n");
    } else if (kW > 201 && kW <= 300) {
        answer = kW * 2.536;
        printf("=============================================================================\n");
        printf("Your total bill is: %.2f thousand VND\n", answer);
        printf("=============================================================================\n");
    } else if (kW > 301 && kW <= 400) {
        answer = kW * 2.834;
        printf("=============================================================================\n");
        printf("Your total bill is: %.2f thousand VND\n", answer);
        printf("=============================================================================\n");
    } else if (kW >= 401) {
        answer = kW * 2.927;
        printf("=============================================================================\n");
        printf("Your total bill is: %.2f thousand VND\n", answer);
        printf("=============================================================================\n");
    }

    return 0;
}

int main () {
    system("cls");
    int select;
    
    do {
        //In ra màn hình để người dùng chọn trương trình (nhập số từ 0 -  4)
        printf("\n\n\n");
        printf("\n\t\t==============================NguyenQuangMinh.exe============================");
        printf("\n\t\t||                                                                         ||"); 
        printf("\n\t\t||                 ! PLEASE ENTER THE PROGRAM YOU WANT TO USE !            ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [1] Student Evaluation.                                           ||");          //Nếu người dùng nhập 1 trương trình sẽ chạy (Xếp hạng học sinh)
        printf("\n\t\t||       [2] Calculate the first degree equation.                          ||");          //Nếu người dùng nhập 2 trương trình sẽ chạy (Tính phương trình bậc nhất)
        printf("\n\t\t||       [3] Calculate the quadratic equation.                             ||");          //Nếu người dùng nhập 3 trương trình sẽ chạy (Tính phương trình bậc hai)
        printf("\n\t\t||       [4] Calculate electricity price.                                  ||");          //Nếu người dùng nhập 4 trương trình sẽ chạy (Tính tiền điện)
        printf("\n\t\t||                                                                         ||"); 
        printf("\n\t\t||       [0] Exit the program.                                             ||");          //Nếu người dùng nhập 0 trương trình sẽ dừng lại
        printf("\n\t\t||                                                                         ||"); 
        printf("\n\t\t=============================================================================");

        printf("\n\n\t\tSelect the program you want to use from [0 -> 4]: ");
        
        scanf("%d", &select);

        switch (select) {
            case 1:
                system("cls");
                ChucNang1();
                break;
            case 2:
                system("cls");
                ChucNang2();
                break;
            case 3:
                system("cls");
                ChucNang3();
                break;
            case 4:
                system("cls");
                ChucNang4();
                break;
            case 0:
                system("cls");
                printf("\n\n\n\n\n\n\n\t\t\t\t\t\t!! Thanks. See you soon. !!\n\n\n\n\n\n\n ");  
                break;
            default:
                system("cls");
                printf("\n\n\t\t\t\t\t\t!! Incorrect entry please re-enter !!");
                break;
            }
    } while (select != 0);

}

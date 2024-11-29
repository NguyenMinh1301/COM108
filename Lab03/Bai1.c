#include <stdio.h>

int main() {
    float score;

    //Mời người dùng nhập điểm và kiểm tra xem có phải là một số hay không (nếu không phải số trương trình hiện thông báo và tắt)
    printf("---------------------------------------------------------------------\n");
    printf("Please input the score: ");
    if (scanf("%f", &score) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        printf("---------------------------------------------------------------------\n");
        return 1;
    }

    //Kiểm tra và hiện dánh giá
    if (score >= 9.0 && score <= 10.0) {
        printf("---------------------------------------------------------------------\n");
        printf("EXCELLENT!!\n");
        printf("---------------------------------------------------------------------\n");
    } else if (score >= 8.0 && score < 9.0) {
        printf("---------------------------------------------------------------------\n");
        printf("GREAD!\n");
        printf("---------------------------------------------------------------------\n");
    } else if (score >= 6.5 && score < 8.0) {
        printf("---------------------------------------------------------------------\n");
        printf("GOOD\n");
        printf("---------------------------------------------------------------------\n");
    } else if (score >= 5.0 && score < 6.5) {
        printf("---------------------------------------------------------------------\n");
        printf("MIDDLE\n");
        printf("---------------------------------------------------------------------\n");
    } else if (score >= 3.5 && score < 5.0) {
        printf("---------------------------------------------------------------------\n");
        printf("WEAK\n");
        printf("---------------------------------------------------------------------\n");
    } else if (score >= 0.0 && score < 3.5) {
        printf("---------------------------------------------------------------------\n");
        printf("LEAST\n");
        printf("---------------------------------------------------------------------\n");
    } else {
        printf("---------------------------------------------------------------------\n");
        printf("Invalid score. Please enter a score between 0 and 10.\n");
        printf("---------------------------------------------------------------------\n"); 
    }

    return 0;
}
#include <stdio.h>
int main() {
    float number1, number2;
    float Total;
    float Aprat;

    //Yêu cầu nhập giá trị
    printf("Input number 1:");
    scanf("%f", &number1);

    printf("Input number 2:");
    scanf("%f", &number2);

    //Tính giá trị (Total = tổng) (Aprat = hiệu)
    Total = number1 + number2;
    Aprat = number1 - number2;

    //In giá trị
    printf("Total is (%g), Aprat is (%g)\n", Total, Aprat);
    printf("Nguyen Quang Minh TV00291");
    return 0;
}    


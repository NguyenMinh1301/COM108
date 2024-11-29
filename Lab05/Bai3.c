#include <stdio.h>

int main () {

    int num1, num2;

    printf("Input number A: ");
    scanf("%d", &num1);
    printf("Input number B: ");
    scanf("%d", &num2);  

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After converting A and B: A = %d || B = %d", num1, num2);

    return 0;
}
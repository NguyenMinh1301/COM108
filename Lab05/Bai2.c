#include <stdio.h>

int main () {

    int Year, Leap_year;

    printf("Input year: ");
    scanf("%d", &Year);

    if (Year % 400 == 0) {
        printf("!! (%d) Is Leap year !!", Year);
    } if (Year % 4 == 0 && Year % 100 != 0) {
        printf("!! (%d) Is Leap year !!", Year);
    } else {
        printf("Is not Leap year");
    }
    return 0;

}
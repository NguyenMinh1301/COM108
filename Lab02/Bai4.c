#include <stdio.h>

//Hàm tính trung bình (Toán*3 + Lý*2 + Hóa) /6
float Average_score (float Math, float Physics, float Chemistry) {
    return (Math * 3 + Physics * 2 + Chemistry) /6;
}

int main() {

    float Math, Physics, Chemistry;

    printf("-------------------\n");

    //Mời người dùng nhập điểm
    printf("Math point: ");
    scanf(" %f", &Math);

    printf("-------------------\n");

    printf("Physics point: ");
    scanf(" %f", &Physics);

    printf("-------------------\n");

    printf("Chemistry: ");
    scanf(" %f", &Chemistry);

    printf("-------------------\n");

    //In điểm đã được tính từ hàm
    float avg = Average_score (Math, Physics, Chemistry);
    printf("Average score: << %.1f >>\n", avg);
    printf("Nguyen Quang Minh TV00291\n");
    
    printf("-------------------");

    return 0;

}
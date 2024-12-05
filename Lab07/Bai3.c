#include <stdio.h>
#include <string.h>

int main() {
int i, j, x;

    //Mời người dùng nhập độ dài của một số
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tInput long array: \n");
    if (scanf("%d", &x) != 1 || x <= 0 || x > 999) {
        printf("\t\tInvalid number! Returning to the main menu.\n");
        getchar();  // Loại bỏ ký tự thừa trong bộ đệm
        return;
    }

    char s[x][20];  //Tạo mảng chứa 5 chuỗi
    char temp[20];  //Biến tạm để hoán vị chuỗi

    //Nhập chuỗi từ bàn phím
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tInput %d array: \n", x);
    printf("\t\t=============================================================================\n");
    for (i = 0; i < x; i++) {
        printf("\t\tNhap chuoi %d: ", i + 1);
        if (scanf("%19s", s[i]) != 1) {  //Đọc chuỗi từ người dùng
            //Nếu không đọc được chuỗi, xóa bộ đệm và yêu cầu nhập lại
            while (getchar() != '\n');
            i--;
            continue;
        }
        getchar(); //Để loại bỏ ký tự newline còn sót lại từ scanf
    }

    //Sắp xếp mảng chuỗi theo thứ tự từ điển (Bubble Sort)
    for (i = 0; i < x - 1; i++) {
        for (j = 0; j < x - 1 - i; j++) {
            if (strcmp(s[j], s[j + 1]) > 0) {
                //Hoán vị các chuỗi nếu chúng không theo thứ tự từ điển
                strcpy(temp, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], temp);
            }
        }
    }

    //Xuất các chuỗi đã sắp xếp
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tString list after sorting:\n");
    printf("\t\t=============================================================================\n");
    for (i = 0; i < x; i++) {
        printf("\t\t%s\n", s[i]);
    }
    printf("\n\t\t=============================================================================\n");

    return 0;
}

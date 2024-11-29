#include <stdio.h>
#include <string.h>

int main() {
    char s[5][20];  //Tạo mảng chứa 5 chuỗi, mỗi chuỗi có tối đa 19 ký tự (vì phải có chỗ cho ký tự kết thúc chuỗi '\0')
    int i, j;
    char temp[20];  //Biến tạm để hoán vị chuỗi

    //Nhập 5 chuỗi từ bàn phím
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tInput 5 array:\n");
    printf("\t\t=============================================================================\n");
    for (i = 0; i < 5; i++) {
        printf("\t\tNhap chuoi %d: ", i + 1);
        fgets(s[i], sizeof(s[i]), stdin);  //Sử dụng fgets để tránh lỗi tràn bộ đệm
        s[i][strcspn(s[i], "\n")] = '\0';  //Xóa ký tự '\n' mà fgets có thể đưa vào
    }

    //Sắp xếp mảng chuỗi theo thứ tự từ điển (Bubble Sort)
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - 1 - i; j++) {
            if (strcmp(s[j], s[j + 1]) > 0) {
                //Hoán vị các chuỗi nếu chúng không theo thứ tự từ điển
                strcpy(temp, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], temp);
            }
        }
    }

    //Xuất các chuỗi đã sắp xếp ra màn hình
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tString list after sorting:\n");
    printf("\t\t=============================================================================\n");
    for (i = 0; i < 5; i++) {
        printf("\t\t%s\n", s[i]);
    }
    printf("\n\t\t=============================================================================\n");

    return 0;
}

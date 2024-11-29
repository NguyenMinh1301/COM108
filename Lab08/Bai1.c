#include <stdio.h>
#include <string.h>   //Để sử dụng strlen()
#include <stdlib.h>   //Để sử dụng system()

#define MAX_STUDENTS 50

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

void nhapSinhVien(struct SinhVien mangSV[], int *n) {
    int i;
    
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tEnter the number of students you want to add: ");
    scanf("%d", n);
    getchar();

    for (i = 0; i < *n; i++) {
        printf("\n\t\t=============================================================================\n");
        printf("\t\tEnter student information %d:\n", i + 1);

        printf("\t\tID: ");
        fgets(mangSV[i].mssv, sizeof(mangSV[i].mssv), stdin);
        mangSV[i].mssv[strcspn(mangSV[i].mssv, "\n")] = '\0'; //Loại bỏ ký tự newline

        printf("\t\tStudent name: ");
        fgets(mangSV[i].tenSV, sizeof(mangSV[i].tenSV), stdin);
        mangSV[i].tenSV[strcspn(mangSV[i].tenSV, "\n")] = '\0';

        printf("\t\tField of study: ");
        fgets(mangSV[i].nganhHoc, sizeof(mangSV[i].nganhHoc), stdin);
        mangSV[i].nganhHoc[strcspn(mangSV[i].nganhHoc, "\n")] = '\0';

        printf("\t\tAverage score: ");
        scanf("%f", &mangSV[i].diemTB);
        getchar();
    }
}

void hienThiThongTin(struct SinhVien mangSV[], int n) {
    //Hiển thị thông tin sinh viên vừa nhập vào
    int i;
    
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tEnter student information:\n");
    printf("\t\t=============================================================================\n");

    for (i = 0; i < n; i++) {
        printf("\t\tID: %s\n", mangSV[i].mssv);
        printf("\t\tStudent name: %s\n", mangSV[i].tenSV);
        printf("\t\tField of study: %s\n", mangSV[i].nganhHoc);
        printf("\t\tAverage score: %.2f\n", mangSV[i].diemTB);
        printf("\t\t=============================================================================\n");
    }
}

int main() {
    struct SinhVien mangSV[MAX_STUDENTS];
    int n, select;

    do {
        printf("\n\n\n");
        printf("\n\t\t==============================NguyenQuangMinh.exe============================");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||                 ! PLEASE ENTER THE PROGRAM YOU WANT TO USE !            ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [1] Enter student information.                                    ||");
        printf("\n\t\t||       [2] Student information just entered.                             ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [0] Exit the program.                                             ||");
        printf("\n\t\t=============================================================================");
        printf("\n\n\t\tSelect the program you want to use from [0 -> 2]: ");
        if (scanf("%d", &select) != 1) { 
            while (getchar() != '\n');
            continue;
        }

        switch (select) {
            case 1:
                nhapSinhVien(mangSV, &n);
                break;
            case 2:
                hienThiThongTin(mangSV, n);
                break;
            case 0:
                printf("\n\t\t=============================================================================\n");
                printf("\t\t\t\t\t!! Thanks. See you soon. !!\n");
                printf("\t\t=============================================================================\n");
                break;
            default:
                printf("\n\t\t=============================================================================\n");
                printf("\t\t\t!! Incorrect entry please re-enter !!\n");
                printf("\t\t=============================================================================\n");
                break;
        }
    } while (select != 0);

    return 0;
}

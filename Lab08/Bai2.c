#include <stdio.h>
#include <string.h>   //Để sử dụng strlen()
#include <stdlib.h>   //Để sử dụng system()

#define MAX_STUDENTS 50

struct SinhVien {
    char Mssv[50];
    char TenSv[50];
    char NganhHoc[50];
    float DiemTB;
};

//Hàm nhập thông tin sinh viên
void NhapSinhVien(struct SinhVien MangSV[], int *n) {
    int i;

    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tEnter the number of students you want to save: ");
    scanf("%d", n);
    getchar(); //Loại bỏ ký tự newline

    for (i = 0; i < *n; i++) {
        printf("\n\t\t=============================================================================\n");
        printf("\t\tEnter student information %d:\n", i + 1);

        printf("\t\tID: ");
        fgets(MangSV[i].Mssv, sizeof(MangSV[i].Mssv), stdin);
        MangSV[i].Mssv[strcspn(MangSV[i].Mssv, "\n")] = '\0'; //Loại bỏ ký tự newline

        printf("\t\tStudent name: ");
        fgets(MangSV[i].TenSv, sizeof(MangSV[i].TenSv), stdin);
        MangSV[i].TenSv[strcspn(MangSV[i].TenSv, "\n")] = '\0';

        printf("\t\tField of study: ");
        fgets(MangSV[i].NganhHoc, sizeof(MangSV[i].NganhHoc), stdin);
        MangSV[i].NganhHoc[strcspn(MangSV[i].NganhHoc, "\n")] = '\0';

        printf("\t\tAverage score: ");
        scanf("%f", &MangSV[i].DiemTB);
        getchar();
    }
}

//Hàm hiển thị thông tin sinh viên
void HienThiThongTin(struct SinhVien MangSV[], int n) {
    int i;

    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tStudent info:\n");
    printf("\t\t=============================================================================\n");

    for (i = 0; i < n; i++) {
        printf("\t\tID: %s\n", MangSV[i].Mssv);
        printf("\t\tStudent name: %s\n", MangSV[i].TenSv);
        printf("\t\tField of study: %s\n", MangSV[i].NganhHoc);
        printf("\t\tAverage score: %.2f\n", MangSV[i].DiemTB);
        printf("\t\t=============================================================================\n");
    }
}

//Hàm sắp xếp sinh viên theo điểm trung bình
void SapXepSinhVien(struct SinhVien MangSV[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (MangSV[i].DiemTB < MangSV[j].DiemTB) {
                struct SinhVien temp = MangSV[i];
                MangSV[i] = MangSV[j];
                MangSV[j] = temp;
            }
        }
    }

    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tList of students after sorting by average score:\n");
    printf("\t\t=============================================================================\n");
    HienThiThongTin(MangSV, n);
}

int main() {
    struct SinhVien MangSV[MAX_STUDENTS];
    int n, Select;

    do {

        printf("\n\n\n");
        printf("\n\t\t==============================NguyenQuangMinh.exe============================");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||                 ! PLEASE ENTER THE PROGRAM YOU WANT TO USE !            ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [1] Enter student information.                                    ||");
        printf("\n\t\t||       [2] Student information just entered.                             ||");
        printf("\n\t\t||       [3] Sort students by average score.                               ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [0] Exit the program.                                             ||");
        printf("\n\t\t=============================================================================");

        printf("\n\n\t\tSelect the program you want to use from [0 -> 3]: ");

        if (scanf("%d", &Select) != 1) {
            return 0;
        }

        switch (Select) {
            case 1:
                NhapSinhVien(MangSV, &n);
                break;
            case 2:
                HienThiThongTin(MangSV, n);
                break;
            case 3:
                SapXepSinhVien(MangSV, n);
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
    } while (Select != 0);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void ChucNang1 () {   

    //Mời người dùng nhập 3 số bất kì
    int num1, num2, num3;
    printf("\n\t\t=============================================================================");
    printf("\n\t\tEnter numbers One: ");
    scanf("%d", &num1);

    printf("\n\t\t=============================================================================");
    printf("\n\t\tEnter numbers Two: ");
    scanf("%d", &num2);

    printf("\n\t\t=============================================================================");
    printf("\n\t\tEnter numbers Three: ");
    scanf("%d", &num3);

    //Gán giá trị cho max bằng num1
    int max = num1;

    //Nếu num2 lớn hơn max 
    if (num2 > max) {
        //Gán giá trị cho max bằng num2
        max = num2;
    }
    //Nếu nủm lớn hơn max  
    if (num3 > max) {
        //Gán giá trị cho max bằng num3
        max = num3;
    } 

    //In ra kết quả
    printf("\n\t\t=============================================================================");
    printf("\n\t\tThe largest number is: %d\n", max);
    printf("\n\t\t=============================================================================");
}

void ChucNang2 () {

    //Mời người dùng nhập
    int Year, Leap_year;
    printf("\n\t\t=============================================================================");
    printf("\n\t\tInput year: ");
    scanf("%d", &Year);

    //Năm nhuận là các năm chia được cho 400 và 4 nhưng không chia được cho 100

    //Nếu Year "chia dư" với 400 bằng 0 (thoả mãn điều kiện chia hết cho 400)
    if (Year % 400 == 0) {
        printf("\n\t\t=============================================================================");
        printf("\n\t\t!! (%d) Is Leap year !!", Year);
        printf("\n\t\t=============================================================================");
    //Nếu Year "chia dư" với 4 bằng 0 và chia với 100 có dư (thoả mãn điều kiện chia hết cho 4 và chia dư cho 100)
    } if (Year % 4 == 0 && Year % 100 != 0) {
        printf("\n\t\t=============================================================================");
        printf("\n\t\t!! (%d) Is Leap year !!", Year);
        printf("\n\t\t=============================================================================");
    //Các trường hợp còn lại đều là năm thường
    } else {
        printf("\n\t\t=============================================================================");
        printf("\n\t\tIs not Leap year");
        printf("\n\t\t=============================================================================");
    }
}

void ChucNang3 () {

    //Mời người dùng nhập
    int num1, num2;
    printf("\n\t\t=============================================================================");
    printf("\n\t\tInput number A: ");
    scanf("%d", &num1);
    printf("\n\t\t=============================================================================");
    printf("\n\t\tInput number B: ");
    scanf("%d", &num2);  

    //Đổi vị trí cho 2 số qua trung gian là temp
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    //In ra kết quả
    printf("\n\t\t=============================================================================");
    printf("\n\t\tAfter converting A and B: A = %d || B = %d", num1, num2);
    printf("\n\t\t=============================================================================");

}

int main () {
    system("cls");
    int select;
    
    do {
        //In ra màn hình để người dùng chọn trương trình (nhập số từ 0 -  3)
        printf("\n\n\n");
        printf("\n\t\t==============================NguyenQuangMinh.exe============================");
        printf("\n\t\t||                                                                         ||"); 
        printf("\n\t\t||                 ! PLEASE ENTER THE PROGRAM YOU WANT TO USE !            ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [1] Find the largest number of 3 number.                          ||");          //Nếu người dùng nhập 1 trương trình sẽ chạy (Tìm số lớn nhất)
        printf("\n\t\t||       [2] Calculate leap year.                                          ||");          //Nếu người dùng nhập 2 trương trình sẽ chạy (Tính năm nhuận)
        printf("\n\t\t||       [3] Converting number.                                            ||");          //Nếu người dùng nhập 3 trương trình sẽ chạy (Hoán vị số)
        printf("\n\t\t||                                                                         ||"); 
        printf("\n\t\t||       [0] Exit the program.                                             ||");          //Nếu người dùng nhập 0 trương trình sẽ dừng lại
        printf("\n\t\t||                                                                         ||"); 
        printf("\n\t\t=============================================================================");

        printf("\n\n\t\tSelect the program you want to use from [0 -> 3]: ");
        
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
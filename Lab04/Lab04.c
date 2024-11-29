#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int ChucNang1() {
    int Min, Max;
    int i;
    float Tong = 0, BienDem = 0, TrungBinh = 0;

    // Nhập vào Min và Max
    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tInput Min: ");
    scanf("%d", &Min);
    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tInput Max: ");
    scanf("%d", &Max);

    // Kiểm tra Min và Max có hợp lệ không
    if (Min > Max) {
        printf("\n\t\t=============================================================================");
        printf("\n\t\t\tInvalid range! Min must be less than or equal to Max.");
        printf("\n\t\t=============================================================================");
        return -1; // Trả về giá trị lỗi
    }

    // Lặp qua các số từ Min đến Max
    for (i = Min; i <= Max; i++) {
        if (i % 2 == 0) {  // Kiểm tra nếu số chia hết cho 2
            Tong += i;
            BienDem++;
        }
    }

    // Nếu có ít nhất một số chia hết cho 2, tính trung bình
    if (BienDem > 0) {
        TrungBinh = Tong / BienDem;
        printf("\n\t\t=============================================================================");
        printf("\n\t\t\tAverage of numbers divisible by 2: %.2f", TrungBinh); // Hiển thị 2 chữ số thập phân
        printf("\n\t\t=============================================================================");
    } else {
        printf("\n\t\t=============================================================================");
        printf("\n\t\t\tThere is no number divisible by 2 in the range [%d, %d]", Min, Max);
        printf("\n\t\t=============================================================================");
    }

    return 0;
}


int ChucNang2 () {
    int number;
    int i;
    int count = 0;
    //Mời người dùng nhập
    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tInput number: ");
    scanf("%d", &number);

    //Đếm số lượng của các ước số từ number cho đến number - 1. Nếu 1 số 1 chia hết cho number (number % i == 0), biến count sẽ được tăng lên ++count 
    for (i = 2; i < number; ++i) {
        if (number % i == 0) {
            count++;
        }
    }

    //In kết quả
    if (count == 0){
        printf("\n\t\t=============================================================================");
        printf("\n\t\t\t(%d) is prime number.", number);
        printf("\n\t\t=============================================================================");
    } else{  
        printf("\n\t\t=============================================================================");
        printf("\n\t\t\t(%d) is not prime.", number);
        printf("\n\t\t=============================================================================");
    }

    return 0;
}

int ChucNang3 () {
    int number, i;
    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tInput number: ");
    scanf("%d", &number); 

    //Tìm số chỉnh phương
    for(i = 1; i * i <= number; i++) {
        if(i * i == number) {  
            printf("\n\t\t=============================================================================");
            printf("\n\t\t\t(%d) is a perfect square number", number);
            printf("\n\t\t=============================================================================");
            break;  //Nếu tìm thấy số, trương trình thoát khỏi vòng lặp
        }
    }

    // Nếu không tìm thấy số chính phương
    if (i * i != number) {
        printf("\n\t\t=============================================================================");
        printf("\n\t\t\t(%d) is not a perfect square number", number);
        printf("\n\t\t=============================================================================");
    }

    return 0;  // Trả về 0 để kết thúc chương trình

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
        printf("\n\t\t||       [1] Calculate the total average.                                  ||");          //Nếu người dùng nhập 1 trương trình sẽ chạy (Tính trung bình tổng)
        printf("\n\t\t||       [2] Identify prime numbers.                                       ||");          //Nếu người dùng nhập 2 trương trình sẽ chạy (Xác định số nguyên tố)
        printf("\n\t\t||       [3] Determine the square numbern.                                 ||");          //Nếu người dùng nhập 3 trương trình sẽ chạy (Xác định số chính phương)
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
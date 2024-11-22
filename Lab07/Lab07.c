#include <stdio.h>
#include <ctype.h>  //Để sử dụng tolower()
#include <string.h>   //Để sử dụng strlen()
#include <stdlib.h>   //Để sử dụng system()

struct User {
    char username[50];
    char password[50];
};

void ChucNang1() {
    char s[100];
    int valid;

    printf("\n\t\t=============================================================================\n");
    printf("\t\t\t\tWelcome to the Vowel and Consonant Counter Program\n");
    printf("\t\t=============================================================================\n");

    //Sử dụng vòng lặp do-while để yêu cầu người dùng nhập lại nếu nhập sai
    do {
        printf("\n\t\tPlease enter a string: ");
        if (scanf("99[^\n]", s) != 1) {  
            valid = 0;
            continue;
        }
        getchar();  //Loại bỏ ký tự newline còn sót lại

        valid = 1;  // Mặc định là chuỗi hợp lệ

        //Kiểm tra nếu chuỗi chứa chữ số
        for (int i = 0; s[i] != '\0'; i++) {
            if (isdigit(s[i])) {
                valid = 0;  //Nếu có chữ số, đánh dấu là không hợp lệ
                break;
            }
        }
    
        //Nếu chuỗi không hợp lệ, thông báo lỗi và yêu cầu nhập lại
        if (!valid) {
            printf("\n\t\tError: The input contains digits. Please enter a valid string.\n");
        }

    } while (!valid);  //Nếu chuỗi không hợp lệ, tiếp tục yêu cầu nhập lại

    //Tính toán số nguyên âm và phụ âm
    int n = 0;  //Số nguyên âm
    int p = 0;  //Số phụ âm

    //Duyệt qua từng ký tự trong chuỗi
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);  //Chuyển ký tự thành chữ thường

        // Kiểm tra xem ký tự có phải nguyên âm không
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            n++;  //Tăng số lượng nguyên âm lên 1
        }
        //Kiểm tra nếu là phụ âm (chỉ tính các ký tự alphabet)
        else if (ch >= 'a' && ch <= 'z') {
            p++;  //Tăng số lượng phụ âm lên 1
        }
    }

    //In kết quả
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tThe string '%s' contains: %d vowels and %d consonants.\n", s, n, p);
    printf("\t\t=============================================================================\n");

}

void ChucNang2() {
    struct User users[] = { 
        {"Minh", "123"}, 
        {"minhnqtv00291@gmail.com", "123"},
        {"NguyenMinh", "123"}
    };

    int numUsers = sizeof(users) / sizeof(users[0]);

    char username[50];
    char password[50];
    int isLoggedIn = 0;
    int i;

    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tEnter login information:\n");
    printf("\t\t=============================================================================\n");

    //Nhập username và password
    printf("\t\tUsername: ");
    if (scanf("%49s", username) != 1) { 
        //Nếu không đọc được username, xóa bộ đệm và yêu cầu nhập lại
        while (getchar() != '\n');
        return 0;
    }
    getchar(); 

    printf("\t\tPassword: ");
    if (scanf("%49s", password) != 1) {  //Đọc password từ người dùng
        //Nếu không đọc được password, xóa bộ đệm và yêu cầu nhập lại
        while (getchar() != '\n');
        return 0;
    }
    getchar();

    for (i = 0; i < numUsers; i++) {
        //So sánh username và password
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
            isLoggedIn = 1;  //Nếu tìm thấy người dùng hợp lệ, đặt trạng thái là đã đăng nhập
            break;
        }
    }

    //Kiểm tra kết quả đăng nhập
    printf("\n\t\t=============================================================================\n");
    if (isLoggedIn) {
        printf("\t\t\tYou have << successfully >> logged in.\n");
    } else {
        printf("\t\t\tYou have << failed >> to log in.\n");
    }
    printf("\t\t=============================================================================\n");

}
void ChucNang3() {
    char s[5][20];  //Tạo mảng chứa 5 chuỗi
    int i, j;
    char temp[20];  //Biến tạm để hoán vị chuỗi

    //Nhập 5 chuỗi từ bàn phím
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tInput 5 array:\n");
    printf("\t\t=============================================================================\n");
    for (i = 0; i < 5; i++) {
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

    //Xuất các chuỗi đã sắp xếp
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tString list after sorting:\n");
    printf("\t\t=============================================================================\n");
    for (i = 0; i < 5; i++) {
        printf("\t\t%s\n", s[i]);
    }
    printf("\n\t\t=============================================================================\n");

}

int main() {
    int select;

    do {
        printf("\n\n\n");
        printf("\n\t\t==============================NguyenQuangMinh.exe============================");
        printf("\n\t\t||                                                                         ||"); 
        printf("\n\t\t||                 ! PLEASE ENTER THE PROGRAM YOU WANT TO USE !            ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [1] Program to count vowels and consonants of a string.           ||");          
        printf("\n\t\t||       [2] Account import program.                                       ||");          
        printf("\n\t\t||       [3] Sort by alphabetical order.                                   ||");          
        printf("\n\t\t||                                                                         ||"); 
        printf("\n\t\t||       [0] Exit the program.                                             ||");          
        printf("\n\t\t=============================================================================");

        printf("\n\n\t\tSelect the program you want to use from [0 -> 3]: ");
        
        if (scanf("%d", &select) != 1) {  
            while (getchar() != '\n');
            system("cls");
            printf("\n\n\t\t\t\t\t\t!! Incorrect entry please re-enter !!");
            continue;
        }
        getchar();

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

    return 0;
}
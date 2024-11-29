#include <stdio.h>
#include <ctype.h>  //Để sử dụng tolower()
#include <string.h> //Để sử dụng strlen

int main() {
    char s[100];
    int valid;  //Biến để kiểm tra tính hợp lệ của chuỗi

    //In một đường kẻ đẹp trước khi bắt đầu
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\t\tWelcome to the Vowel and Consonant Counter Program\n");
    printf("\t\t=============================================================================\n");

    //Sử dụng vòng lặp do-while để yêu cầu người dùng nhập lại nếu nhập sai
    do {
        printf("\n\t\tPlease enter a string: ");
        fgets(s, sizeof(s), stdin);  //Đọc chuỗi từ người dùng

        //Loại bỏ ký tự newline '\n' nếu có
        size_t len = strlen(s);
        if (s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }

        valid = 1;  //Mặc định là chuỗi hợp lệ

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

        //Kiểm tra xem ký tự có phải nguyên âm không
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

    return 0;
}

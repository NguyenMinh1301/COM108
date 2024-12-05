#include <stdio.h>
#include <string.h>

struct User {
    char username[50];
    char password[50];
};

int main () {
    struct User users[] = { 
        {"Minh", "123"}, 
        {"minhnqtv00291@gmail.com", "123"},
        {"NguyenMinh", "123"},
        {"Admin","123"}
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
        return;
    }
    getchar(); 

    printf("\t\tPassword: ");
    if (scanf("%49s", password) != 1) {  //Đọc password từ người dùng
        //Nếu không đọc được password, xóa bộ đệm và yêu cầu nhập lại
        while (getchar() != '\n');
        return;
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

    return 0; 
}

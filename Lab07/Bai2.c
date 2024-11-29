#include <stdio.h>
#include <string.h>

struct User {
    char username[50];
    char password[50];
};

int main () {
    //Lưu trữ mảng người dùng đã đăng ký
    struct User users[] = { //Mảng users (struct User) chứa 3 đối tượng người dùng với username và password được định nghĩa sẵn
        {"Minh", "123"}, 
        {"minhnqtv00291@gmail.com", "123"},
        {"NguyenMinh", "123"}
    };

    //Tính số lượng người dùng để có thể biết được có bao nhiêu người để kiểm tra thông tin người dùng
    int numUsers = sizeof(users) / sizeof(users[0]); // Tính số lượng người dùng trong mảng (phần struct User)

    char username[50];  //Lưu username (50 ký tự cho phép)
    char password[50];  //Lưu password (50 ký tự cho phép)

    int isLoggedIn = 0;  //Kiểm tra trạng thái đăng nhập
    int i;

    //In ra thông báo bắt đầu
    printf("\n\t\t=============================================================================\n");
    printf("\t\t\tEnter login information:\n");
    printf("\t\t=============================================================================\n");

    //Nhập username và password
    printf("\t\tUsername: ");
    scanf("%s", username);  

    printf("\t\tPassword: ");
    scanf("%s", password);  

    for (i = 0; i < numUsers; i++) {
        //So sánh username và password
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) { //strcmp trả về 0 nếu hai chuỗi bằng nhau
            isLoggedIn = 1;  //Nếu tìm thấy người dùng hợp lệ, đặt trạng thái là đã đăng nhập
            break; //Kết thúc vòng lặp khi tìm thấy
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

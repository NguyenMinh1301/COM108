#include <stdio.h>
#define PI 3.14159 //Định nghĩa số pi (ở đây "PI" = 3.14159)

int main() {
    float R, P, S;
    char Y_or_N;

    do {
        //Nhập bán kính
        printf("Enter the radius : ");
        scanf("%f", &R);

        if (R > 0) {
            //Tính diện tích | chu vi hình tròn
            S = PI * R * R;
            P = PI * 2 * R;
            printf("--------------------------------------------------------\n");
            printf("The area of the circle is %g is: %.3f\n", R, S);
            printf("The circumference of a circle is %g is: %.3f\n", R, P);
            printf("Nguyen Quang Minh TV00291\n");
            printf("--------------------------------------------------------");
            
        } 
        
        else {
            printf("--------------------------------------------------------\n");
            printf("Radius must be a number and greater than 0\n");
            printf("--------------------------------------------------------");
        }

        //Hỏi người dùng có muốn tiếp tục hay không
        printf("\nDo you want to continue? [Y/N]? ");
        scanf(" %c", &Y_or_N);  

    } 
    
    while (Y_or_N == 'Y' || Y_or_N == 'y');  //Tiếp tục nếu nhập "Y" hoặc "y"

    return 0;
}

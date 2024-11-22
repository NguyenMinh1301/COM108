#include <stdio.h>

int main () {

    int Length, Width, S, P;
    char Y_or_N;

    do {
        //Đợi người dùng nhập chiều dài | rộng
        printf("In put length: ");
        scanf("%d", &Length);

        printf("In put width: ");
        scanf("%d", &Width);
        
        if(Length > 0 && Width > 0) {
            //Tính dài | rộng
            P = (Length + Width) * 2;
            S = Length * Width;
          
            //In kết quả
            printf("--------------------------------\n");
            printf("Perimeter is: (%d)\n", P);
            printf("Acreage is : (%d)\n", S);
            printf("Nguyen Quang Minh TV00291\n");
            printf("--------------------------------\n");
        } else {
            printf("--------------------------------\n");        
            printf("In put must bigger than 0!\n");
            printf("--------------------------------"); 
        }
        
        //Hỏi người dùng có muốn tiếp tục hay không
        printf("Do you want to continue? [Y/N]? ");
        scanf(" %c", &Y_or_N);       

    }

    //Tiếp tục nếu người dùng bấm "Y" hoặc "y"
    while (Y_or_N == 'Y' || Y_or_N == 'y'); 

    return 0;
}
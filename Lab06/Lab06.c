#include <stdio.h>
#include <stdlib.h>

//Hàm tính trung bình của các số chia hết cho 3
void ChucNang1() {
    int n;

    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tEnter the number of elements in the array: ");
    scanf("%d", &n);

    //Kiểm tra điều kiện hợp lệ cho n
    if (n <= 0) {
        printf("\n\t\t\tInvalid number of elements. Please enter a positive integer.\n");
        return;
    }

    int arr[n];
    int i;
    for(i = 0; i < n; i++) {
        printf("\n\t\t\tPlease enter a value for the array: ");
        scanf("%d", &arr[i]);
    }

    float sum = 0;
    float average;
    int count = 0;

    //Tính trung bình tổng của những số chia hết cho 3
    for(i = 0; i < n; i++) {
        if(arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        } 
    }

    if (count == 0) {
        printf("\n\t\t=============================================================================");
        printf("\n\t\t\tThere are no numbers divisible by 3.\n");
        printf("\n\t\t=============================================================================");
    } else {
        average = sum / count;
        printf("\n\t\t=============================================================================");
        printf("\n\t\t\tThe average of numbers divisible by 3 is: %.2f\n", average);
        printf("\n\t\t=============================================================================");
    }
}

//Hàm tìm giá trị lớn nhất trong mảng
void ChucNang2 () {
    int n;

    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tEnter the number of array elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n\t\t\tInvalid number of elements. Please enter a positive integer.\n");
        return;
    }

    int mang[n];  
    int i;
    
    //Nhập dữ liệu vào mảng
    for (i = 0; i < n; i++) {
        printf("\n\t\t\tPlease enter data for the array: ");
        scanf("%d", &mang[i]);
    }
    
    int max = mang[0];
    //Tìm giá trị lớn nhất trong mảng
    for (i = 1; i < n; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
    }

    //In ra giá trị lớn nhất
    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tThe largest value is: %d\n", max);
    printf("\n\t\t=============================================================================");
}

//Hàm sắp xếp mảng theo thứ tự giảm dần
void ChucNang3 () {
    int n;

    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tEnter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n\t\t\tInvalid number of elements. Please enter a positive integer.\n");
        return;
    }

    int arr[n];  
    int i, j;

    //Nhập dữ liệu vào mảng
    for(i = 0; i < n; i++) {
        printf("\n\t\t=============================================================================");
        printf("\n\t\t\tPlease enter a value for the array: ");
        scanf("%d", &arr[i]);     
    }

    //Sắp xếp mảng theo thứ tự giảm dần (Bubble sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //In ra mảng sau khi sắp xếp
    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tArray after sorting:\n");
    for(i = 0; i < n; i++) {
        printf("\n\t\t\tarr[%d] = %d\n", i, arr[i]);
    }
}

//Hàm xử lý mảng 2 chiều
void ChucNang4 () {
    int column1, column2;

    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tEnter the value of Column1: ");
    scanf("%d", &column1);
    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tEnter the value of Column2: ");
    scanf("%d", &column2);

    if (column1 <= 0 || column2 <= 0) {
        printf("\n\t\t\tInvalid dimensions. Please enter positive integers for rows and columns.\n");
        return;
    }

    int arr[column1][column2];
    int i, j;
    
    //Nhập dữ liệu vào ma trận 2 chiều
    for (i = 0; i < column1; i++) {
        for (j = 0; j < column2; j++) {
            printf("\n\t\t\tEnter value into matrix [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    //In ra ma trận 2 chiều
    printf("\n\t\t=============================================================================");
    printf("\n\t\t\tThe matrix you entered is:\n");
    for (i = 0; i < column1; i++) {
        for (j = 0; j < column2; j++) {
            printf("\n\t\t\t%d ", arr[i][j]);
        }
        printf("\n\t\t\t\n");
    }
}

int main () {
    system("cls");
    int select;

    do {
        printf("\n\n\n");
        printf("\n\t\t==============================NguyenQuangMinh.exe============================");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||                 ! PLEASE ENTER THE PROGRAM YOU WANT TO USE !            ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [1] Calculate the average of the numbers divisible by 3.          ||");
        printf("\n\t\t||       [2] Find the maximum value and the minimum value.                 ||");
        printf("\n\t\t||       [3] Sort the array in descending order.                           ||");
        printf("\n\t\t||       [4] Calculate the square of molecules in a 2-dimensional array    ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [0] Exit the program.                                             ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t=============================================================================");

        printf("\n\n\t\tSelect the program you want to use from [0 -> 4]: ");
        
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
            case 4:
                system("cls");
                ChucNang4();
                break;
            case 0:
                system("cls");
                printf("\n\n\n\n\n\n\n\t\t\t\t\t\t!! Thanks. See you soon. !!\n\n\n\n\n\n\n ");  
                break;
            default:
                system("cls");
                printf("\n\n\t\t\t\t\t\t!! Incorrect entry, please re-enter !!");
                break;
        }
    } while (select != 0);

    return 0;
}

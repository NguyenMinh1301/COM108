#include <stdio.h>

int main() {

    int n;

    //Mời người dùng nhập
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  
    int i, j; 

    //Nhập dữ liệu vào mảng
    for(i = 0; i < n; i++) {
        printf("Please enter a value for the array: ");
        scanf("%d", &arr[i]);     
    }

    //Điều kiện và thuật toán sắp xếp Bubble sort 
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //In ra mảng sau khi xắp xếp
    printf("Array after sorting:\n");
    for(i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
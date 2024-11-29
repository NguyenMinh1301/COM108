#include <stdio.h>

int main () {

    //Mời người dùng nhập
    int n, m;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Enter the value of M: ");
    scanf("%d", &m);

    int arr[n][m];
    int i, j;
    
    //Trương trình có 2 cột "N", "M" mời người dùng nhập giá trị vào 2 cột và print giá trị theo giá trị của cột
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter value into matrix [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

#include <stdio.h>

int main() {
	int n;

	//Mời người dùng nhập
	printf("Enter the number of array elements: ");
	scanf("%d", &n); 
	
	int mang[n];  
	int i;
	
	//Nhập dữ liệu vào mảng
	for (i = 0; i < n; i++) {
		printf("Please enter data for the array: ");
		scanf("%d", &mang[i]);  
	}
	
	int max;
	max = mang[0];  

	//Tìm giá trị lớn nhất trong mảng
	for (i = 0; i < n; i++) {
		if (mang[i] > max) {  //Nếu phần tử hiện tại lớn hơn giá trị max
			max = mang[i];  //Cập nhật giá trị max
		}
	}

	//In ra giá trị lớn nhất
	printf("The largest value is: %d\n", max);  
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int ChucNang1() {
	printf("Ban da chon chuc nang 1");
}
int ChucNang2() {
	printf("Ban da chon chuc nang 2");
}
int ChucNang3() {
	printf("Ban da chon chuc nang 3");
}
int ChucNang4() {
	printf("Ban da chon chuc nang 4");
}
int ChucNang5() {
	printf("Ban da chon chuc nang 5");
}
int ChucNang6() {
	printf("Ban da chon chuc nang 6");
}
int ChucNang7() {
	printf("Ban da chon chuc nang 7");
}
int ChucNang8() {
	printf("Ban da chon chuc nang 8");
}
int ChucNang9() {
	printf("Ban da chon chuc nang 9");
}
int ChucNang10() {
	printf("Hen gap lai Nguyen Quang Minh");
}
int main(){
	system("cls");
	int chon;
	do{
	
		printf("\n++-------------------------------------------------++");
		printf("\n||              Vui long chon 1 chuc nang          ||");						   
		printf("\n||	Chuc nang 1: 				   ||");															   
		printf("\n||	Chuc nang 2: 				   ||");															   
		printf("\n||	Chuc nang 3: 				   ||");
		printf("\n||	Chuc nang 4: 				   ||");
		printf("\n||	Chuc nang 5: 				   ||");
		printf("\n||	Chuc nang 6: 				   ||");
		printf("\n||	Chuc nang 7: 				   ||");
		printf("\n||	Chuc nang 8: 				   ||");
		printf("\n||	Chuc nang 9: 				   ||");
		printf("\n||	Chuc nang 10: thoat			   ||");
		printf("\n++-------------------------------------------------++\n");
		printf("	Chon chuc nang tu [0-10]:");
		scanf("%d", &chon );
		
        switch (chon) {
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
            case 5:
            	system("cls");
                ChucNang5();
                break;
            case 6:
            	system("cls");
                ChucNang6();
                break;
            case 7:
            	system("cls");
                ChucNang7();
                break;
            case 8:
            	system("cls");
                ChucNang8();
                break;
            case 9:
            	system("cls");
                ChucNang9();
                break;
            case 10:
            	system("cls");
                ChucNang10();
                break;
            default:
                system("cls");
                printf("\n Nhap sai vui long nhap lai !!");
                break;
            }

		} while (chon != 10);
}

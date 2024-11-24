#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void ChucNang1();           //Kiểm tra số nguyên
void ChucNang2();           //Tìm ước số chung và bội số chung
void ChucNang3();           //Tính tiền cho quán Karaoke
void ChucNang4();           //Tính tiền điện
void ChucNang5();           //Đổi tiền tệ
void ChucNang6();           //Tính lãi xuất vay ngân hàng trả góp
void ChucNang7();           //Vay Tiền mua xe
void ChucNang8();           //Sắp xếp thông tin sinh viên
void ChucNang9();           //FPOLY - LOTT
void ChucNang10();          //Tính phân số
void PrintLoanDetails();    //Hàm in chi tiết tiền nợ của 2 hàm ChucNang6() và ChucNang7()
void GioiThieu();           //Giới thiệu trương trình
void Menu();                //Menu lựa chon trương trình sử dụng

int main () {
    Menu();
    return 0;
}

void PrintLoanDetails(double Loan, double LoanTime, double InterestRate, double AdvancePayment) {
    double Total = 0, PrincipalPayable, InterestPayable, AmountPayable, RemainingAmount;
    int i;

    // Số tiền vay sau khi trừ trả trước
    Loan -= AdvancePayment;
    PrincipalPayable = Loan / LoanTime; // Gốc phải trả hàng tháng

    // In bảng tiêu đề
    printf("\n%-10s%-20s%-20s%-20s%-20s\n", "Month", "Interest Payable", "Principal Payable", "Amount Payable", "Remaining Amount");
    printf("-----------------------------------------------------------------------------------------\n");

    for (i = 1; i <= LoanTime; i++) {
        InterestPayable = Loan * (InterestRate / 12); // Lãi suất hàng tháng
        AmountPayable = InterestPayable + PrincipalPayable;
        RemainingAmount = Loan - PrincipalPayable;

        // In thông tin chi tiết từng tháng
        printf("%-10d%-20.2lf%-20.2lf%-20.2lf%-20.2lf\n", i, InterestPayable, PrincipalPayable, AmountPayable, RemainingAmount);

        Loan -= PrincipalPayable; // Cập nhật số dư nợ
        Total += AmountPayable;   // Cộng tổng số tiền đã trả
    }

    // Tổng kết
    printf("\nTotal amount payable: %.2lf VND\n", Total);
}

void ChucNang1() {
    float x;  
    int i, count = 0;

    printf("Input number: ");
    scanf("%f", &x); 

    //Kiểm tra xem x có phải là số nguyên không
    if (x == (int)x) {
        printf("(%.2f) is Integer number\n", x);
    } else {
        printf("(%.2f) is not Integer number\n", x);
    }

    //Kiểm tra số nguyên tố
    for (i = 2; i <= sqrt(x); ++i) {
        if ((int)x % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0 && x > 1) {
        printf("(%.2f) is Prime number\n", x);
    } else {
        printf("(%.2f) is not Prime number\n", x);
    }

    //Kiểm tra số chính phương
    for (i = 1; i * i <= x; i++) {
        if (i * i == x) {
            printf("(%.2f) is a perfect square number\n", x);
            break;
        }
    }
    
    if (i * i > x) {
        printf("(%.2f) is not a perfect square number\n", x);
    }
}

void ChucNang2() {
    int a, b, bcnn, ucln, c, d;
    
    printf("Input number A: ");
    scanf("%d", &a);
    printf("Input number B:");
    scanf("%d", &b);

    c = a;
    d = b;

    //Nếu a == 0 thì ucln = b
    if( a == 0){
        ucln = b;
        bcnn = 0;
	} else if(b == 0){ //Nếu b == 0 thì ucln = a
		ucln = a;
		bcnn = 0;
	} else if( a == b){ //Nếu a == b thì ucln = bcnn = a
		ucln = a;
		bcnn = a;
	} else{
		while( a != b){ //Nếu a khác b
			if( a > b){ // a > n thì a = a - b
				a -= b;
			}else{
				b -= a; // a < b hoặc a = b thì b = b - a
			}
		}
	}

	ucln = a;
	bcnn = c * d / a;
    //In ra kết quả
	printf("The greatest common divisor of (%d) and (%d) is: %d\n", c, d, ucln);  
	printf("The greatest common multiple of (%d) and (%d) is: %d\n", c, d, bcnn);

}

void ChucNang3() {
    int StartTime, EndTime, UseTime, Valid = 0;
    float Total = 0, BaseCost = 0, Discount = 0;

    do {
        //Nhập giờ bắt đầu và giờ kết thúc
        printf("Hello this is !! FPOLY Karaoke !! store we open at 12:AM and close at 24:PM\n");
        printf("Please enter the number of hours you want to use!\n");
        printf("Enter time start: ");
        scanf("%d", &StartTime);
        printf("Enter time end: ");
        scanf("%d", &EndTime);

        //Kiểm tra giờ bắt đầu và giờ kết thúc có hợp lệ hay không
        if (StartTime < 12 || StartTime > 23 || EndTime < 12 || EndTime > 24 || EndTime <= StartTime) {
            printf("Enter error. Start time must be less than end time and be within (12 - 24)\n");
            Valid = 1; 
        } else {
            Valid = 0; 
        }
    } while (Valid != 0);

    //Tính thời gian sử dụng
    UseTime = EndTime - StartTime;

    // Tính thời gian sử dụng
    UseTime = EndTime - StartTime;

    // Tính chi phí cơ bản
    if (UseTime <= 3) {
        BaseCost = UseTime * 150000;
    } else {
        BaseCost = 3 * 150000 + (UseTime - 3) * 150000 * 0.7;
    }

    // Áp dụng giảm giá nếu giờ bắt đầu trong khoảng 14-17
    if (StartTime >= 14 && StartTime <= 17) {
        Discount = BaseCost * 0.1; // Giảm thêm 10%
    }

    // Tổng số tiền
    Total = BaseCost - Discount;
    //In tổng tiền
    printf("\n--- Invoice Details ---\n");
    printf("Start Time: %d:00\n", StartTime);
    printf("End Time: %d:00\n", EndTime);
    printf("Usage Time: %d hour(s)\n", UseTime);
    printf("Base Cost: %.2f VND\n", BaseCost);

    if (Discount > 0) {
        printf("Discount Applied (10%%): -%.2f VND\n", Discount);
    }
    printf("Total Bill: %.2f VND\n", Total);
}

void ChucNang4() {
    float kW, Total = 0; 

    printf("Please enter the amount of electricity consumed (in kW): ");
    
    //Kiểm tra. Nếu không phải số thì trương trình thoát
    if (scanf("%f", &kW) != 1) {
        printf("Invalid input, please enter a valid value.\n");
        return;
    }

    //Kiểm tra kW nếu bé hơn 0 thì trương trình thoát
    if (kW <= 0) {
        printf("Invalid value.\n");
        return;  
    }

    //Tính tiền điện theo từng mức tiêu thụ
    if (kW <= 50) {
        Total = kW * 1.678;
    } else if (kW > 50 && kW <= 100) {
        Total = kW * 1.734;
    } else if (kW > 100 && kW <= 200) {
        Total = kW * 2.014;
    } else if (kW > 200 && kW <= 300) {
        Total = kW * 2.536;
    } else if (kW > 300 && kW <= 400) {
        Total = kW * 2.834;
    } else if (kW > 400) {
        Total = kW * 2.927;
    }

    //In kết quả tổng tiền
    printf("Your total bill is: %.2f thousand VND\n", Total);
}

void ChucNang5() {
    int Amount, Count[9] = {0}, Bills[] = {500, 200, 100, 50, 20, 10, 5, 2, 1}, i;

    //Mời người dùng nhập số tiền muốn đổi
    printf("Enter the amount to exchange (positive integer): ");
        if (scanf("%d", &Amount) != 1 || Amount <= 0) {
            printf("Invalid input. Please enter a positive integer.\n");
            return;
        }

    //Lặp qua từng mệnh giá trong mảng Bills để tính số lượng hóa đơn cần thiết
    for (i = 0; i < 9; i++) {
        //Tính số lượng hóa đơn của mệnh giá hiện tại có thể dùng
        Count[i] = Amount / Bills[i];
        //Trừ đi tổng giá trị của các hóa đơn đã sử dụng khỏi số tiền còn lại
        Amount -= Count[i] * Bills[i];

        //Nếu có ít nhất một hóa đơn của mệnh giá này được sử dụng, in ra kết quả
        if (Count[i] > 0) {
            printf("%d bills %d\n", Count[i], Bills[i]);
        }
    }    
}

void ChucNang6() {
    double Loan = 0, LoanTime = 0, Interest = 0;

    // Nhập số tiền vay
    printf("Enter the loan amount: ");
    if (scanf("%lf", &Loan) != 1 || Loan <= 0) {
        printf("Invalid loan amount.\n");
        return;
    }

    // Nhập thời gian vay
    printf("Enter loan duration (1 to 60 months): ");
    if (scanf("%lf", &LoanTime) != 1 || LoanTime < 1 || LoanTime > 60) {
        printf("Invalid loan duration. Must be between 1 and 60 months.\n");
        return;
    }

    // Nhập lãi suất
    printf("Enter annual interest rate (e.g., 5 for 5%%): ");
    if (scanf("%lf", &Interest) != 1 || Interest <= 0) {
        printf("Invalid interest rate.\n");
        return;
    }

    // In bảng chi tiết khoản vay
    printf("\nLoan calculation without advance payment:\n");
    PrintLoanDetails(Loan, LoanTime, Interest, 0);
}

void ChucNang7() {
    double Loan = 0, LoanTime = 0, Interest = 0, PrepaymentPercentage = 0, AdvancePayment = 0;

    // Nhập số tiền vay
    printf("Enter the loan amount: ");
    if (scanf("%lf", &Loan) != 1 || Loan <= 0) {
        printf("Invalid loan amount.\n");
        return;
    }

    // Nhập thời gian vay
    printf("Enter loan duration (1 to 60 months): ");
    if (scanf("%lf", &LoanTime) != 1 || LoanTime < 1 || LoanTime > 60) {
        printf("Invalid loan duration. Must be between 1 and 60 months.\n");
        return;
    }

    // Nhập lãi suất
    printf("Enter annual interest rate (e.g., 5 for 5%%): ");
    if (scanf("%lf", &Interest) != 1 || Interest <= 0) {
        printf("Invalid interest rate.\n");
        return;
    }

    // Nhập phần trăm trả trước
    printf("Enter prepayment percentage (e.g., 7.2 for 7.2%%): ");
    if (scanf("%lf", &PrepaymentPercentage) != 1 || PrepaymentPercentage < 0 || PrepaymentPercentage > 100) {
        printf("Invalid prepayment percentage. Must be between 0 and 100.\n");
        return;
    }

    // Tính tiền trả trước
    AdvancePayment = Loan * (PrepaymentPercentage / 100);
    printf("\nAdvance payment: %.2lf VND\n", AdvancePayment);

    // In bảng chi tiết khoản vay
    printf("\nLoan calculation with advance payment:\n");
    PrintLoanDetails(Loan, LoanTime, Interest, AdvancePayment);

}

void ChucNang8() {
    float Score;

    //Nhập điểm
    printf("Please input the score: ");
    if (scanf("%f", &Score) != 1) { //Kiểm tra đầu vào có phải số hay không
        printf("Invalid input. Please enter a valid number.\n");
        return;
    } 

    printf("\n\nScore Range | Rank\n");
    printf("9.0 - 10.0  | EXCELLENT!!\n");
    printf("8.0 - 8.9   | GREAT!\n");
    printf("6.5 - 7.9   | GOOD\n");
    printf("5.0 - 6.4   | MIDDLE\n");
    printf("3.5 - 4.9   | WEAK\n");
    printf("0.0 - 3.4   | LEAST\n");

    //In kết quả
    if (Score >= 9.0 && Score <= 10.0) {
        printf("Your rank is: EXCELLENT!!\n");
    } else if (Score >= 8.0 && Score < 9.0) {
        printf("Your rank is: GREAT!\n");
    } else if (Score >= 6.5 && Score < 8.0) {
        printf("Your rank is: GOOD\n");
    } else if (Score >= 5.0 && Score < 6.5) {
        printf("Your rank is: MIDDLE\n");
    } else if (Score >= 3.5 && Score < 5.0) {
        printf("Your rank is: WEAK\n");
    } else if (Score >= 0.0 && Score < 3.5) {
        printf("Your rank is: LEAST\n");
    } else {
        printf("Invalid score. Please enter a score between 0 and 10.\n");
    }

}

void ChucNang9() {
    int Number1, Number2, RandomNumber1, RandomNumber2, Match = 0, Valid = 0;
    float Probability;
    char PlayAgain;

    do {
        //Tạo một bộ số ngẫu nhiên mỗi lần chạy chương trình
        srand(time(NULL));

        //Sinh ngẫu nhiên 2 số từ 01 đến 15
        RandomNumber1 = rand() % 15 + 1;
        RandomNumber2 = rand() % 15 + 1;

        //Kiểm tra 2 số vừa tạo có trùng nhau không
        while (RandomNumber1 == RandomNumber2) {
            RandomNumber2 = rand() % 15 + 1;
        }

        //Mời người dùng nhập hai số bất kỳ
        do {
            printf("\nPlease enter two numbers between 1 and 15.\n");

            //Nhập số thứ nhất
            printf("Input number 1: ");
            if (scanf("%d", &Number1) != 1 || Number1 < 1 || Number1 > 15) {
                printf("InValid input. Please enter a number between 1 and 15.\n");
                while (getchar() != '\n'); //Xóa ký tự thừa
                Valid = 1; //Đánh dấu nếu nhập không hợp lệ
                continue;
            }

            //Nhập số thứ hai
            printf("Input number 2: ");
            if (scanf("%d", &Number2) != 1 || Number2 < 1 || Number2 > 15) {
                printf("InValid input. Please enter a number between 1 and 15.\n");
                while (getchar() != '\n'); // Xóa ký tự thừa
                Valid = 1; //Đánh dấu nếu nhập không hợp lệ
            } else {
                Valid = 0; //Đánh dấu nhập hợp lệ
            }
        } while (Valid == 1);

        //Kiểm tra số khớp
        if (Number1 == RandomNumber1 || Number1 == RandomNumber2) {
            Match++;
        }
        if (Number2 == RandomNumber1 || Number2 == RandomNumber2) {
            Match++;
        }

        //In ra số bạn nhập và số trương trình tạo ra
        printf("\nYour numbers: %d and %d", Number1, Number2);
        printf("\nRandom numbers: %d and %d", RandomNumber1, RandomNumber2);

        //In ra chúc mừng nếu đúng điều kiện
        if (Match == 2) {
            printf("\nCongratulations! You won the first prize!");
        } else if (Match == 1) {
            printf("\nCongratulations! You won the second prize!");
        } else {
            printf("\nBetter luck next time!");
        }

        Probability = (float)Match / 2 * 100;
        printf("\nYou matched %d number(s). Your winning probability is %.2f%%.\n", Match, Probability);

        // Hỏi người chơi có muốn chơi lại không
        printf("Do you want to play again? (Y/N): ");
        while (getchar() != '\n'); // Xóa ký tự thừa
        scanf("%c", &PlayAgain);

    } while (PlayAgain == 'Y' || PlayAgain == 'y');

    printf("\nThank you for playing! See you next time.\n");

}

void ChucNang10() {
    float tuX, mauX , tuY, mauY, tuA, mauA, tuB, mauB, tuC, mauC, tuD, mauD;

    //Mời người dùng nhập
    printf("\nEnter 2 fractions");
    printf("\nFor example\n");
    printf("\n12");
    printf("\n---");
    printf("\n42\n");
    printf("\nFractions 1:\n");
    scanf("%f", &tuX);
    printf("---\n");
    scanf("\n%f", &mauX); 
    printf("\nFractions 2:\n");
    scanf("%f", &tuY);
    printf("---\n");
    scanf("\n%f", &mauY);

    //Tổng
    tuA = (tuX*mauY)+(mauX*tuY);
	mauA = mauX*mauY;

    //Hiệu
	tuB = (tuX*mauY)-(mauX*tuY);
	mauB = mauX*mauY;

    //Thương
	tuC = tuX*tuY;
	mauC = mauX*mauY;

    //Tích
	tuD = tuX*mauY;
	mauD = mauX*tuY;

    //In ra kết quả
    printf("\nAnswer\n");
    printf("-----------------------------------------------------------");
    printf("\nTotal\t\tEffect\t\tMultiplication\t\tDivision");
    printf("\n%g\t\t%g\t\t%g\t\t\t%g", tuA, tuB, tuC, tuD);
    printf("\n---\t\t---\t\t---\t\t\t---");
    printf("\n%g\t\t%g\t\t%g\t\t\t%g", mauA, mauB, mauC, mauD);
}

void GioiThieu() {
    int select;

    //In ra giao diện giới thiệu
    printf("\n\n\n");
    printf("\n\t\t=============================NguyenQuangMinh.exe=============================");
    printf("\n\t\t||                                                                         ||");
    printf("\n\t\t||                 This is a program coded in C language.                  ||");
    printf("\n\t\t||            The creator of this program is Nguyen Quang Minh             ||");
    printf("\n\t\t||            studying at FPT Polytechnic Binh Duong, Vietnam.             ||");
    printf("\n\t\t||                                                                         ||");
    printf("\n\t\t||                 The program has 10 features as follows:                 ||");
    printf("\n\t\t||                                                                         ||");
    printf("\n\t\t||       [1] Check integer.                                                ||");
    printf("\n\t\t||       [2] Find common factors and common multiples.                     ||");
    printf("\n\t\t||       [3] Karaoke hour billing.                                         ||");
    printf("\n\t\t||       [4] Calculate electricity bill.                                   ||");
    printf("\n\t\t||       [5] Currency conversion.                                          ||");
    printf("\n\t\t||       [6] Calculate interest rate of installment bank loan.             ||");
    printf("\n\t\t||       [7] Car loan.                                                     ||");
    printf("\n\t\t||       [8] Organize employee information.                                ||");
    printf("\n\t\t||       [9] FPOLY - LOTT.                                                 ||");
    printf("\n\t\t||      [10] Calculate fractions.                                          ||");
    printf("\n\t\t||                                                                         ||");
    printf("\n\t\t||   If you have any questions please contact me at the following email:   ||");
    printf("\n\t\t||                        nguyenminhjqka@gmail.com                         ||");
    printf("\n\t\t||                        minhnqtv00291@gmail.com                          ||");
    printf("\n\t\t||                                                                         ||");
    printf("\n\t\t||       [1] to continue using.                                            ||");
    printf("\n\t\t||       [0] to exit the program.                                          ||");
    printf("\n\t\t||                                                                         ||");
    printf("\n\t\t||                 !! THANK YOU FOR USING THE PROGRAM !!                   ||");
    printf("\n\t\t||                                                                         ||");
    printf("\n\t\t=============================================================================");

    //Kiểm tra đầu vào người dùng với một vòng lặp để đảm bảo người dùng nhập giá trị hợp lệ.
    while (1) {
        printf("\n\t\tSelect an option: ");
        if (scanf("%d", &select) != 1 || (select != 0 && select != 1)) {
            printf("\n\n\t\tInvalid input! Please enter 0 to exit or 1 to continue.\n\n");
        } else {
            break; //Thoát khỏi vòng lặp khi người dùng nhập đúng.
        }
    }

    switch (select) {
        case 1: system("cls"); Menu(); break; //Goi lại hàm Menu()   
        case 0: system("cls"); printf("\n\n\n\n\n\n\n\t\t\t\t\t\t!! Thanks. See you soon. !!\n\n\n\n\n\n\n "); exit(0);
        }  
}

void Menu () {
    system("cls");
    int select;
    
    do {
        //In ra màn hình để người dùng chọn trương trình (nhập số từ 0 - 11)
        printf("\n\n\n");
        printf("\n\t\t=============================NguyenQuangMinh.exe=============================");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||              ! PLEASE ENTER THE PROGRAM YOU WANT TO USE !               ||");
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [1] Check integer.                                                ||");          //Nếu người dùng nhập 1 trương trình sẽ chạy (Kiểm tra số nguyên) 
        printf("\n\t\t||       [2] Find common factors and common multiples.                     ||");          //Nếu người dùng nhập 2 trương trình sẽ chạy (Tìm ước số chung và bội số chung) 
        printf("\n\t\t||       [3] Karaoke hour billing.                                         ||");          //Nếu người dùng nhập 3 trương trình sẽ chạy (Tính tiền cho quán karaoke)
        printf("\n\t\t||       [4] Calculate electricity bill.                                   ||");          //Nếu người dùng nhập 4 trương trình sẽ chạy (Tính tiền điện)
        printf("\n\t\t||       [5] Currency conversion.                                          ||");          //Nếu người dùng nhập 5 trương trình sẽ chạy (Quy đổi tiền tệ)
        printf("\n\t\t||       [6] Calculate interest rate of installment bank loan.             ||");          //Nếu người dùng nhập 6 trương trình sẽ chạy (Tính lãi xuất vay ngân hàng trả góp)
        printf("\n\t\t||       [7] Car loan.                                                     ||");          //Nếu người dùng nhập 7 trương trình sẽ chạy (Vay tiền mua xe)
        printf("\n\t\t||       [8] Organize employee information.                                ||");          //Nếu người dùng nhập 8 trương trình sẽ chạy (Sắp xếp thông tin nhân viên)
        printf("\n\t\t||       [9] FPOLY - LOTT.                                                 ||");          //Nếu người dùng nhập 9 trương trình sẽ chạy (FPOLY - LOTT)
        printf("\n\t\t||      [10] Calculate fractions.                                          ||");          //Nếu người dùng nhập 10 trương trình sẽ chạy (Tính phân số)
        printf("\n\t\t||                                                                         ||"); 
        printf("\n\t\t||      [11] Present.                                                      ||");          //Nếu người dùng nhập 11 trương trình sẽ chạy (Giới thiệu trương trình)
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t||       [0] Exit the program.                                             ||");          //Nếu người dùng nhập 0 trương trình sẽ dừng lại
        printf("\n\t\t||                                                                         ||");
        printf("\n\t\t=============================================================================");

        printf("\n\n\t\tSelect the program you want to use from [0 -> 11]: ");

        if (scanf("%d", &select) != 1) {
            printf("\n\n\t\tInvalid input! Please enter a number from 0 to 11.\n");
            return;
        }
        
        switch (select) {
            case 1: system("cls"); ChucNang1(); break;
            case 2: system("cls"); ChucNang2(); break;
            case 3: system("cls"); ChucNang3(); break;
            case 4: system("cls"); ChucNang4(); break;
            case 5: system("cls"); ChucNang5(); break;
            case 6: system("cls"); ChucNang6(); break;
            case 7: system("cls"); ChucNang7(); break;
            case 8: system("cls"); ChucNang8(); break;
            case 9: system("cls"); ChucNang9(); break;
            case 10: system("cls"); ChucNang10(); break;
            case 11: system("cls"); GioiThieu(); break;
            case 0: system("cls"); printf("\n\n\n\n\n\n\n\t\t\t\t\t\t!! Thanks. See you soon. !!\n\n\n\n\n\n\n "); exit(0);
            default: system("cls"); printf("\n\n\t\t\t\t\t\t!! Incorrect entry please re-enter !!"); break;
            }
    } while (select != 0);

}
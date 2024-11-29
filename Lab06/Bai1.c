#include <stdio.h>

int main() {

    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 
    int i;
    for(i = 0; i < n; i++) {
        printf("Please enter a value for the array: ");
        scanf("%d", &arr[i]);
    }

    float sum = 0;
    float average;
    int count = 0;

    for(i = 0; i < n; i++) {
        if(arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        } 
    }

    if (count == 0) {
        printf("There are no numbers divisible by 3.\n");
    } else {
        average = sum / count;
        printf("The average of numbers divisible by 3 is: %.2f\n", average);
    }

    return 0;
}
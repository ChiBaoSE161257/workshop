#include <stdio.h>
#include <math.h>
int sumDigits(int number){
    
    int sumOfDigits = 0;
        do {
            int remainder = number % 10;
            number = number / 10;
            sumOfDigits += remainder;
        } while (number > 0);
    return sumOfDigits;
}

int main(){

    int number;
    int sum;
        // a loop to print out sum 
        do {
            printf("\nInsert number : ");scanf("%d", &number);
            if(number >= 0){
                sum = sumDigits(number);
                printf("Sum of numbers decimal digits : %d\n", sum);
            }
        } while (number >= 0);
}


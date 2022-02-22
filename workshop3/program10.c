#include <stdio.h>
#include <math.h>

void printMinMaxDigits(int number){

    int digit; 
    int minDigits, maxDigits;

    digit = number % 10; // get the first rightmost dighit
    number = number/10; // the remainder needs to proceed after
    minDigits = maxDigits = digit;
        while (number > 0){

            digit = number % 10; // get the next digit
            number = number /10;
                // update result
                if(minDigits > digit){
                    minDigits = digit;
                } 
                if (maxDigits > digit){
                    maxDigits = digit;
                }
        }

    printf("\nThe maximun digits = %d", maxDigits);
    printf("\nThe minimun digits = %d", minDigits);
}

int main(){
    
    int number;
        do {
            printf("Insert number : "); scanf("%d",&number);
            printMinMaxDigits(number);
        } while (number < 0);
}
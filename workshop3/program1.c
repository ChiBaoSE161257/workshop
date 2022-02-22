#include <stdio.h>
#include <math.h>

int prime(int number) {

    int i;
        // condition check primes
        if (number < 2) {
            return 0; // false
        } else {

            for (i = 2; i <= sqrt(number); i++) {
                if (number % i == 0){
                    return 0; //false
                    break;
                }
            } 
        return 1;
        }
}

int main(){

    int number;

        do {
            printf("Inser number : "); scanf("%d", &number);
            printf("Primes between 2 and %d:\n ", number);
        } while (number < 2);

        for (int i = 2; i <= number; i++) {
                if (prime(i) == 1) {
                    printf("%d\t", i);
                }
            }
}



#include <stdio.h>
#include <math.h>

// get greatest common divisor
int gcd (int numberA, int numberB ){
    
    while (numberA != numberB){
        if ( numberA > numberB ){
            numberA -= numberB;
        } else {
            numberB -= numberA;
        }
        return numberA;
    }
}

//get least common multiple
int Icm (int numberA, int numberB){
    return numberA*numberB/gcd(numberA,numberB);
}

int main(){
    
    int numberA, numberB;
    int greatestCommonDivisor, leastCommonMultiple;
    
        do {
            printf("Insert number A : "); scanf("%d",&numberA);
            printf("Insert number B : "); scanf("%d",&numberB);
        } while (numberA <= 0 || numberB <= 0);

        greatestCommonDivisor = gcd(numberA,numberB);
        leastCommonMultiple = Icm(numberA,numberB);

    printf("\nThe greatest common divisor of two number = %d", greatestCommonDivisor);
    printf("\nThe least common multiple of two number = %d", leastCommonMultiple);
}
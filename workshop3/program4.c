#include <stdio.h>
#include <math.h>

double factorial(int number){

    double p = 1;
        // condition print out factorial of number
        for (int i = 2; i <= number ; i++){
            p*=i;
        } 
    return p;
}

int main(){
    int number;

        do {
            printf("Insert number : ");scanf("%d",&number);
        } while (number < 0);
    
    printf("Factorial of number : %.2lf", factorial(number)); 
}


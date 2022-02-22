#include <stdio.h>
#include <math.h>

double fibo(int number){

    int t1 = 1 , t2 = 1, f = 1  ;
        // Fibonacci sequence
        for (int i = 3 ; i <= number ; i ++){
            f = t1 + t2 ;
            t1 = t2;
            t2 = f;
        }
    return f;
}

int main(){
    int number;
        do {
            printf("Insert number : "); scanf("%d", &number);
        } while (number < 1);
        printf("The value at %d position in Fibonacci sequence : %.0lf",number, fibo(number));
}


#include <stdio.h>

int isFibonacci(int number){
    int t1 =1 , t2 = 1, f = 1;
        if(number == 1) {
            return 1;
        } 
        while (f < number){
            f = t1 + t2 ;
            t1 = t2;
            t2 = f;
        } 
    return number == f;
}

int main(){
    int number;
    
        do {
            printf("Insert number : "); scanf("%d",&number);
        } while (number < 1);

        // check Fibonacci element
        if(isFibonacci(number) == 1){
            printf("%d is a Fibonacci element", number);
        } else {
            printf("%d not a Fibonacci element",number);
        }
}

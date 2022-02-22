#include <stdio.h>
#include <math.h>
// function check prime of number
int prime(int n) {

    int i, re = 1;
    int nn = sqrt(n);
    for (i = 2; i <= nn; i++)
    {
        if (n % i == 0)
        {
            re = 0;
            break;
        }
        else
        {
            re = 1;
        }
    }
    return re;
}
// function find min, max digit
void minmax(int n) {
    int min, max, digit;
    digit = n % 10;
    min = digit;
    max = digit;
    n = n / 10;

    while (n > 0)
    {
        digit = n % 10;
        if (digit < min)
        {
            min = digit;
        }
        if (digit > max)
        {
            max = digit;
        }
        n = n / 10;
    }
    printf("Max digit is: %d\n", max);
    printf("Min digit is: %d\n", min);
}

int main() {

    int select, n = -1;
    // select option
    do
    {
        printf("Select one of these functions: \n");
        printf("1 - Process primes\n");
        printf("2 - Print min, max digit in an integer\n");
        printf("3 - Quit\n");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            do
            {
                printf("\tEnter a positive integer: ");
                scanf("%d", &n);
            } while (n <= 1);
            if (prime(n) == 1)
            {
                printf("%d is a prime!\n", n);
            }
            else
            {
                printf("%d is not a prime!\n", n);
            }
            break;
        case 2:
            do
            {
                printf("\tEnter a positive integer: ");
                scanf("%d", &n);
            } while (n <= 0);
            minmax(n);
            break;
        }
    } while (select > 0 && select < 3); 
}

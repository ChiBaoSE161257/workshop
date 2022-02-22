#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int total, count, x, y;

    printf(" Ball Lottery \n ");
    printf("============\n ");

    // input
    do
    {
        printf("Total sought : ");
        scanf("%d", &total);
    } while (total < 2 || total > 20);

    count = -1;

    // print total and count
    do
    {
        count += 2;
        x = (rand() % 10) + 1;
        y = (rand() % 10) + 1;

        printf("Result of picks %d and %d: %d + %d\n", count, count + 1, x, y);
    } while (x + y != total);

    if (x + y == total){
        printf("You got your total in %d picks!", count + 1);
    }

    return 0;
}

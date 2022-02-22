#include <stdio.h>
#include <stdlib.h>

int main() {

    int total;
    int x, y;
    int count = 0;

    // input
    do
    {
        printf("Enter total (between 2 and 12): ");
        scanf("%d", &total);
    } while (total < 2 || total > 12);

    // print total and count
    do
    {
        count++;

        x = rand() % 6 + 1;
        y = rand() % 6 + 1;
        printf("Result of throw %d: %d + %d \n", count, x, y);
    } while ((x + y) != total);

    printf("\nYou got your total in %d throws!", count);
}
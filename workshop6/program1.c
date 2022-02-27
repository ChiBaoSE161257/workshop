#include <stdio.h>
#include <stdlib.h>

//Check ISBN valid or not
int checkISBN(int number) {

    int m[11], c[11];
    int k[9]={10,9,8,7,6,5,4,3,2};
    int i;
    int sumn;
    if (number > 1000000) {

        for (i=10; i>0; i--) {

            m[i] = number%10;
            number = number/10;
        }

        sumn=0;
        sumn = sumn+m[10];

        for (i=1; i<10; i++) {

            c[i]=k[i-1]*m[i];
            sumn = sumn+c[i];

        }
        if (sumn%11 ==0) {
            return 1;
        };
    }
    return 0;
}

int main() {

    int number;

    do {
        printf("Enter a number (10 digits) (or O to stop): "); scanf("%d", &number);

        if (checkISBN(number) == 0){

            printf("\t%d is'n an ISBN\n", number);

        } else {
            printf("\t%d is an ISBN\n", number);
        }
        
    } while (number != 0);

}
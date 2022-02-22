#include <stdio.h>
#include <math.h>

int validDate(int day, int month, int year){

    int maxDay = 31;

        if (day < 1 || day > 31 || month < 1 || month > 12  ){
            return 0; //invalid date
        }
        
        if ( month == 4 || month ==6 || month == 9 || month ==1 ){
            maxDay = 30;
        } else if (month == 2){
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
                maxDay = 29;
            } else {
                maxDay = 28;
            }
        return day <= maxDay;
        }
}

int main(){
    int day, month, year;

    printf("Insert day : "); scanf("%d", &day);
    printf("Insert month : "); scanf("%d", &month);
    printf("Insert year : "); scanf("%d", &year);

        // condition print out valid date or invalid date
        if(validDate(day,month,year)){
            printf("%d/%d/%d is a valid date", day, month, year);
        } else {
            printf("%d/%d/%d is a invalid date", day, month, year);
        }

}


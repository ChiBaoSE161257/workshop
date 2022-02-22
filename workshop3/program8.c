#include <stdio.h>
#include <math.h>

double makeDouble(int ipart,int fraction){

    double d_f = fraction;
        // condition the real number
        while (d_f >= 1){
            d_f = d_f / 10;
        }
        if (ipart < 0){
            return ipart - d_f;
        }
    return ipart + d_f;
}

int main(){
    
    int ipart, fraction;
    double value;
    printf("Number of integral part : "),scanf("%d",&ipart);

        do {
            printf("Number of fraction : "), scanf("%d",&fraction);
        } while (fraction < 0);

    value = makeDouble (ipart, fraction);
    printf("Value of the real number : %.4lf",value);
}

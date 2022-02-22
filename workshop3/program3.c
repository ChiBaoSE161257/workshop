#include <stdio.h>
#include <math.h>

int gerRelPos(double pointX, double pointY, double circleR){
    
    double squareLength = pointX*pointX+pointY*pointY;
    double squareCircle = circleR*circleR;
        //condition to print out the point
        if(squareLength < squareCircle){
            return 1; // in the circle
        } else if (squareLength == squareCircle){
            return 0; // on the circle
        }
    return -1; // out of the circle
}

int main(){
    double pointX, pointY;
    double circleR;

    printf("Insert point at X : "); scanf("%lf", &pointX);
    printf("Insert point at Y : "); scanf("%lf", &pointY);

        do {
            printf("Insert circle : "); scanf("%lf", &circleR);
        } while (circleR < 0);

    int result = gerRelPos(pointX,pointY,circleR);

        if ( result == 1){
            printf("The point is in the circle");
        } else if(result == 0){
            printf("The point is on the circle");
        } else{
            printf("The point is out of the circle");
        }
}

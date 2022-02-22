#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function find solution
void QuadraticEqu(double a, double b, double c)
{
    double d;
    d = b*b - 4*a*c;
    printf("\tQuadratic equation: %.2lfx^2 + %.2lfx + %.2lf = 0\n", a, b, c);
    if (d < 0)
    {
        printf("NO SOLUTION!\n");
    }
    else if (d == 0)    
    {
        printf("ONE SOLUTION: x = %.2lf\n", -b/(2*a));
    }
    else
    {
        d = sqrt(d);
        printf("TWO SOLUTIONS:\n");
        printf("\tx1 = %.2lf\n\tx2 = %.2lf\n", (-b-d)/(2*a), (-b+d)/(2*a));
    }
}

// find money
void BankDep(double d, double r, int y)
{
    double money;
    printf("You deposit %.2lf for %d year(s) at the rate of %.2lf/year.\n", d, y, r);
    money = d * (pow(1+r, y));
    printf("The money you will receive at the end: %.2lf\n", money);
}

int main() {

    int m;
    double a,b,c;
    double d, r;
    int y;
    // input
    do {
        printf("Menu to choose: \n");
        printf("1 - Quadratic equation.\n");
        printf("2 - Bank deposit problem.\n");
        printf("3 - Quit.\n");
        scanf("%d", &m);

        switch (m) {
            case 1:
                printf("\tA Quadratic equation: ax^2 + bx + c = 0 (x: variable)\n");
                printf("\tEnter a: "); scanf("%lf", &a);
                printf("\tEnter b: "); scanf("%lf", &b);
                printf("\tEnter c: "); scanf("%lf", &c);
                QuadraticEqu(a, b, c);
                break;

            case 2:
                // input and check deposit
                do {
                    printf("\tEnter your deposit (VND): ");
                    scanf("%lf", &d);
                } while (d <= 0);
               
                //input and check yearly rate
                do {
                    printf("\tEnter yearly rate (0.0 to 1.0): ");
                    scanf("%lf", &r);
                } while (r<=0 || r>=1);
                
                // check year
                do {
                    printf("\tEnter year(s): ");
                    scanf("%d", &y);
                } while (y <= 0);
                
                BankDep(d, r, y);
                break;
        }
    } while (m>0 && m<3);

}


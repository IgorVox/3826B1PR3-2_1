#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include<stdio.h>
void main()
{
    double R1 = 0;
    double R2 = 0;
    double X1 = 0;
    double Y1 = 0;
    double X2 = 0;
    double Y2 = 0;
    double d = 0;
    scanf("%lf %lf %lf %lf %lf %lf", &R1, &R2, &X1, &Y1, &X2, &Y2);
    d = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

    if (((d == 0) && R1 == R2)) {
        printf("covpadaut");
    }
    else if ((fabs(R1 - R2) < d) && (R1 + R2 > d)) {

        printf("Peresecautsa");

    }
    else {
        if ((d == R1 + R2) || ((d == fabs(R1 - R2)))) {
            printf("casautsa");
        }
        else {
            printf("ne PERESECAUTSA");
        }
    }

}
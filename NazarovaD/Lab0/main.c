#include "stdio.h"
#include "math.h"

void main()
{
    const double eps = 10e-12;
    double x1, y1, r1;
    double x2, y2, r2;
    printf_s("enter x1,y1,r1\n");
    scanf_s("%lf %lf %lf", &x1, &y1, &r1);
    printf_s("enter x2,y2,r2\n");
    scanf_s("%lf %lf %lf", &x2, &y2, &r2);
    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    if (r1 < 0 || r2 < 0) {
        printf_s("error, r < 0");
    }
    else if (d < fabs(r1 - r2)) {
        printf_s("not intersect");
    }
    else if (fabs(r1 - r2) < d && (r1 + r2) > d) {
        printf_s("intersect");
    }
    else if (fabs(d - (r1 - r2)) < eps) {
        printf_s("touch");
    }
    else if (fabs(d - fabs(r1 - r2)) < eps) {
        printf_s("touch");
    }
    else if (d > (r1 + r2)) {
        printf_s("not intersect");
    }
    else (d < eps && fabs(r1 - r2) < eps); {
        printf_s("touch");
    }
}
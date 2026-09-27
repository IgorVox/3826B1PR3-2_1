#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void main()
{
	const double eps = 10e-12;
	double x1, y1, r1;
	double x2, y2, r2;
	printf("enter x1, y1, r1\n ");
	scanf("%lf %lf %lf", &x1, &y1, &r1);
	printf("enter x2, y2, r2\n ");
	scanf("%lf %lf %lf", &x2, &y2,  &r2);
	double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1)*(y2 - y1));
	if (r1 > 0 && r2 > 0) {

		if (d < fabs(r1 - r2)) {
			printf("not intersect");
		}
		if (d > (r1 + r2)) {
			printf("not intersect");
		}
		if (fabs(r1 - r2) < d && (r1 + r2) > d) {
			printf("intersect");
		}
		if (fabs(d-(r1+r2))<eps) {
			printf("touch");
		}
		if (fabs(d-fabs(r1-r2))<eps) {
			printf("touch");
		}
		if (d< eps && fabs(r1-r2)<eps) {
			printf("touch");
		}
	}
}
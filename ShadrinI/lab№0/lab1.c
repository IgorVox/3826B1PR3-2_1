#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include<stdio.h>
void main()
{
	long double pl1 = 0.8;// dvp
	long double pl2 = 0.6;//dsp
	long double pl3 = 0.7;//derevo
	long double M = 0;
	long double backwal = 0;
	long double wall = 0;
	long double doors = 0;
	long double lids = 0;
	long double h, d, w;
	long double shelves;
	scanf("%Lg %Lg %Lg", &h, &d, &w);
	backwal = h * w * 0.5 * pl1 / 1000;
	wall = 2 * (h * d * 1.5 * pl2) / 1000;
	lids = w * d * 1.5 * pl2 / 1000;
	doors = 2*(h * w * pl3) / 1000;
	shelves = (h / 45) * 0.5 * d * w * pl2 / 1000;
	M = backwal + wall + lids + doors + shelves;
	printf("%Lg %Lg %Lg %Lg %Lg %Lg", M, backwal, wall, lids, doors, shelves);
}
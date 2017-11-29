#include <stdio.h>
#include <math.h>

void menseki(double v1[], double v2[], double v3[], double result[]){
	result[0] = (v2[1] - v1[1]) * (v3[2] - v1[2]) - (v2[2] - v1[2]) * (v3[1] - v1[1]);
	result[1] = (v2[2] - v1[2]) * (v3[0] - v1[0]) - (v2[0] - v1[0]) * (v3[2] - v1[2]);
	result[2] = (v2[0] - v1[0]) * (v3[1] - v1[1]) - (v2[1] - v1[1]) * (v3[0] - v1[0]);
	double aws = sqrt(pow(result[0], 2) + pow(result[1], 2)  + pow(result[2], 2)) / 2;
    printf("S = %lf", aws);
}

int main(void)
{
	double a[3] = { 1.0, 1.0, 1.0 };
	double b[3] = { 18.0, 45.0, 35.0 };
	double c[3] = { 53.0, 5.0, 10.0 };
	double result[3];
	menseki(a, b, c, result);
	// 回答
	// S = 1378.787964
	return 0;
}

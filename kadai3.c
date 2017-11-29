#include <stdio.h>

void three_point(double a[], double b[], double c[], double result[]){

	result[0] = (b[1] - a[1]) * (c[2] - a[2]) - (c[1] - a[1]) * (b[2] - a[2]);
	result[1] = (b[2] - a[2]) * (c[0] - a[0]) - (c[2] - a[2]) * (b[0] - a[0]);
	result[2] = (b[0] - a[0]) * (c[1] - a[1]) - (c[0] - a[0]) * (b[1] - a[1]);
	result[3] = -(result[0] * a[0] + result[1] * a[1] + result[2] * a[2]);
}

int main(void)
{
	double a[3] = { 10.0, 10.0, 10.0 };
	double b[3] = { 80.0, 20.0, 15.0 };
	double c[3] = { 35.0, 70.0, 30.0 };
	double result[4];
	int i;

	three_point(a, b, c, result);

	char moji[] = "abcd";
	for (i = 0; i<4; i++){
		printf("%c : %lf ", moji[i], result[i]);
		printf("\n");
	}
	return 0;
}

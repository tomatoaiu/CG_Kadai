#include <stdio.h>

void hidari(double a[], double b[], double c[]){
	double aws_a = (b[1] - a[1]) * (c[2] - a[2]) - (c[1] - a[1]) * (b[2] - a[2]);
	double aws_b = (b[2] - a[2]) * (c[0] - a[0]) - (c[2] - a[2]) * (b[0] - a[0]);
	double aws_c = (b[0] - a[0]) * (c[1] - a[1]) - (c[0] - a[0]) * (b[1] - a[1]);
    printf("a = %lf   d = %lf   c = %lf\n", aws_a, aws_b, aws_c);
}

void migi(double a[], double b[], double c[]){
	double aws_a = (b[2] - a[2]) * (c[1] - a[1]) - (c[2] - a[2]) * (b[1] - a[1]);
	double aws_b = (b[0] - a[0]) * (c[2] - a[2]) - (c[0] - a[0]) * (b[2] - a[2]);
	double aws_c = (b[1] - a[1]) * (c[0] - a[0]) - (c[1] - a[1]) * (b[0] - a[0]);
    printf("a = %lf   d = %lf   c = %lf", aws_a, aws_b, aws_c);
}

int main(void)
{
	double a[3] = {  1.0,  1.0,  1.0 };
	double b[3] = { 18.0, 45.0, 35.0 };
	double c[3] = { 53.0,  5.0, 10.0 };
	hidari(a, b, c);
    // 左周り回答
    // a = 260.000000   d = 1615.000000   c = -2220.000000
    migi(a, b, c);
    // 右回り回答
    // a = -260.000000   d = -1615.000000   c = 2220.000000
	return 0;

}

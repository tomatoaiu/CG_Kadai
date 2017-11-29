#include <stdio.h>
#include <math.h>

void heimen_tyokusen(double v1[], double v2[]){
    double d = v2[0] * v1[0] + v2[1] * v1[1] + v2[2] * v1[2];
    printf("a = %lf  b = %lf  c = %lf  d = %lf", v2[0], v2[1], v2[2], d);
}

int main(void)
{
	double v1[3] = { 1.0, 1.0, 1.0 }; // 点
    double v2[3] = { 2.0, 2.0, 2.0 }; // 方向ベクトル
	heimen_tyokusen(v1, v2);
    // 回答
    // a = 2.000000  b = 2.000000  c = 2.000000  d = 6.000000
	return 0;

}

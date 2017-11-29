#include <stdio.h>

double __veci(double va[], double vb[])
{
	int i;
	double __veci=0.0;

	for(i=0; i<3; i++){
		__veci+=va[i]*vb[i];
	}
	return __veci;
}

int veco(double va[], double vb[], double vc[])
{
	vc[0] = va[1]*vb[2] - va[2]*vb[1];
	vc[1] = va[2]*vb[0] - va[0]*vb[2];
	vc[2] = va[0]*vb[1] - va[1]*vb[0];
	return 0;
}

int main(void)
{
	double va[3] = {17.0, 44.0, 34.0};
	double vb[3] = {52.0, 4.0, 9.0};
	double vc[3];
	double x;
	int i;

	x =  __veci(va, vb);
	printf("va,vbの内積=%lf\n",x);

	veco(va, vb, vc);

	printf("va,vbの外積=");
	for(i=0; i<3; i++){
		printf("%lf ",vc[i]);
	}
	printf("\n");
	return 0;
}

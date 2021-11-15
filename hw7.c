#pragma warning (disable:4996)
#include<stdio.h>
#include<math.h>

double sd(int enter[],int length) {
	double mean, total = 0.0;
	double hellper= 0.0;

	for (int i = 0; i < length; i++) { // ÃÑÇÕ
		total += enter[i];
	}
	mean = total / length; //(u)Æò±Õ °ª

	for (int i = 0; i < length; i++) { //¸ðÆò±Õ
		hellper += pow((enter[i] - mean),2);
	}
	hellper /= length; //¾ËÆÄ °ª

	return sqrt(hellper);
}


int main(void) {
	int enter[5];
	double a = 0.0;

	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &enter[i]);
	}
	int length = sizeof(enter) / sizeof(int); //¹è¿­ÀÇ ±æÀÌ

	a = sd(enter, length);

	printf("Standard Deviation = %.3lf \n", a);

	return 0;
}
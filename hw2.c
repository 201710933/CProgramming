#pragma warning (disable:4996)
#include<stdio.h>

int main(void) {
	double km; //�Է¹��� ���� �� ����
	double mile;

	printf("Please enter kilometers: ");
	scanf("%lf", &km);

	mile = km / 1.609;

	printf("%.1lf km is equal to %.1lf miles. \n",km,mile); //�Ҽ� ù��° �ڸ����� ���

	return 0;
}
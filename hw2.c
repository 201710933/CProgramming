#pragma warning (disable:4996)
#include<stdio.h>

int main(void) {
	double km; //입력받을 변수 값 설정
	double mile;

	printf("Please enter kilometers: ");
	scanf("%lf", &km);

	mile = km / 1.609;

	printf("%.1lf km is equal to %.1lf miles. \n",km,mile); //소수 첫번째 자리까지 출력

	return 0;
}
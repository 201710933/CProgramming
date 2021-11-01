#pragma warning (disable:4996)
#include<stdio.h>

int main(void) {
	int enter[5];

	printf("5개의 정수를 입력하세요: ");
	for (int i = 0; i < 5; i++) { //5개 정수 입력
		scanf("%d", &enter[i]);
	}
	
	printf("홀수 출력: ");
	for (int i = 0; i < 5; i++) //홀수 출력
		if (enter[i] % 2 == 1) 
			printf("%d ", enter[i]);
	printf("\n");
		
	printf("짝수 출력: ");
	for (int i = 0; i < 5; i++) //짝수 출력
		if (enter[i] % 2 == 0)
			printf("%d ", enter[i]);
	printf("\n");
	
	return 0;
}
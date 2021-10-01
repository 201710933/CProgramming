#pragma warning (disable:4996)
#include<stdio.h>

int main(void) {
	int enter, i; //enter은 입력값, cnt는 카운터
	int cnt = 0;

	while (1) {
		printf("Please enter a number: ");
		scanf("%d", &enter);

		for (i = 1; i <= enter; i++) {
			if (enter % i == 0)
				cnt += 1;
		}

		if (cnt == 2) //소수는 1과 자기자신만 나와야 하므로 2개가 나와야한다.
			printf("It is a prime number.\n");
		else
			printf("It is not a prime number \n");
		
		printf("\n");
		cnt = 0; //리셋

	}
	return 0;
}
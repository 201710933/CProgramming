#pragma warning (disable:4996)
#include<stdio.h>

int main(void) {
	int enter, i; //enter�� �Է°�, cnt�� ī����
	int cnt = 0;

	while (1) {
		printf("Please enter a number: ");
		scanf("%d", &enter);

		for (i = 1; i <= enter; i++) {
			if (enter % i == 0)
				cnt += 1;
		}

		if (cnt == 2) //�Ҽ��� 1�� �ڱ��ڽŸ� ���;� �ϹǷ� 2���� ���;��Ѵ�.
			printf("It is a prime number.\n");
		else
			printf("It is not a prime number \n");
		
		printf("\n");
		cnt = 0; //����

	}
	return 0;
}
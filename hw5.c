#pragma warning (disable:4996)
#include<stdio.h>

int main(void) {
	int enter[5];

	printf("5���� ������ �Է��ϼ���: ");
	for (int i = 0; i < 5; i++) { //5�� ���� �Է�
		scanf("%d", &enter[i]);
	}
	
	printf("Ȧ�� ���: ");
	for (int i = 0; i < 5; i++) //Ȧ�� ���
		if (enter[i] % 2 == 1) 
			printf("%d ", enter[i]);
	printf("\n");
		
	printf("¦�� ���: ");
	for (int i = 0; i < 5; i++) //¦�� ���
		if (enter[i] % 2 == 0)
			printf("%d ", enter[i]);
	printf("\n");
	
	return 0;
}
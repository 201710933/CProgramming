#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>

int main(void)
{
	char ch[40];
	int len;
	const int diff = 'a' - 'A';

	printf("Input> ");
	fgets(ch, sizeof(ch), stdin); // ���� �Է�
	ch[strlen(ch) - 1] = 0; //\n ���� ����

	len = strlen(ch);

	for (int i = 0; i < len; i++) {
		if (ch[i] >= 'A' && ch[i] <= 'Z')
			ch[i] = ch[i] + diff;
		else if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = ch[i] - diff;
		else
			ch[i] = ch[i];
	}

	printf("Output> ");
	puts(ch); // ��ȯ�� ���� ���
	printf("\n");
	return 0;
}
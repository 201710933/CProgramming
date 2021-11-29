#pragma warning (disable:4996)
#include<stdio.h>

typedef struct student {
	char Name[20];
	char Country[40];
	int Population;
} Student;

int main(void) {
	Student arr[3];
	
	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++) { //for문에서는 마지막 줄에도 getchar()가 필요하다 다시 반복되서
		printf("Name> "); 
		gets_s(arr[i].Name, sizeof(arr[i].Name));
		fflush(stdin); //공백제거

		printf("Country> ");
		gets_s(arr[i].Country, sizeof(arr[i].Country));
		fflush(stdin);

		printf("Population> ");
		scanf("%d", &arr[i].Population);
		getchar(); //띄어쓰기 포함 하기 위해
	}

	printf("Printing the three cities: \n");
	for (int i = 0; i < 3; i++)
		printf("%d.%s in %s with a population of %d people \n", i+1, arr[i].Name, arr[i].Country, arr[i].Population);;
	return 0;
}
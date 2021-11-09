#pragma warning (disable:4996)
#include<stdio.h>

int main(void) {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int* arr1_str = &arr1[0];
	int* arr2_str = &arr2[0];
	int help;

	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	printf("arr2: ");
	for (int j = 0; j < 6; j++) {
		printf("%d ", arr2[j]);
	}
	printf("\n");
	

	for (int i = 0; i < 6; i++) {
		help = *arr1_str;
		*arr1_str = *arr2_str;
		*arr2_str = help;

		arr1_str++;
		arr2_str++;
	}

	printf("after swap\n");
	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	printf("arr2: ");
	for (int j = 0; j < 6; j++) {
		printf("%d ", arr2[j]);
	}
	printf("\n");
	return 0;
}
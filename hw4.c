#pragma warning (disable:4996)
#include<stdio.h>
// /몫, % 나머지

void divide(int n, int storage[], int *count) {
	int helpper = 0;

	if (n != 0){
		helpper = n % 2; //나머지
		n /= 2; //몫
		storage[*count] = helpper;
		*count += 1; //배열

		divide(n, storage, count);
	}
}

int main(void) {
	int enter = 0, storage[10], count = 0;


	printf("Please enter a number: ");
	scanf("%d", &enter);

	divide(enter, storage, &count);

	for (int i = count-1; i >= 0; i--) //count만큼 배열에 저장했으므로
		printf("%d", storage[i]);
	
	printf("\n");
	return 0;
}
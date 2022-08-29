#include <stdio.h>

void search(int array[], size_t length) {
	int i;

	for (i = 0; i < length; i++) {
		if (array[i] > 5) {
			break;
		}
	}

	if (i < length) {
		printf("Item %d\n", array[i]);
	}
	else {
		printf("Not found\n");
	}
}

void main() {
	int arr[] = {5, 8, 3};
	search(arr, 3);
}
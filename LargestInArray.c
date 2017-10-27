#include <stdio.h>

void main(){

	int a[20], n, i, largest;

	printf("Enter the number of elements in the array.\n");
	scanf("%d", &n);

	printf("Enter the values: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	printf("\n===============================");
	printf("\nLargest element is: ");

	largest = a[0];
	for(i = 1; i < n; i++){
		if(a[i] > largest)
			largest = a[i];
	}

	printf("%d\n", largest);
}

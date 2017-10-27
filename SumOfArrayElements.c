#include <stdio.h>

void main(){

  int a[50], i, n, sum = 0;
  int *pointer = a;


  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter array elements\n");
  for(i = 0; i < n; i++){
    scanf("%d", pointer + i);
  }

  printf("=====================================\n");
  printf("Here is the entered array: \n");
  for(i = 0; i < n; i++){
    printf("%d\n", *(pointer + i));
  }
  printf("Sum of all elements is:");
  for(i = 0; i < n; i++){
    sum += *(pointer + i);
  }
  printf("%d\n", sum);

}

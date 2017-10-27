#include <stdio.h>

void main(){

  int a[50], b[50], c[100], n1, n2, i;

  printf("Enter the size of the first array: ");
  scanf("%d", &n1);

  printf("Enter array elements\n");
  for(i = 0; i < n1; i++){
    scanf("%d", &a[i]);
  }

  printf("=====================================\n");

  printf("Enter the size of the second array: ");
  scanf("%d", &n2);

  printf("Enter array elements\n");
  for(i = 0; i < n2; i++){
    scanf("%d", &b[i]);
  }

  printf("=====================================\n");
  printf("Here is the merged %d array: \n", n1+n2);

  for(i = 0; i < n1; i++){
    c[i] = a[i];
  }
  for(i = 0; i < n2; i++){
    c[n1+i] = b[i];
  }

  for(i = 0; i < n1+n2; i++){
    printf("%d\n", c[i]);
  }

}

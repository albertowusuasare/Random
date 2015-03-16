#include <stdio.h>
#include <stdlib.h>



int main(){

  int * first = (int*) malloc(sizeof(int));
  *first = 5;
  int * second = first;
  printf("First's value is: %d \n Second's value is %d \n", *first, *second);
  free(first);
  printf("First's value is: %d \n Second's value is %d \n", *first, *second);
  return 0;
}

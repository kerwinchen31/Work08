#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int n){
  int a = nlog(n) * 1.5;
  int *array[a];
  int i, j, k;
  j = 2;
  for(i = 0; i <= a; i++){
    array[i] = 1;
  }
  array[a+1] = 0;
  while (array[j]){
    for (k = j; array[k] != 0; k++){
      if (!(array[k] % j)){
	array[k] = 2;
      }
    }
    j++;
    while(array[j] == 2){
      j++;
    }
  }
  while(array[j] != 1){
    j--;
  }
  return j;
}
  

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"
/*
int sieve(int n){
  int a = log(n) * n * 1.15;
  int *array[a];
  int i, j, k;
  j = 2;
  for(i = 0; i <= a; i++){
    array[i] = 1;
  }
  array[a+1] = 0;
  while (array[j]){
    for (k = j; array[k] != 0; k++){
      if (!(*array[k] % j)){
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
*/
int sieve(int n){
  int a = log(n) * n * 1.15;
  int *p = malloc(a * sizeof(int));
  int *temp = p;
  int j = 2;
  int k, i;
  for(i = 0; i < a; i++){
    p[i] = 1;
    //printf("%d ", *p);
  }
  p[a] = 0;
  /*
  while (*p){
    *p = 1;
    p++;
    }*/
  while (p[j]){
    for (k = j; k < a; k++){
      //printf("%d", j);
      if (!(k % j)){
	*(p+k) = 2;
      }
    }
    p[j] = 3;
    //printf("\n ------------------ \n");
    /*for(i = 0; i < a; i++){
    printf("%d ", p[i]);
    }*/
    j++;
    while(p[j] == 2){
      j++;
    }
  }
  while(p[j] != 3){
    j--;
    }
  return j;
   
}
      
  

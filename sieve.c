#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int n){
  int a = log(n) * n * 1.15;
  char *p = malloc(a * sizeof(char));
  char *temp = p;
  int j = 2;
  int k, i;
  for(i = 0; i < a; i++){
    if (!(i % 2 || i % 3)){
      p[i] = 2;
    }else{
    p[i] = 1;
    }
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
  free(p);
  return j;
   
}
      
  

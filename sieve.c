#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int n){
  int a = log(n) * n * 1.15;
  char *p = malloc(a);
  int b = 1;
  int x = 0;
  int k,i;
  for(i = 0; i < a; i++){
    p[i] = 1;
  }
  while(x < n){
    b++;
    if (p[b]){
    for (k = b*2; k < a; k+=b){
	*(p+k) = 0;
    }
    x++;
  }
  }
  free(p);
  return b;
   
}


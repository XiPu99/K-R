#include <stdio.h>

// count 1 bits in x
int bitcount(unsigned x){
  int count = 0;
  while(x!=0){
    if(x&1) count++;
    x>>=1;
  }
  return count;
}

int main(){
  unsigned x = 31;
  printf("x has %d bits\n", bitcount(x));
  return 0;
}

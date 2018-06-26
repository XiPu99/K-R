#include <stdio.h>

int main(){
  int lc = 0;
  int c = getchar();
  while(c!=EOF){
    if(c=='\n') ++lc;
    c = getchar();
  }
  printf("%d\n", lc);
}

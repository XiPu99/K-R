#include <stdio.h>

int main() {
  int c = getchar();

  while(c != EOF){
    putchar(c);
    c = getchar();
    // printf("%d\n", c != EOF);
  }

  return 0;
}

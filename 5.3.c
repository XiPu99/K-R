#include <stdio.h>

int strleng(char *s){
  int length;
  for(length = 0; *(s+length)!='\0'; length++);
  return length;
}

int main(){
  char test[] = "hello";
  printf("%d\n", strleng(test+1));
  printf("%d\n", strleng("wtf"));
  printf("%d\n", strleng(""));
  return 0;
}

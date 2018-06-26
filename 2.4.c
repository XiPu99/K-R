#include <stdio.h>

int strleng(char s[]){
  int i = 0;
  while(s[i]!='\0'){
    i++;
  }
  return i;
}

int main(){
  printf("%d\n", strleng("hello world"));
}

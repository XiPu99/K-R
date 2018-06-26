#include <stdio.h>

int strleng(char s[]){
  int i = 0;
  while(s[i]!='\0'){
    i++;
  }
  return i;
}

int main(){
  enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t'};
  enum months { JAN = 1, FEB, MAR ,APRIL}; /* FEB is 2, MAR is 3 and so on */
  printf("%d\n", strleng("hello world"));
}

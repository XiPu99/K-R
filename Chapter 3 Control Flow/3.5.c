#include <stdio.h>
#include <string.h>

void reverse(char s[]){
  int i, j, c;

  for(i = 0, j = strlen(s)-1; i < j; i++, j--){
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

int main(){
  char test[] = {'h', 'e', 'l', 'l', 'o'};
  for(int i = 0; i < strlen(test); i++){
    printf("%c", test[i]);
  }
  printf("\n");
  reverse(test);
  for(int i = 0; i < strlen(test); i++){
    printf("%c", test[i]);
  }
}

#include <stdio.h>
#define MAXLINE 1000
// a program that reads a set of text lines and prints the longest
int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
  char line[MAXLINE];
  char longest[MAXLINE];
  int longLen, len;
  longLen = 0;
  while((len = getLine(line, MAXLINE))>0){
    if(len>longLen){
      longLen = len;
      copy(longest, line);
    }
  }
  printf("The longest line has a length of %d\n", longLen);
  printf("%s", longest);
  return 0;
}

int getLine(char line[], int limit){
  int c ,i;

  for(i = 0; i < limit-1 && (c = getchar())!=EOF && c!='\n'; i++){
    line[i] = c;
  }
  if(c == '\n') {
    line[i] = '\n';
    i++;
  }
  line[i] = '\0';
  return i;
}

void copy(char to[], char from[]){
  int i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;
}

#include <stdio.h>
#define IN 1
#define OUT 0

/* count lines, words, and characters
  (except blank, tab and newline) in input*/
int main(){
  /*
    nl: number of lines
    nw: number of words
    nc: number of characters
    state: a variable that checks
  */
  int c, nl, nw, nc, state;
  nl = nw = nc = 0;
  state = OUT;

  while((c=getchar())!=EOF){
    if(c=='\n') {
      nl++;
      nw++;
    }
    if(c==' '||c=='\t'){
      state = OUT;
    }
    else if(state==OUT){
      state = IN;
      nw++;
    }
    nc++;
  }
  printf("nl:%d nw:%d nc:%d\n", nl, nw, nc);
}

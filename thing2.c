#include <stdio.h>

int main(int argc, char** argv){

  int x = 0
  while(x < 100){
    int i;
    for(i=0; i<x; i++){
      printf(" ");
    }
    print("%d\n", x);
    x++;
  }
  
  return 0;
}

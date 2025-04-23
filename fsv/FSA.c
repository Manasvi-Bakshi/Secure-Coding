#include <stdio.h>

void FSV(char *input){
  printf(input);
}

int main(){
  char input[100];
  printf("Enter the input text: \n");
  fgets(input,sizeof(input), stdin);
  FSV(input);
  return 0;
}

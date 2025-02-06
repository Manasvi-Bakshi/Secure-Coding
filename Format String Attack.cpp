// Format String Vulnerability

#include <stdio.h>

void FSV(char *Input){
	printf(Input);
}

int main(){
	char input[100];
	printf("Enter text: ");
	fgets(input, sizeof(input), stdin);
	FSV(input);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	char *shell = getenv("MYSHELL");
	
	if(shell)
	{
		printf("Value: %s\n",shell);
		printf("Address: %p\n",(void *)shell);
	}
	return 1;
}

// address: system 0x7ffff7e16290
// address: exit 0x7ffff7e0aa40
// address: bin/sh 0x7fffffffe46e

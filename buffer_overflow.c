#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void print_memory(void *addr, int length) {
    unsigned char *p = (unsigned char *)addr;
    int i,j;
    for (i = 0; i < length; i += 8) {
        printf("0x%p: ", p + i);
        for (j = 0; j < 8; j++) {
            if (i + j < length)
                printf("%02X ", *(p + i + j));
            else
                printf("   ");
        }
        printf("\n");
    }
}

void vulnerable_function(char *user_input) {
    char buffer[5]; // Small buffer (vulnerable to overflow)
    unsigned int stack_var = 0xFFFFFFFF; // A stack variable to monitor overflow

    printf("\n[BEFORE Overflow] Stack Memory Dump:\n");
    print_memory(&stack_var, 32); // Print memory before writing

    printf("\nCopying input...\n");
    strcpy(buffer, user_input); // Unsafe function (causes buffer overflow)

    printf("\n[AFTER Overflow] Stack Memory Dump:\n");
    print_memory(&stack_var, 32); // Print memory after writing

    printf("\nStack Variable Value: 0x%X\n", stack_var);
    if (stack_var != 0xFFFFFFFF) {
        printf("ALERT: Stack Variable Overwritten!\n");
    }
}
int main() {
    char input[100]; // Large input buffer
    printf("Enter input: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove newline
    vulnerable_function(input);

    return 0;
}

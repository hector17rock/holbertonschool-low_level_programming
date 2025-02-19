#include <stdio.h>

int is_lowercase(char c) {
    return (c >= 'a' && c <= 'z') ? 1 : 0;
}

int main(void) {  // main should take 'void' as the parameter list if no arguments
    char ch = 'a';
    
    if (is_lowercase(ch)) {
        printf("%c is lowercase.\n", ch);
    } else {
        printf("%c is not lowercase.\n", ch);
    }

    return 0;
}

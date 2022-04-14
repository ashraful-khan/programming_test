//#include <string.h>
#include <stdio.h>

char mystr[6];
void chars2str(char x1, char x2, char x3, char* dest) {
    sprintf(dest, "%c %c %c", x1, x2, x3);
}

char2str('a', 'b', 'c', mystr);  /* Now mystr contains "a b c" */
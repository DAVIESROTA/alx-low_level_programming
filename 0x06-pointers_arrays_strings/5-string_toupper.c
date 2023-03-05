#include <ctype.h>
#include "main.h"

char *string_toupper(char *str) {
    char *p = str;
    while (*p != '\0') {
        if (islower(*p)) {
            *p = toupper(*p);
        }
        p++;
    }
    return str;
}


#include <stdio.h>
#include <string.h>
#include <sys/time.h>

char *my_strchr(const char *s, char c)
{
    char *p = (char *)s;
    do {
        if (*p == c) {
            return p;
        }
    } while (*p++ != '\0');
    return NULL;
}

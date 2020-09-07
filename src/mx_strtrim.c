#include "libmx.h"

char *mx_strtrim(const char *str) {
    int i = 0;
    int len = 0;
    char *dst = NULL;

    if (str == NULL)
        return dst;
    len = mx_strlen(str) - 1;
    while (mx_isspace(str[i]))
        i++;
    while (mx_isspace(str[len]))
        len--;
    if (len < 0) {
        dst = mx_strnew(0);
        return dst;
    }
    else
        dst = mx_strnew(len - i + 1);
        dst = mx_strncpy(dst, &(str[i]), len - i + 1);
        return dst;
}

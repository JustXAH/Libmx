#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *dst = NULL;
    int len = 0;

    if (s1 == NULL && n == 0) {
        dst = mx_strnew(len);
        return dst;
    }
    len = mx_strlen(s1);
    n > (size_t) len ? n = len : n;
    dst = mx_strnew(n);
    mx_strncpy(dst, s1, n);
    return dst;
}

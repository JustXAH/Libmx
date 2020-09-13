#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    ssize_t status = 0;
    char *buf = mx_strnew(buf_size);
    static char *str = NULL;
    int d_index = 0;

    if (buf_size > 0 && buf_size <= INT_MAX) {
        if (fd > 0)
            while ((status = read(fd, buf, buf_size)) > 0)
                mx_strcat(str, buf);
        if (status < 0)
            return -1;
        d_index = mx_get_char_index(str, delim);
        if (d_index >= 0)
            mx_strncpy(*lineptr, str, d_index);
        else {
            *lineptr = str;
            return -1;
        }
        free(buf);
        free(str);
    }
    return d_index;
}




//int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
//    if (buf_size >= 1 && buf_size <= 2147483647){
//        char *buf = mx_strnew(buf_size);
//        char *str = mx_strnew(buf_size);
//        size_t type;
//        if (fd > 0){
//            while ((type = read(fd,buf,buf_size)) > 0) {
//                mx_strcat(str, buf);
//            }
//            if(type < 0){
//                return -1;
//            }
//            int index = mx_get_char_index(str, delim);
//            if (index != -1) {
//                mx_strncpy(*lineptr, str, index);
//            }
//            else{
//                *lineptr = str;
//                return -1;
//            }
////            close(fd);
//            free(buf);
//            free(str);
//            return index;
//        }
//    }
//    return -2;
//}

//int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
//    int status = 0;
//    int c = 0;
//    int countOfLetters = 0;
//    if ((lineptr == 0) || (fd < 0))
//        return -1;
//    while ((status = read(fd, &c, 1)) > 0) {
//        if ((c == delim) || (status == 0))
//            break;
//        *lineptr = mx_realloc(*lineptr, countOfLetters + 1);
//        *(*lineptr + countOfLetters) = c;
//        countOfLetters++;
//    }
//    *(*lineptr + countOfLetters) = 0;
//    if (countOfLetters < (int) buf_size) {
//        *lineptr = mx_realloc(*lineptr, 1);
//        **lineptr = 0;
//    }
//    if (status == 0)
//        return 0;
//    return countOfLetters;
//}

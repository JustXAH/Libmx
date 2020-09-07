#include "libmx.h"

int main(void) {
//   mx_printchar('c');
	//mx_printchar('\n');
//    mx_printstr("sss");
	//mx_printchar('\n');
//    mx_print_unicode(0x23F1);
	//mx_printchar('\n');
//    char *arr[] = {"abc", "xyz", "ghi", "def", NULL};
//    mx_print_strarr(arr, "\t");
	//mx_printchar('\n');
//    mx_printint(0);
//    mx_printchar('\n');
//    mx_printint(2147483647);
//    mx_printchar('\n');
//    mx_printint(-2147483648);
	//mx_printchar('\n');
//    printf("%f\n", mx_pow(4, 3));
	//mx_printchar('\n');
//    printf("%d\n", mx_sqrt(0));
	//mx_printchar('\n');
//	printf("%s\n", mx_nbr_to_hex(52));
//    printf("%s\n", mx_nbr_to_hex(1000));
//    printf("%s\n", mx_nbr_to_hex(2147483647));
//	printf("%lu\n", mx_hex_to_nbr("C4"));
//    printf("%lu\n", mx_hex_to_nbr("FADE"));
//    printf("%lu\n", mx_hex_to_nbr("ffffffffffff"));
//    printf("%lu\n", mx_hex_to_nbr(NULL));

//mx_itoa(-2147483648);
//printf("%s\n", mx_itoa(INT_MAX));
//    printf("%s\n", mx_itoa(123));
//    printf("%s\n", mx_itoa(0));
//    printf("%s\n", mx_itoa(-123));
//    printf("%s\n", mx_itoa(INT_MIN));


//	int arr[] = {12345, 54321};
//	mx_foreach(arr, 2, mx_printint);
//	char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//	int count = 0;
//	printf("%d\n%d", mx_binary_search(arr, 6, "ab", &count), count);
	//printf("%d\n", count);
//	char *arr[] = {"abc", "xyz", "ghi", "def"};
//	printf("%d\n", mx_bubble_sort(arr, 4));
	//printf("%d\n", mx_strlen("12345"));
//	char str[] = "ONE";
//	mx_swap_char(&str[0], &str[1]);
//	printf("%s\n", str);
//	mx_swap_char(&str[1], &str[2]);
//	printf("%s\n", str);
//	char str[] = "game over";
//	mx_str_reverse(str);
//	printf("%s\n", str);

//    char *str = strdup("Hello");
//    printf("%s\n", str);
//    mx_strdel(&str);
//    printf("%s\n", str);

//    void qwerty() {
//        char **hui = (char **)malloc(sizeof(char *) * 3);
//        char *json = "11cm";
//        char *epson = "15 cm";
//
//        hui[0] = strdup(json);
//        hui[1] = strdup(epson);
//        hui[2] = NULL;
//
//        mx_del_strarr(&hui);
//    }
//
//    int main() {
//        qwerty();
//        system("leaks -q a.out");
//    }

//    printf("%d\n", mx_get_char_index("123123q", 'q'));
//    printf("%d\n", mx_get_char_index(NULL, 'q'));
//    printf("%d\n", mx_get_char_index("adasgxcmdf", 'd'));
//    printf("%d\n", mx_get_char_index("adasgxcmdf", NULL));

    char str1[] = "0123456789";
    char *dst1 = strndup(str1, 20);
    mx_printstr(dst1);
    free(dst1);
//    printf("%s\n", dst1);
    //write(1, dst1, 1);
//
    mx_printchar('\n');
    char *dst2 = mx_strndup(str1, 20);
    mx_printstr(dst2);
    free(dst2);
//    printf("%s\n", dst2);

//    write(1, dst2, 1);

////
//	str = mx_strdup(str1);

//    const char src[11] = "yo neo bro";
//    char dst[13];
//    printf("%s\n", strncpy(dst, src, 3));
//    printf("%s", mx_strncpy(dst, src, 3));
//	printf("%d\n", mx_strcmp("Xxxa", "Xxxd"));
//	printf("%d\n", mx_strncmp("Xxxa", "Xxxd", 3));
//	char str[10] = "Xxxx\0";
//	char str1[5] = "QqqQ\0";
//	printf("%s\n", mx_strcat(str, str1));
//	//#include <string.h>
//    const char str1[] = "sdfgsdf";
//    const char str2[] = "";
//    char *str3;
//    char *str4;

//    str3 = strstr(str1, str2);
//    printf("%s\n", str3);
//    str4 = mx_strstr(str1, str2);
//    printf("%s\n", str4);
//    printf("%s\n", mx_strstr("xxx", "xxxq"));
//	printf("%s\n", strstr(NULL, "xxxq"));
	//printf("%d\n", mx_get_substr_index("McDonalds", "Don"));
	//printf("%d\n", mx_get_substr_index("McDonalds Donuts", "on"));
	//printf("%d\n", mx_get_substr_index("McDonalds", "Donq"));
	//printf("%d\n", mx_get_substr_index("McDonalds", NULL));
	//printf("%d\n", mx_get_substr_index(NULL, "Don"));
//    const char string[] = "yo, yo, yo Neo";
//    const char sub[] = "yo";
//    printf("%d", mx_count_substr("yo yo, yo, Neo","yo"));
//printf("%d\n", mx_count_words("  follow  *   the  white rabbit ", '*'));
//	char *str = mx_strnew(10);

//    mx_strtrim("\f  My name... is Neo  \t\n ");
//	printf("%s", mx_strtrim("\f    My name... is Neo  \t\n "));

//	char *str = "\f    My name...          is  \r Neo \t\n ";
//	char *res = mx_del_extra_spaces(str);
//	printf("%s\n", res);

//	char *str = "**Good bye,**Mr.*Anderson.****";
//	char **res = mx_strsplit(str, '*');
//	for(int q = 0; q < 3; q++) {printf("%s\n", res[q]);}

	//char *res = mx_ultra_del_extra_spaces(str, '*');
	//for (int i = 0; i < 4; i++)
	//	printf("%s\n", res[i]);
	//printf("%s\n", res);

//	const char s1[5] = "this\0";
//	const char s2[11] = "dodge \0";
//	const char *s3 = NULL;
//	char *res = mx_strjoin(s3, s3);
//	printf("%s\n", res);
	//const char *str = "McDonalds";
	//const char *sub = "alds";
	//const char *replace = NULL;//"uts";
	//printf("%s\n", mx_replace_substr(str, sub, replace));

//	printf("%s\n", mx_file_to_str("qwe"));

//	#include <string.h>
	//char src[] = "wxsDDDDz";
	//char dst[] = "DDDDz";
	//int c = 'q';
	//size_t len = 0;
	//printf("%s\n", mx_memset(b, c, len));
	//printf("%s\n", memset(b, c, len));
	//printf("%s\n", mx_memcpy(q, b, len));
	//printf("%s\n", memcpy(q, b, len));
	//printf("%s\n", memccpy(dst, src, c, len));
	//printf("%s\n", dst);
	//printf("%s\n", mx_memccpy(dst, src, c, len));
	//printf("%d\n", memcmp(dst, src, len));
	//printf("%s\n", mx_memchr(src, 'r', 2));
	//printf("%s\n", mx_memrchr(src, 'Z', 4));
	//printf("%s\n", mx_memmem(src, 8, dst, 5));
	//char *res = mx_realloc(src, 10);
	//printf("%s\n", res);
//	char *str = NULL;
//	char *str1 = "BBBBBB";
//	char *str2 = "AAAAAA";
//	t_list *list = NULL;
//	mx_push_back(&list, str);
//	mx_push_back(&list, str1);
//	mx_push_back(&list, str2);
//    mx_push_front(&list, str);
//    mx_push_front(&list, str1);
//    mx_push_front(&list, str2);
//    printf("%d", mx_list_size(NULL));
//	mx_pop_back(&list);
	//mx_pop_back(&list);
//	mx_pop_front(&list);


//bool (*cmp)(void *a, void *b) {
//        if (a > b) {
//            return true;
//        }
//        else {
//            return false;
//        }
//}
//    mx_sort_list(list, cmp);
//	for (int i = 0; i < 3; i++) {
//		printf("%s\n", list->data);
//		list = list->next;
//	}
	//char res[] = "gameover";
	//mx_str_reverse(res);
	//printf("%s\n", res);
//
	system("leaks -q libmx");
	return 0;
}

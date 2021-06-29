#include <stdio.h>
#include "string.h"

int main() {
    printf("Hello, World!\n");
    printf("=====================\n\n");

    char src[30], dest[30];
    strcpy(src, "abcdefg");
    strcpy(dest, "hijklmn");
    strcat(dest, ", ");
    strcat(dest, src);
    strcat(dest, ", ");
    strncat(dest, src, 3);
    printf("%s \n", dest);
    printf("=====strcpy====strcat=====strncat=======\n\n");

    char *idx = (char *)memchr(dest, 'd', 20);
    printf("|%c|之后的字符串是 [%s]，长度为%d \n", 'd', idx, strlen(idx));
    printf("=========memchr============\n\n");

    char *chr = strchr(dest, 'd');
    printf("%s \n", chr);
    printf("=========strchr============\n\n");


    char *str1 = "hello";
    char *str2 = "HELLO";
    int res_memcmp = memcmp(str1, str2, 5);
    int res_strncmp = strncmp(str1, str2, 3);
    // 小写字母的ASCII码大于大写字母的ASCII码
    printf("str1=[%d], str2=[%d], %d \n", str1, str2, res_memcmp);
    printf("str1=[%d], str2=[%d], %d \n", str1, str2, res_strncmp);
    printf("==========memcmp===========\n\n");

    printf("Befor memmove dest = %s, src = %s\n", dest, src);
    memmove(dest, src, 7);
    printf("After memmove dest = %s, src = %s\n", dest, src);
    printf("===========memmove==========\n\n");


    //memset()

    //getchar();
    return 0;
}

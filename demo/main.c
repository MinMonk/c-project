#include <stdio.h>
#include <string.h>

int main() {


    /*char str2[50], str1[50];
    strcpy(str2,  "This is source");
    strcpy(str1, "This is destination");*/
    // char *str1 = "This is destination";
    // char *str2 = "This is source";
    // strcat(str1, str2);
    // printf("最终的目标字符串： |%s| \n", str1);


    char *str1 = "abcdefg";
    char *c = ",";
    char *str2 = "hijklmn";

    printf("%X, %X, %X \n", str1, c, str2);
    strcat(str1, c);
    printf("%X, %X, %X \n", str1, c, str2);
    strcat(str1, str2);
    printf("%X, %X, %X \n", str1, c, str2);
    printf("[%s], [%s]\n", str1, str2);

    int a = 1;
    printf("%d \n", sizeof a);

    printf("=======================\n");
    char cs1[20] = "abcdefj";
    char cs2[20] = "hijklmn";
    char b = ',';
    printf("%X, %X, %X \n", cs1, b, cs2);
    strcat(cs1, ",");
    printf("%X, %X, %X \n", cs1, b, cs2);
    strcat(cs1, cs2);
    printf("%X, %X, %X \n", cs1, b, cs2);
    printf("[%s], [%s] \n", cs1, cs2);

    //char *res = strcat(str1, str2);
    // int cmp = memcmp(str1, res, strlen(res));
    // int scmp = strncmp(str1, res, strlen(res));
    // printf("最终的目标字符串： %s, %s, %d, %d\n", str1, res, cmp, scmp);

    /*hello("monk");
    test_strcpy();
    test_strcat("abcdef", "hijklmn");
    test_strncat("abcdef", "hijklmn", 3);
    test_memchr("abcdef", 'c', 3);
    test_strchr("abcdef", 'c');
    test_strncmp("abcdef", "hijklmn", 3);
    test_memcmp("abcdef", "hijklmn", 3);*/

    return 0;
}

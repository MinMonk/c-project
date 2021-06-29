//
// Created by admin on 2021/6/29.
//

#include <stdio.h>
#include "../include/strfunc.h"
#include "string.h"


int hello(char *name){
    printf("hello %s. \n", name);
    printSplitLine("hello");
    return 0;
}

void printSplitLine(char *methodName){
    printf("==============%s==============\n\n", methodName);
}


void test_strcpy(){
    char src[30], dest[30];
    strcpy(src, "abcdefg");
    strcpy(dest, "hijklmn");

    printf("src=[%s], dest=[%s] \n", src, dest);
    printSplitLine("strcpy");
}

void test_strcat(char *src, char *dest){
    strcat(dest, ", ");
    printf("src=[%s], dest=[%s] \n", src, dest);
    strcat(dest, src);
    printf("src=[%s], dest=[%s] \n", src, dest);
    printSplitLine("strcat");
}

void test_strncat(char *src, char *dest, int length){
    strncat(dest, ", ", length);
    strncat(dest, src, length);
    printf("src=[%s], dest=[%s] \n", src, dest);
    printSplitLine("strncat");
}

void test_memchr(char* dest, char c, int length){
    char *idx = (char *)memchr(dest, c, length);
    printf("|%c|之后的字符串是 [%s] \n", c, idx);
    printSplitLine("memchr");
}

void test_strchr(char* dest, char c){
    char *chr = strchr(dest, c);
    printf("%s \n", chr);
    printSplitLine("strchr");
}

void test_memcmp(char *str1, char *str2, int n){
    int res = memcmp(str1, str2, n);
    // 小写字母的ASCII码大于大写字母的ASCII码
    printf("str1 = [%s] 和 str2 = [%s]比较后的结果为 %d \n", str1, str2, res);
    printSplitLine("memcmp");
}

void test_strncmp(char *str1, char *str2, int n){
    int res = strncmp(str1, str2, n);
    // 小写字母的ASCII码大于大写字母的ASCII码
    printf("str1 = [%s] 和 str2 = [%s]比较后的结果为 %d \n", str1, str2, res);
    printSplitLine("strncmp");
}

void test_memmove(char* src, char* dest, int length){

    printSplitLine("memmove");
}

//
// Created by admin on 2021/6/29.
//

#ifndef DEMO_STRFUNC_H
#define DEMO_STRFUNC_H


int hello(char*);

/**
 * 打印输出间隔符=====以及输出当前测试的方法名称
 */
void printSplitLine(char*);

/**
 * 把 src 所指向的字符串复制到 dest
 */
void test_strcpy();

/**
 * 将字符串src追加到dest的后面<br/><br/>
 * 当前测试方法中，为了打印输出效果，添加了逗号分隔
 */
void test_strcat(char *src, char *dest);

/**
 * 将字符串src的前n个字节追加到dest的后面<br/><br/>
 * 当前测试方法中，为了打印输出效果，添加了逗号分隔
 */
void test_strncat(char *src, char *dest, int n);

/**
 * 在目标字符串dest中的前n个字节中去匹配字符c出现的位置，如果匹配到了则返回字符c及c以后的字符串，否则返回NULL<br/><br/>
 * 同strchr函数的区别是：emchr处理的对象是内存地址，如果一段内存中有0x0的话，不能用strchr去查找的,因为遇到0x0会当作字符串的结束符停止。而mem是根据后面的n停止
 */
void test_memchr(char *dest, char c, int n);

/**
 * 在目标字符串dest中的前n个字节中去匹配字符c出现的位置，如果匹配到了则返回字符c及c以后的字符串，否则返回NULL<br/><br/>
 * 同memchr函数的区别是：strchr处理的对象是字符串，如果字符串中出现了\0，那么就会终止
 */
void test_strchr(char *dest, char);

/**
 * 把 str1 和 str2 的前 n 个字节进行比较
 */
void test_memcmp(char *str1, char *str2, int n);

/**
 * 把 str1 和 str2 进行比较，最多比较前 n 个字节
 */
void test_strncmp(char *str1, char *str2, int n);

/**
 * 另一个用于从 src 复制 n 个字符到 dest 的函数
 */
void test_memmove(char*, char*, int);

#endif //DEMO_STRFUNC_H

/*

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

// 该函数还未进行测试
//memset()

*/

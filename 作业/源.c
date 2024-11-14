#include <stdio.h>  

int main01() {
    int x = 10; // 声明一个整数变量x并初始化为10  
    int* ptr;   // 声明一个指向整数的指针变量ptr  
    ptr = &x;   // 将x的地址赋给ptr，现在ptr指向x  
    int value = *ptr; // 通过ptr解引用，将ptr指向的值赋给value  
    printf("x的值是：%d\n", x); // 输出：x的值是：10  
    printf("ptr指向的值是：%d\n", value); // 输出：ptr指向的值是：10  
    return 0;
}
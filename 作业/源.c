#include <stdio.h>  

int main01() {
    int x = 10; // ����һ����������x����ʼ��Ϊ10  
    int* ptr;   // ����һ��ָ��������ָ�����ptr  
    ptr = &x;   // ��x�ĵ�ַ����ptr������ptrָ��x  
    int value = *ptr; // ͨ��ptr�����ã���ptrָ���ֵ����value  
    printf("x��ֵ�ǣ�%d\n", x); // �����x��ֵ�ǣ�10  
    printf("ptrָ���ֵ�ǣ�%d\n", value); // �����ptrָ���ֵ�ǣ�10  
    return 0;
}
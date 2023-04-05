//
// Created by DELL on 2023/4/4.
//
#include <stdio.h>
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
//int main()
//{
//    int area = 0;
//    area = LENGTH*WIDTH;
//    printf("value of area:%d",area);
//    printf("%c",NEWLINE);
//    return 0;
//}

//变量
//定义：用数据类型描述的标识符(没有const修饰的)
//声明-->创建（只可以创建一次）  引用---->操作（赋值，赋值可以分为：（1）运算符赋值，例如：a=a+2 （2）函数赋值 ，例如：scanf("%d",&a)（3）定义赋值 例如：int a=10）

//左值和右值
// leftvalue--->左值，即赋值运算符左边的（命名空间，也称为变量名）
// rigthvalue--->右值，赋值运算符右边的（常量，变量，表达式，数组元素，函数引用）


int main() {
    printf("int =%d\n",sizeof(int));
    printf("long =%d\n",sizeof(long ));
    printf("short =%d\n",sizeof(short));
    printf("---------------------------------\n");
    printf("double =%d\n",sizeof(double ));
    printf("float =%d\n",sizeof(float));
    printf("long double =%d\n",sizeof(long double ));
    printf("---------------------------------\n");
    printf("unsigned int =%d\n",sizeof(unsigned int));
    printf("unsigned long =%d\n",sizeof(unsigned long ));
    printf("unsigned short =%d\n",sizeof(unsigned short ));
    printf("---------------------------------\n");
    printf("char =%d\n",sizeof(char));
    printf("unsigned char =%d\n",sizeof(unsigned char));
    return 0;
}
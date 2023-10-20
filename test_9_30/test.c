#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体
//结构体类型的声明
//结构体初始化
//结构体成员访问
//结构体传参
//1. 结构体的声明
//1.1 结构的基础知识
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
//1.2 结构的声明
//描述一个学生。一些数据
//名字
//年龄
//电话
//性别
//struct 结构体关键字   Stu - 结构体标签  struct Stu 这两个组合起来表示新创建的类型叫做结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//这一个语句表示的是一个声明  叫做结构体声明
//}; s1, s2, s3;//s1,s2,s3是三个全局的结构体变量
//typedef struct Stu//typedef把这个类型重新起个名字
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu1;//新起的名字,依然是一个类型
//int main()
//{
//	struct Stu s1;//创建结构体变量      是局部的结构体变量
//	Stu1 s2;//用Stu1这个类型也可以创建变量了
//	return 0;
//}
//1.3 结构成员的类型
//结构的成员可以是标量、数组、指针，甚至是其他结构体。
//1.4 结构体变量的定义和初始化
//有了结构体类型，那如何定义变量，其实很简单。
//struct S
//{
//    int a;
//    char c;
//    char arr[20];
//    double d;
//};
//struct T
//{
//    char ch[10];
//    struct S s; //结构的成员可以是其他结构体
//    char *pc;
//};
//int main()//结构体初始化
//{
//    char arr[] = "hello bit\n";
//    struct T t = { "hehe",{100,'w',"hw",3.14},arr };//ch数组里面放hehe，s是结构体里面应该用大括号，arr是数组名，是arr数组首元素地址，放个pc
//    printf("%s\n", t.ch);//hehe
//    printf("%s\n", t.s.arr);//hw
//    printf("%lf\n", t.s.d);//3.14
//    printf("%s\n", t.pc);//hello bit
//    return 0;
//}
//2. 结构体成员的访问
//结构体变量访问成员
//结构变量的成员是通过点操作符（.）访问的。点操作符接受两个操作数。
//结构体指针访问指向变量的成员
//有时候我们得到的不是一个结构体变量，而是指向一个结构体的指针。
//3. 结构体传参
//函数传参的时候，参数是需要压栈的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//结构体传参的时候，要传结构体的地址。
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu1;
//void print1(Stu1 tmp)//把s的数据交给了tmp
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}//通过调用print1函数，打印时通过结构体变量找到了成员
//void print2(Stu1* ps)//参数不再是结构体变量，而是能够接收这个结构体变量地址的指针。
//{                   //指针的大小是4个字节或者8个字节。而这里创建的是指针变量，而通过指针再找到原来存储的数据从而打印
//	printf("name: %s\n", ps->name);//ps是结构体指针
//	printf("age : %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex : %s\n", ps->sex);
//}
//int main()
//{
//	Stu1 s = {"里斯",40,"16666888822","男"};//通过Stu创建s，s初始化   创建的s是需要空间的，s是实参，实参传给形参时，形参是实参的一份临时拷贝，则这份临时拷贝也就是tmp也会产生相应的内存大小
//	print1(s);//进行打印结构体数据，通过封装一个函数来打印
//	//通过结构体传参，另外函数传参的时候可以传送地址
//	//print1
//	//print2
//	print2(&s);//print2串钩去相当于一个指针，传过去的是地址
//	return 0;
//}
//压栈
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}//空间分为三个区域：栈区、堆区、静态区
//栈区：局部变量、函数的形式参数、函数调用也开辟空间
//堆区：动态内存分配、malloc/free、reailoc、calloc
//静态区：全局变量、静态变量
//在栈区为main函数开辟的空间，main函数把空间内的区域分给局部变量。在传递参数的时候，仍然需要在栈区开辟空间。
//在函数调用的时候也需要在栈区开辟空间
//当函数传参的时候，把参数传过去的动作叫做压栈操作
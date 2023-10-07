#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//常见关键字 auto  break   case  char  const   continue  default  do   double else  enum   
//extern float  for   goto  if   int   long  register    return   short  signed
//sizeof   static struct  switch  typedef union  unsigned   void  volatile  while 
//auto int a = 10;//局部变量前面都有一个auto只不过局部变量都是（自动变量）  自动创建 自动销毁
//break 在c语言中两个地方会用到  ①循环中，break可以停止循环
//char 字符类型  const  在常量中，有一种常量叫做常变量，使用const修饰
//continue 用在循环中   default默认  do while循环   double类型
// else  enum枚举   extern引入外部符号   float单精度浮点数  for循环  if语句goto语句
// int整型  long长整型  register寄存器关键字（计算机存储（从大到小）访问速度（从低到高）  硬盘→内存→高速缓存→寄存器）
// register int a = 10;建议把a定义成寄存器变量    return返回   short短整型  
// signed有符号数  int定义的变量是有符号的。可以放负数也可以放正数   unsigned无符号数  即使是赋值负数仍然是正数
//sizeof计算大小  static静态  struct结构体关键字  switch case语句  typedef类型定义 union联合体/共用体
//void 无/空  while循环   关键字不能和变量名冲突

//typedef 顾名思义是类型定义-类型重定义，这里应该理解为类型重命名。
//void main()
//{
//	typedef unsigned int u_int;//把unsigned int这个类型名重新起了个名字叫做 （u_int别名）
//	unsigned int num = 20;
//	u_int num2 = 20;//此时num和num2的类型是属于同一类的
//	return 0;
//}
//void test()       
//{                 其次；test函数中 a属于一个局部变量创建a=1之后加1
//	int a = 1;    另外；a作为一个局部变量从进入函数范围生命周期开始，从函数范围离开生命周期结束，然后销毁
//	a++;          故此；会一直打印2 直到i>5  结果会显示5个2
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5) 首先；代码先运行到这然后往下运行test函数
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// /void test()       
//{                 
//	static int a = 1;    
//	a++;          
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5) 
//	{
//		test();
//		i++;
//	}
//	return 0;
// 变量有两个属性①生命周期②作用域
//1.static 当tastic修饰局部变量时，局部变量的生命周期延长 以上面为例a的值为2，3，4，5，6（改变的是生命周期）
//2.当static修饰全局变量时，改变变量的作用域 让静态的全局变量只能在自己所在的源文件内部使用，如果出了源文件就没法使用了
//3.static修饰函数时改变了函数的链接属性，外部连接属性变成内部链接属性
//int main()
//{
//extern是声明外部符号的
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//#define 定义标识符常亮
//#define MAX 100
//#define 可以定义宏——宏带参数
//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 30;
//	//函数的方式表示
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}
//内存是电脑上特别重要的存储器，计算机中程序的运行都是在内存中进行的 。
//所以为了有效的使用内存，就把内存划分成一个个小的内存单元，每个内存单元的大小是1个字节。
//为了能够有效的访问到内存的每个单元，就给内存单元进行了编号，这些编号被称为该内存单元的地
//址。
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//&a取地址
//	//printf("%p\n", &a);//%p打印地址
//	//printf("%p\n", p);
//	*p = 20;//*→解引用操作符  找到它所指向的那个对象a，通过*p找到a改为20
//	printf("a = %d\n", a);
//	//有一种变量是用来存放地址的叫做指针变量
//	//printf("%p\n", &a);
//	return 0;
//}
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    printf("%d\n", sizeof(pc));//指针大小8个字节
//    /**pc = 'q';
//    printf("%c\n", ch);*/
//    return 0;
//}
//int main()
//{
	//int a = 10;//int的大小是4个字节  a是个变量，a的类型是int
	//printf("%p\n".&a);%p打印地址   p是个变量，p的类型是int*  *代表的意思p是指针变量 是如何一个指针变量呢  p指向的那个对象是a说明类型是int
	//int* p = &a;//p是一个变量 是一个指针变量 可以存放指针的大小
	//printf("%p\n", p);//同样是个地址
	//通过p找到a，*→解引用操作符  找到它所指向的那个对象a，通过*p找到a改为20
//	*p = 20;
//	printf("a = %d\n", a);
//	return 0;
//}
//int main()
//{
//	double d= 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//	printf("%d\n",sizeof(pd));//地址在64位的系统是8个字节
//}
//结构体
//char double int
//人  书 都是复杂对象
//人   名字+身高+年龄+身份证号......
//书   书名+作者+出版社+定价+书号.....
//struct 结构体关键字
//创建一个结构体类型
//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};//书的类型
//int main()
//{    //利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "c语言程序设计",55 };
//	struct Book* pb = &b1;
	//利用pb打印我的书名和价格
	//printf("书名：%s\n", (*pb).name);
	//printf("价格：%d元\n", (*pb).price);
	// 指针  解引用简化操作
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	// . 结构体变量.成员
	// -> 结构体指针->成员
	//printf("书名:%s\n", b1.name);//打印字符串用%s打印  “.”操作符相当于“的”
	//printf("价格:%d\n", b1.price);
//	//b1.price = 15;
//	//printf("修改后的价格：%d\n", b1.price);
//	return 0;
//}
//数组名本质上是一个地址

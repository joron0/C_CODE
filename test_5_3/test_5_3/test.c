#define _CRT_SECURE_NO_WARNINGS 1

//包含一个叫stdio.h的文件
//std-标准 standard input output
#include <stdio.h>


//int main() //主函数-程序的入口-main函数有且仅有一个 
//   {
//   printf("hehe\n");//函数-print function - printf - 打印函数 int 是整型的
// return 0;        //main前面的int表示main函数调用返回一个整型值
//}                
// char·字符型数据类型
//int main() 
//{
 //   char ch = 'A';//内存
  //  printf("%c\n",ch);// %c --打印字符格式的数据
//    return 0;
//}
//int main() 
//{
//	int age = 20;
//	printf("%d\n", age);//%d -- 打印整型十进制数据
//	return 0;
//}
//short int - 短整型
//int - 整型
//long 长整型
//int mian()
//{                             %d - 打印整型
//	long num = 100;             %c - 打印字符
//	printf("%d\n", num);        %f - 打印浮点数字-打小数
//	return 0;                   %p - 以地址的形式打印
//}                             %x - 打印16进制数字
//int main()
//{
//	float f = 5.0;
//	printf("%f\n", f);
//	return 0;
//}
//int main()
//{
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));//char → 1个字节  字符数据类型    最大值2的8位
//	printf("%d\n", sizeof(short));//short → 2个字节 短整型  最大值2的16位
//	printf("%d\n", sizeof(int));//int → 4个字节     整型     最大值2的32位
//	printf("%d\n", sizeof(long));//long → 4/8个字节   长整型    最大值2的32位
//	printf("%d\n", sizeof(long long));//long long → 8个字节 更长的整型    最大值2的64位
//	printf("%d\n", sizeof(float));//float → 4个字节 单精度浮点数     最大值2的32位
//	printf("%d\n", sizeof(double));//double → 8个字节 双精度浮点数     最大值2的64位
//	return 0;
//}
//int main()
//{
//	short age = 20;//向内存申请2个字节=16bit位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节存放小数
//	return 0;
//}
//变量分类→局部变量和全局变量
//int num1 = 20;//num1→全局变量
//int main ()
//{
	//当局部变量和全局变量一样时，优先输出局部变量
//	int num1 = 10;//num1→局部变量
//	return 0;
//}
//int main()
//{
//		int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
/* int main()
{
	//计算2个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数scanf
	scanf("%d%d",&num1 , &num2);//取地址符号&   %d%d两个整数就两个%d
	//int sum = 0;c语言语法规定，变量要定义在当前代码块的最前面//
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}*/
//变量的作用域和生命周期
//作用域：限定这个名字的可用性的代码范围
//局部变量的作用域是变量所在的局部范围
//全局变量的作用域是整个工程    extern是声明外部符号的
/* int main()
{
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
} */
//生命周期：变量的生命周期指的是变量创建到变量销毁之间的一个时间段
//局部变量的生命周期：进去作用域→生命周期开始，出作用域→生命周期结束
//全局变量的生命周期：整个程序的生命周期

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//函数递归
//程序调用自身的编程技巧称为递归（ recursion）。
//递归做为一种算法在程序设计语言中广泛应用。 一个过程或函数在其定义或说明中有直接或间接
//调用自身的一种方法，它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解，递归策略
//只需少量的程序就可描述出解题过程所需要的多次重复计算，大大地减少了程序的代码量。
//递归的主要思考方式在于：把大事化小
//递归的两个必要条件
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//2.每次递归调用之后越来越接近这个限制条件。
//int main()//main函数里面包含一个一个main函数就是一个简单的递归
//{
//	printf("hehe\n");//递归常见的错误：栈溢出 Stack overflow
//	main();
//		return 0;
//}//stack overflow 当main函数一直在调用自己，栈空间被耗干就会显示stack overflow
//接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234，输出1234
//void print(int n)//打印1234   不停的执行n直到n不满足限制条件往下执行，直到打印为1，然后返回12里面打印2，返回123里面打印3，返回1234里面打印4
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234   当1234%10=4  123/10=12 12%10=2 
//	//递归 函数自己调用自己
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12)3 4
//	//print(1)2 3 4
//	//
//	return 0;
//}
//my_strlen(char* str)//char的地址放到指针变量里面
//{
//	int count = 0;
//	while(*str != '\0')//解引用
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//当指针变量是第一个元素地址时，就解引用判断一下，然后指针变量就是地址+1，count计数器统计字符
//int main()
//{
//	char arr[] = "bit";//每个元素都是char，首元素的地址就是char的地址
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}
//递归的方法
//把大事化小
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0
//3
//int my_strlen(char* str)
//{
//	if (*str != '\0')//当第一个字符不是\0
//		return 1 + my_strlen(str + 1);//长度是1+my_strlen,求的是it的长度。首先str变量是指向b的，str+1指向“bit”中的i，str+1就是i的地址
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}
//递归与迭代
//求n的阶乘
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)//fac(n) 当n<=1，1。当n>1，n*fac(n-1)。
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
// }
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}
//求第n个斐波那契数。斐波那契数列 1 1 2 3 5 8 13 21 34 55 ......
//Fib(n)  当n<=2,1。当n>2,Fib(n-1)+Fib(n-2)。
// 递归的方法
//int count = 0;
//int Fib(int n) 
//{
//	if (n == 3)//测试第三个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)//斐波那契数列 1 1 2 3 5 8 13 21 34 55 ......
//{             //利用循环的方法  当a+b=c，再把a=b，b=c，然后c再j--，当n是四时，4-1=3.3-1=2  然后前两个斐波那契数就是2和3
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - 测试驱动开发
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	//printf("count = %d\n", count);
//	return 0;
//}
//什么时候用递归，什么时候用循环
//栈溢出的时候不能用递归
// 汉诺塔   青蛙跳台阶
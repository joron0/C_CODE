#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*int main()
{
	//计算2个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//取地址符号&   %d%d两个整数就两个%d
	//scanf strcpy strlen strcat
	//int sum = 0;c语言语法规定，变量要定义在当前代码块的最前面//
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}*/
//常量  字面常量，const修饰的常变量，#define定义的标识符常量，枚举常量
//int main()
//{  
// 字面常量 3 ; 100; 3.14;
//	//const - 常属性
//	const int num = 4;
//	//const修饰的常变量
//	//const int n = 10;n是变量，但又有常属性，所以我们称n为常变量
//	printf("%d\n", num);
//	return 0;
//}
//#define 定义的标识符常量
//#define MAX 10
//int main() 
//{
//	int arr [MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//枚举常量
//枚举- 一一列举 
//性别：男，女，保密
//枚举关键字 - enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//MALE,FEMALE,SECRET - 枚举常量
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//字符串+转义字符+注释
//字符串：由双引号引起来的一串字符称为字符串字面值或简称字符串。
//注：字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算作字符串内容。
//"acfaf"   "hello"  //""空字符串//
//int main ()
//{
//	char arr1[] = "abc";//把一个字符串放进一个数组
//	//"abc"→'a' 'b' 'c' '\0' 双引号字符串中包含一个\0→’\0’是转义字符，ASCII码是0，是字符串结束的标志.0是数字0   '0'是字符0，ASCII是48.
//	char arr2[] = {'a','b','c','\0'};//单引号字符，双引号字符串
//	//'a' 'b' 'c'→'a'的值是97，'A'的值65
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//打印字符串用%s
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//长度是3
//	char arr2[] = {'a','b','c','\0'};//加上0是3，不加0随机值 
//	printf("%d\n", strlen(arr1));//strlen - string length - 计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//转义字符→转变原来的意思
//\t - 水平制表符  \n - 换行  
//int main()
//{
//	printf("c:\\test\\32\\test.c");
//	\\ - 用于表示一个反斜杠，防止它被解释为一个转义序列符
//	return 0;
//}
//int main()
//{
////	printf("%c\n",'a');//%c→打印一个字符
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");  \" - 用于表示一个字符串内部的双引号 、用来转义其他字符，与其他字符可表示不同含义
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//该字符串长度为13  \t为一个字符  \32为一个字符
//     \32 - 32是2个8进制数字
//     32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符     
//     32 -- >（转换为） 10进制 是 26 ->作为ASCII码值代表的字符 →
//	printf("%c\n", '\32');
//	\ddd - ddd表示1-3个八进制的数字。如：\130X
//    printf("%c\n", '\x61');
//  dd表示2个十六进制数字。如：\x30 0
//	return 0;
//} 字符0 - ASCII值是48 字符9 - ASCII值是57 字符A - ASCII值是65 字符B - ASCII值是66 字符a - ASCII值是97 字符b - ASCII值是98
//int main()
//{
//	int input = 0;
//	printf("打开b站\n");
//	printf("你要好好学习吗？（1/0）>: ");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//int main()
//{
//	int prize = 0;
//	int line = 0;
//	printf("加入比特\n");
//	printf("买彩票是否中奖？（1/0）>: ");
//	scanf("%d", &prize);
//	if (prize == 1) 
//		printf("赢取白富美\n");
//	else 
//		while (line < 20000) {
//		printf("敲一行代码；%d\n", line);
//		line++;
//	}
//		if (line >= 20000) {
//			printf("赢取白富美\n");
//		}
//	return 0;
//}
//自定义函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = num1+num2;
//	sum = Add(num1, num2);//num1 - x,num2 - y,sum - z,return z ;(返回z到sum)
//	//sum = a + b;
//	//sum = Add(a, b); //a - x, b - y, sum - z, return z; (返回z到sum)
//	//sum = Add(2, 3);
//	printf("sum = %d\n", sum);
// }
//函数 f（x） = 2*x+1;   f（x,y） = x+y;
//库函数
//数组
//数组的定义：一组相同类型元素的集合
//数组定义   int arr[10] = {1,2,3,4,5,6,7,8,9,10};定义一个整型数组，最多放10个元素
//数组的使用
//int main()
//{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
//	printf("%d\n", arr[4]);//下标的方式访问元素     下标是从0开始的，0，1，2，3，4，5，6，7，8，9
//	arr[下标];打印第五个元素，就是输出5的下标 - arr[4]
// 	   打印数组的全部内容  就是输出0-9的下标
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d", arr[i]);
	//	i++;
	//}
//	char ch[20];//存字符用char，用一个名字给定一个方块，里面可以存20个字符
//	float arr2[2];//短整型方块里面存放2个字符
//	return 0;
//}
// 算术操作符 + - * / %
// 移位操作符 >>  <<
// 位操作符 &  ^ | 
// 赋值操作符 = += -= *= /= &= ^= |= >>= <<=
// 单目操作符   ！是逻辑反操作（真变假，假变真） -是负值 +是正值 &是取地址 sizeof是操作数的类型长度（以字节为单位,计算一个变量或者类型的大小） ~是对一个数的二进制按位取反
// --是前置、后置--   ++前置、后置++ *间接访问操作符（解引用操作符） （类型） 强制类型转换  
//int main()
//{
//	int a = 5 % 2;取模
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
////  移（2进制）位操作符
////  << 左移
////  >> 右移
//	int a = 1;
//	//01
//	//整型1占4个字节 - 32个bit位
//	//0000000000000000000001
//	int b = a << 1;//左移一位相当于10再转换为十进制输出就是2，在这里a的值没有改变
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//(2进制)位操作
// & 按位与
// | 按位或
// ^ 按位异或
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
	//011
	//101
	//001 
	// 运算规则：只有两个数的二进制同时为1，结果才为1，否则为0。（负数按补码形式参加按位与运算）即 0 & 0 = 0 ，0 & 1 = 0，1 & 0 = 0， 1 & 1 = 1。
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
	//011
	//101
	//111
//  运算规则：参加运算的两个数只要两个数中的一个为1，结果就为1。即  0 | 0= 0 ,  1 | 0= 1  ， 0 | 1= 1  ,  1 | 1= 1 。
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
	//011
	//101
	//110
//  运算规则：参加运算的两个数，如果两个相应位为“异”（值不同），则该位结果为1，否则为0。即 0 ^ 0=0  ， 0 ^ 1= 1  ， 1 ^ 0= 1  ， 1 ^ 1= 0 。
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//= 赋值     == 判断相等
//	a += 10;
//	a = a + 10;
//	a -= 20;
//	a = a - 20;
//	a &= 2;
//	a = a & 2;
	//复合赋值符
//	return 0;
//}
//单目操作符
//双目操作符
//三目操作符
//int main()
//{
	//int a = 10;
	//int b = 20;
	//a + b;// +表示双目操作符
	//c语言中我们表示真假
	//0表示假    非0表示真
	//int a = 10;
	//int a = -2;
	//int b = -a;
	//int c = +3;//正号通常都会省略 
	//printf("%d\n", a);
	//printf("%d\n", !a);
	//return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));//4    计算的是变量或者类型所占空间的大小，单位是字节
//	printf("%d\n", sizeof a );
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof int);不带括号不行
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//10个整型元素的数组
	//int sz = 0;
	//printf("%d\n", sizeof(arr));//10*sizeof(int) = 40
	////计算数组的元素个数
	////个数 = 数组总大小除以每个元素的大小
	//sz = sizeof(arr) / sizeof(arr[0]);
	//printf("sz = %d\n", sz);
	//return 0;
//}
// EOF 是 end of file表示文件结束标志值是-1，数组的大小用常量来决定
//求两个数的较大值
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);
//	return 0;
//}
//Max(int x, int y)//Max表示是一个定义函数，把num1传过来，用x接收，定义x。num2同样也是。
//{
//	if (x > y)
//		return x;
//	else//表示否则就是y > x
//		return y;
//}//大括号表示结构体
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;//让一个最终求得的较大值放到一个变量当中去，让max接收Max函数的返回值
//	max = Max(num1, num2);//写一个函数叫Max，在这个函数当中有num1，num2把这两个传给Max，让它找到num1和num2当中的最大值，然后告诉我，通过返回值的方式
//	printf("max=%d\n", max);//输出打印最大值
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//6*4=24 不给数组指定大小，即可以初始化6个元素，这个数组默认就会根据后面初始化内容来确定有几个元素
//	printf("%d\n", sizeof(a));//a是一个整型变量，占内存4个字节即是4  sizeof计算大小
//	printf("%d\n", sizeof(int));//因为a是整型也可以用int
//	printf("%d\n", sizeof(arr));//计算数组的大小，单位是字节
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//计算元素的个数，arr[0]表示第一个元素，下标从0开始
//	return 0;
//}
//int main()
//{
//	int a = 0;//整型占用4个字节，32个bit位
//	int b = ~a;// ~ →按（2进制）位取反    b是有符号的整型
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	// 原码  反码  补码
//	// 负数在内存中存储的时候，存储的是二进制的补码
//	//最高位是符号位  0表示是正的，1表示负的 原码符号位不变，其他位按位取反得到反码，反码加1得到补码
//	//11111111111111111111111111111111   补码
//	//11111111111111111111111111111110   用补码减1得到反码
//	//10000000000000000000000000000001   符号位不变按位取反得到原码
//	printf("%d\n", b);//使用的，打印的是这个数的原码，int类型在计算机内存总以补码形式存储
//	}
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，a=10，再把10赋值给b，然后a再自增1
//	printf("a = %d b = %d\n", a, b);//a=11，b=10
// return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，a=10先加1，再把值赋给b
//	printf("a = %d b = %d\n", a, b);//a=11，b=11
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a--;//后置--，a=10，再把10赋值给b，然后a再自减1
//	printf("a = %d b = %d\n", a, b);//a = 9;b = 10;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = --a;//前置--，a=10先减1，再把值赋给b
//	printf("a = %d b = %d\n", a, b);//a = 9;b = 9;
//	return 0;
//}
//(类型)    强制类型转换
//int main()
//{
//	int a = (int)3.14;//在括号里面放入类型，进行强制类型转换  原来3.14是double类型，转换为int类型
//	printf("%d\n", a);
//	return 0;
//}
//关系操作符   >  >=   <   <=   !=   用于测试“不相等” ==   用于测试“相等”
//逻辑操作符   &&   逻辑与    ||   逻辑或
//条件操作符   exp1 ？ exp2 ：exp3
//逗号表达式   exp1,exp2,exp3，.....expn
// 下标引用、函数调用和结构成员   []  ()  . ->
//int main()
//{
	//真  - 非0
	//假  - 0
	//&& - 逻辑与
	//int a = 3;
	//int b = 5;
	//int c = a && b;//a为真并且b也为真，结果为真   &&为并且的意思
	//int a = 0;
	// int b = 5;
	// int c = a && b;
	//|| - 逻辑或
	//int a = 3;
	//int b = 5;
	//int c = a || b;//a和b中只要有一个为真，就为真
	//int a = 0;
	//int b = 5;
	//int c = a || b;//a和b中只要有一个为真，就为真
	//int a = 0;
	//int b = 0;
	//int c = a || b;//a和b都为假，结果为假
	//printf("c = %d\n", c);
	//return 0;
//}
//条件操作符  exp ? exp2:exp3;表达式1的结果为真，表达式2要被执行，则表达式2为整个表达式的结果;表达式1的结果为假，表达式3要被执行，则表达式3为整个表达式的结果
//       a > b ? a : b  也叫三目操作符
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int max = 0;
//	max = (a > b ? a : b);
//	(a >= b) ? (printf("a = %d 为最大值", a)) : (printf("b = %d 为最大值", b));
//	return 0;
//}
// [] - 下标引用操作符
// int main()
//{
//	int arr[10] = { 0 };
//	arr[4];// [] - 下标引用操作符     arr是这个数组，arr[4] - 访问下标为4的元素
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//()  - 函数调用操作符  
// int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);()  - 函数调用操作符
//	printf("sum = %d\n", sum);
//	return 0;
//}
// 只要是整数，内存中存储的都是二进制的补码
// 对于正数来说  原码 反码 补码都相同  存哪一个都一样
// 对于整数中的负数来说   依然存的是补码，但是要算出补码
// 原码是直接按照正负写出来的二进制序列
// 反码是原码的符号位不变，其他位按位取反得到的
// 补码是反码+1得到的
// -2
// 原码   10000000000000000000000000000010
// 反码   11111111111111111111111111111101
// 补码   11111111111111111111111111111110
//int main()
//{
//	int a[10] = { 0,1,2,3,4 };
//	int* p = a;指针
//	printf("%d\n", *(p + 4));
//	return 0;
//}
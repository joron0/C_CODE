#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//1.函数是什么
//2.库函数
//3.自定义函数
//4.函数参数
//5.函数调用
//6.函数的嵌套调用和链式访问
//7.函数的声明和链式访问
//8.函数递归
//1.函数是什么   是一个大型程序中某部分代码，由一个或多个语句块组成。负责完成某项特定任务，而且相较于其他代码，具有相对的独立性。 
// 一般会有输入参数并有返回值，提供对过程的封装和细节的隐藏。
//库函数 c语言本身提供给我们的函数
//C语言常用的库函数都有：
//IO函数
//字符串操作函数
//字符操作函数
//内存操作函数
//时间 / 日期函数
//数学函数
//其他库函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() 
//{
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//库函数
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";//将arr1的内容拷贝到arr2里面用strcpy
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy -- string copy —— 字符串拷贝  
//	//(char*destination,const cahr*source)  char*也是一种指针类型，指针用来存放地址的，返回值返回的是一个目的地地址
//	//strlen -- string length —— 字符串长度有关
//	return 0;
//}
//memst  memory —— 内存 set —— 设置
//void * ptr, int value,size_t num);   这个地址指针（ptr）指向那个内存块的前num个字节的内容设置成value值
//num 要设置字节的个数
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//将数组arr里面，前5个字符设置成*号表示
//	printf("%s\n", arr);
//	return 0;
//}
//int Add(int x,int y)
//{
// int z = 0;
// z = x+y;
// return z;
// }
//int 返回类型 Add函数名 int x  int y 函数参数
//{ .......}函数体 交待的是函数的实现
//定义函数
//int get_max(int x, int y)//形参
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main() {
//	int a = 10;
//	int b = 20;//实参
//	//函数的使用
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	max = get_max(3.1415926,4);
//	printf("max = %d\n", max);
//	return 0;
//}
//写一个函数可以交换两个整型变量的内容
//void Swap1(int x, int y)//void 表示无返回值类型
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)//用指针变量把a,b的值传过来
//{
//	int tmp = 0;
//	tmp = *pa;//*pa和*pb都是解引用操作
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);//传值调用
//	Swap2(&a, &b);//在这里不需要返回值  传址调用
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//}
//真实传给函数的参数，叫实参。实参可以是：常量、变量、表达式、函数等。
//无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参。
//形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单
//元），所以叫形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。
//当实参传给形参的时候
//形参就是实参的一份临时拷贝,对形参的修改是不会改变实参的


//函数调用
//传值调用  函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。
//传址调用  1.传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
     //     2.这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。
//如果是素数返回为1，打印出来。不是素数返回为0
//int is_prime(int n)
//{
//	//2->n-1
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)//除了1和它本身的数能被整除以外还有其他的数也能被整除就返回 0
//		{
//			return 0; 
//		}
//	}
//		if (j >sqrt(n))//判断
//		{	
//		   return 1;
//		}
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)//这个函数是用来判断否为素数  如果是素数返回为1，打印出来。不是素数返回为0
//			printf("%d ", i);	
//	}
//	return 0;
//}
//用函数判断一年是不是闰年
//int is_leap_year(int y)
//{
//    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int year = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        //判断year是否为闰年
//        if (1 == is_leap_year(year))//是否为year  返回1为闰年，返回0为不是闰年
//        {
//            printf("%d ", year);
//        }
//       }
//    return 0;
//}
//用函数实现一个整形有序数组的二分查找
                  //本质上arr是一个指针  指针大小为4
//int binary_search(int arr[], int k,int sz)
//{
//    //算法的实现   
//    //       指针大小为4  / 第一个元素的大小是整型，大小也就是4
//    //int sz = sizeof(arr) / sizeof(arr[0]);//其实是指针的大小   我们在函数外面实现
//    int left = 0;
//    int right = sz - 1;
//    while (left <= right)//只有当左下标小于等于右下标时才能找到元素
//    {
//        int mid = (left + right) / 2;//算出中间元素的下标  不能写到循环外面如果写到循环外面 只会算一次中间的下标
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    //二分查找
//    //在一个有序数组中查找具体的某个数
//    //如果找到了返回，这个数的下标。找不到的返回-1
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 11;//传递到函数里面的是数组arr首元素的地址
//    int sz = sizeof(arr) / sizeof(arr[0]);
//   int ret = binary_search(arr,k,sz);
//   if (ret == -1)
//   {
//       printf("找不到指定的数字\n");
//   }
//   else
//   {
//       printf("找到了，下标是： %d\n", ret);
//   }
//    return 0;
//}
//用函数调用这个函数，每调用一次就将num的值加1
//void Add(int* p)
//{
//    (*p)++;//如果是“*p++”的话++的优先级较高作用于而不是作用于*p
//}
//int main()
//{
//    int num = 0;//这个函数每执行一次，num就加一，这个函数内部会改变num的值 采用传地址的形式
//    Add(&num);
//    printf("num = %d\n", num);
//    Add(&num);
//    printf("num = %d\n", num);
//    Add(&num);
//    printf("num = %d\n", num);
//    return 0;
//}
//函数的嵌套调用和链式访问
//函数和函数之间可以根据实际的需求进行组合的，也就是互相调用的。
// 嵌套调用
//void new_line()
//{
//    printf("hehe\n");//首先，一个函数叫new line  函数里面打印一个hehe，如果想打印三个hehe
//}
//void three_line()//如果想打印三个hehe，在封装一个函数，里面用了一个for循环，循环了三次，调用了new line
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//int main()//three line如果要执行的话，就要调用main函数，在main函数里面调用three line
//{
//    three_line();
//    return 0;
//}
//链式访问
//把一个函数的返回值作为另外一个函数的参数
//int main()
//{
//    int  len = 0;
    //1
    //len = strlen("abc");//strlen求字符串长度
    //printf("%d\n", len);
    //2
//    printf("%d\n", strlen("abc"));//把strlen这个函数的返回值是整型，就把返回值打印  链式访问
//    return 0;
//}
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));//printf打印一个整型，是第二个函数printf的返回值，而这个返回值是字符的个数
//                                                 //如果要打印就要先把这个函数调出来，调出来时又要打印里面的值又要调用一个函数，打印出来的是43    
//                                                 // 当最里面的一个返回值是43，表示两个字符。因此，第二个函数打印的就是2，表示一个字符。因此第一个函数打印的就是1
//    return 0;
//}
//函数的声明和定义
//函数声明：
//1. 告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，函数
//声明决定不了。
//2. 函数的声明一般出现在函数的使用之前。要满足先声明后使用。
//3. 函数的声明一般要放在头文件中的。
//函数定义：
//函数的定义是指函数的具体实现，交待函数的功能实现。
#include "add.h"//引用自己写的头文件用双引号
int main()
{

	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}//.h头文件里面放的是声明  .c放的是定义
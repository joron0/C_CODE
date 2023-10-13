#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
//BIT-6-指针
//1. 指针是什么
//2. 指针和指针类型
//3. 野指针
//4. 指针运算
//5. 指针和数组
//6. 二级指针
//7. 指针数组
//1. 指针是什么？
//指针是什么？
//指针理解的2个要点：
//1. 指针是内存中一个最小单元的编号，也就是地址
//2. 平时口语中说的指针，通常指的是指针变量，是用来存放内存地址的变量
//总结：指针就是地址，口语中说的指针通常指的是指针变量。指针变量
//我们可以通过& （取地址操作符）取出变量的内存其实地址，把地址可以存放到一个变量中，这个变量就是指针变量
//指针变量，用来存放地址的变量。（存放在指针中的值都被当成地址处理）。
//在32位的机器上，地址是32个0或者1组成二进制序列，那地址就得用4个字节的空间来存储，所以一个指针变量的大小就应该是4个字节。
//那如果在64位机器上，如果有64个地址线，那一个指针变量的大小是8个字节，才能存放一个地址。
//总结：指针是用来存放地址的，地址是唯一标示一块地址空间的。指针的大小在32位平台是4个字节，在64位平台是8个字节。
//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量
//	return 0;//一个内存单元是1个字节
//}
//2. 指针和指针类型
//char* 类型的指针是为了存放 char 类型变量的地址。
//short* 类型的指针是为了存放 short 类型变量的地址。
//int* 类型的指针是为了存放 int 类型变量的地址。
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//任何类型的指针都可以存储数据，当我们解引用操作的时候。
// 整型指针解引用操作可以存放4个字节的内容，但是是字符指针时只能调用一个字节的内容
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int*p; *p能够访问4个字节   char*p； *p能够访问1个字节  double* p; *p能够访问8个字节
//总结：指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）。
//比如： char* 的指针解引用就只能访问一个字节，而 int* 的指针的解引用就能访问四个字节。
//指针+ - 整数
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//跳过一个整型（4个字节）
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//跳过一个字节
//	return 0;
//}
//总结：指针的类型决定了指针向前或者向后走一步有多大（距离）
//int*p; p+1 偏移4个字节
//char*p; p+1 偏移1个字节
//double*p; p+1 偏移8个字节
//int main()
//{
//	int arr[10] = 0;
//	int* p = arr;//数组名 - 就是首元素的地址   指针变量 p存放的是第一个元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;//解引用   把数组内容全部改为1
//	}
//	return 0;//当指针变量为int*时改变的是10个整型   10个字节 
//	         //当指针变量位char*是改变的是10个字符类型  10个字节
//}
//野指针 概念： 野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//3.1 野指针成因（两种情况导致野指针）
//1. 指针未初始化
//int main()
//{
//	int a;//局部变量不初始化，默认就是随机值
//	int* p;//局部的指针变量，就被初始化成随机值
//	*p = 20;//*p访问内存空间的时候，通过p存的地址。随便找了一个内存空间把20进去，就把原来的值改了
//	return 0;
//}
//2. 指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名是首元素的地址，把首元素的地址交给*p
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;//p++当它跃出自己能够管理的arr的这个范围之后，就被称为野指针
//	}
//	return 0;
//}
//3. 指针指向的空间释放
//int test()
//{
//	int a = 10;//局部变量
//	return &a;//取地址a     我们在返回的时候把地址a取回来
//}
//int main()
//{
//	int *p = test();//地址a赋给p
//	*p = 20;//这时内存空间的这块地址被改为20
//	return 0;
//}
//3.2 如何规避野指针
//1. 指针初始化
//2. 小心指针越界
//3. 指针指向空间释放即使置NULL
//4. 避免返回局部变量的地址
//5. 指针使用之前检查有效性
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//初始化
//	//int* p = NULL;//NULL - 用来初始化指针的，给指针赋值
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//}
//4. 指针运算
//指针+- 整数

//指针 - 指针
//指针的关系运算
//4.1 指针 + -整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof（arr）整个数组的长度为40个字节    sizeof（arr[0]）首元素的地址
//	int* p = arr;//通过指针来访问  数组名就是首元素地址，把数组首元素地址交给p，p的类型为int*
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);//打印第一个元素，第一次进来p里面放的就是第一个元素的地址，*p就是第一个元素
//	//	p = p + 1;//p+1产生一个值，就是整型指针向后跳一个整型指向了2，再把这个地址赋给p变量
//	// p是指针，*p是访问内存的地址
//	//}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;
//	}
//	return 0;//++i  先使用再+1.先使用再+1  i++
//}
////4.2 指针-指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	&arr[9] - &arr[0];//下表为9元素的地址
//	return 0;//指针减去指针得到的是中间元素的个数
//}
//用一个指针（end）指向\0，用另外一个指针（start）指向b，然后用end-start得到字符串长度
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归  - 模拟实现了strlen- 计数器的方式1.递归的方式2
//	char arr[] = "bit";
//		int len = my_strlen(arr);//arr是数组名,数组里是bit\0   当my_strlen求字符串长度时返回的变量放到len里面去
//		printf("%d\n", len);
//		return 0;
//}
//4.3 指针的关系运算
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。
//5. 指针和数组
//数组名表示的是数组首元素的地址。
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//数组名-首元素的地址
//	printf("%p\n",&arr[0]);//首元素的地址
//	printf("%p\n", &arr);//&（arr）数组名 取出的是整个数组的地址但是显示的是首元素的地址
//	printf("%p\n", &arr+1);//整个数组的地址
//	//例外1；&arr - & 数组名  数组名不是首元素的地址，而是数组名表示整个数组 --&数组名 取出的是整个数组的地址
//	//例外2；sizeof(arr) - sizeof(数组名) - 数组名表示的是整个数组 - sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)//对数组完全可以用指针来访问
//	{
//		*(p + i) = i;//下标i的地址，然后解引用，然后赋值把数组的内容赋成0，1，2，3...
//	}                      //用指针操作的形式
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", /*arr[i]*/*(p+i));//用数组的方式打印arr[i]   用指针的方式打印*(p+1)
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p ============ %p\n", p + i, &arr[i]);//&arr[i]和首元素地址p+i产生的结果是一样的
//	//}
//	return 0;
//}
//数组可以通过指针来访问。
//数组可以存放一组数据，一组相同类型的元素。
// 指针，指针可以存放一个地址，指针可以存放这个数组起始位的地址，或者任意一个元素位的地址
//二级指针
//指值针变量也是变量，是变量就有地址，那指针变量的地址存放在哪里？
//int main()
//{
//	int a = 10;
//	int* pa = &a;//a是整型变量，取出a的地址放到变量pa里面去。pa就是一级指针变量，int*就是一级指针类型
//	int** ppa = &pa;//ppa就是二级指针  pa是变量，要在内存中开辟空间，取地址pa，就在内存中拿到pa这块地址，拿到的地址也要存储，存储到ppa int**二级指针类型
//	//int*** pppa = &ppa;//pppa就是三级指针
//	//二级指针就是存放一级指针变量的地址
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}
//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;//把a的地址取出来放到pa里面去，pa的类型叫做int*
//	//int* pb = &b;//把b的地址取出来放到pb里面去
//	//int* pc = &c;//把c的地址取出来放到pc里面去
//	//现在要存放整型变量的地址
//	//那个数组里面放的都是整型变量的地址，是整型指针，这个数组就叫做指针数组
//	//整型数组 - 存放整型
//	//指针数组 - 存放指针
//	int* arr2[3] = { &a,&b, & c };//放一个整型指针到数组里面去。里面存放每存放的一个元素都是int*这样的指针
//	int i = 0;//借用arr2这个数组把a，b，c三个值打印出来
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));//解引用操作打印
//	}
//	return 0;
//    }
//创建一个整型数组，完成对数组的操作
//void Init(int arr[],int sz)//接收数组、元素的个数
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}//在函数里面数组初始化
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] =  tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组的大小 
//	//Init(arr, sz);//把数组初始化
//	Print(arr, sz);//打印函数
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}//实现reverse()函数完成数组元素的逆置
//交换数组，将数组A的内容和数组B中的内容进行交换
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//		printf("%d " "%d ", arr1[i],arr2[i]);
//		printf("\n");
//	}
//	
//	return 0;
//}
//统计二进制中1的个数（一个数在内存中真正表示的是补码）一个数的补码二进制序列有几个1
//写一个函数返回参数二进制中1的个数
//int count_bit_one(unsigned int n)//传参过来用a接收。返回类型：返回的是个数，是个整数用int
//{
//	int count = 0;
//	while (n)//用while循环判断n是否为0，刚开始n不为0进入循环
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//	   }
//		n = n / 2;
//	}
//
//	return count;
//}(第一种)
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	//让求得的整数每次相与1然后向右移1位继续相与就能得到
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}(第二种)
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}(第三种)
//n = n&n(n-1)
//n
//13
//1011 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//录入一个数字
//	//写一个函数求a的二进制（补码）表示中有几个1
//	int count = count_bit_one(a);//用count存储count_bit_one函数中1的位数
//	printf("count = %d\n", count);//打印count
//	return 0;
//	//1231想获取一个这个十进制数字里有多少个1的话
//	// 应该拿下每一个（%10）然后去掉这一位（/10）
//	//二进制就%2 -- /2
//	//13
//	//00000000000000000000000000001101
//}
//求二进制中不同位的个数
//两个int（32位）整数m和n的二进制表达中，有多少个位（bit）不同？
//异或 相同则0，相异则1
//int get_diff_bit(int m,int n)
//{
//	int tmp = m ^ n;//m异或n
//	//此题第一种方法return count_bit_one(tmp);//调用方法三
//	int count = 0;
//		while (tmp)//此题第二种方法
//		{
//			tmp = tmp & (tmp - 1);
//			count++;
//		}
//		return count;//此题第二种方法
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count =%d\n", count);
//	return 0;
//}
//打印二进制的奇数位和偶数位。获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//相与 只要1个为0就为0，两个为1才为1
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位: \n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位: \n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//使用指针打印数组内容
//写一个函数打印arr数组的内容，不适应数组下标，使用指针。arr是一个整型一维数组。
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//输出一个12*12的乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//字符串逆序（递归实现）
//编写一个函数reverse_string(char * string)(递归实现)
//实现：将参数字符串中的字符方向排列
//三种方法实现strlen①：计数器方法②递归③指针减指针
#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//指针指的是谁
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//计数的方法
//void reverse_string(char arr[])
//{
//	int left = 0;
//	//int right = strlen(arr)-1;
//	int right = my_strlen(arr) - 1;
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//递归的思想是大事化小
//把abcdef的逆序转换为两个步骤：①a和f的交换②加上逆序bcde，调用reverse函数逆序bcde
//实现步骤①先把a挪出去②把f放到a的位置上③再把\0放到f的位置上，然后bcde逆序④再把a放到\0的位置
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//指针指的是谁
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])//char* arr
//{
//	char tmp = arr[0];//把a存放在变量里面
//	//找到数组的最后一个元素f（字符串长度-1是它的下标）
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];//len-1就是f的位置,把f放到a的位置上
//	arr[len - 1] = '\0';//在f的位置上放上\0
//	//递归的限制条件就是起始长度是大于等于2的时候才逆序如果长度中间没有字符或者只有一个字符就不需要逆序
//	if(my_strlen(arr+1)>=2)
//	reverse_string(arr + 1);//arr[]是首元素的地址然后加1是b的地址就是找到吧b元素，然后就利用reverse_string函数开始逆序
//	arr[len - 1] = tmp; //再把a放到\0的位置
//}
//int main()
//{
//	char arr[] = "abcdefg";//fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
//调用DigitSum(1729),则应该返回1+7+2+9，它的和是19
//DigitSum(1729)
//DigitSum（172）+1729%10
//DigitSum（17）+172%10+1729%10
//DigitSum（1）+17%10+172%10+1729%10
//1+7+2+9
//int DigitSum(unsigned int num)
//{
//	if (num > 9)//小于个位数时就不要往下拆了
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1729
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//递归实现n的k次方
//编写一个函数实现n的k次方，使用递归实现
double Pow(int n, int k)
{
	//n^k = n* n^(k-1)
	if (k < 0)
		return(1.0 / (Pow(n, -k)));//当k为小数或者负数时
	else if (k == 0)
		return 1;//当k为0时
	else
		return n * Pow(n, k - 1);//当k>=1时
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n,k);
	printf("ret=%lf\n", ret);
	return 0;
}
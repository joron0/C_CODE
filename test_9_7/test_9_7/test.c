#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//c语言是一门结构化的程序设计语言
//1.顺序结构2.选择结构3.循环结构
//选择结构在c语言叫做分支语句    循环结构在c语言中叫做循环结构
//分支语句 if  switch    循环语句 while for  do while
//c语言由一个分号隔开的就是一条语句
// 分支语句 if  switch
//if语句→语法结构；
//if(表达式)→表达式计算的结果如果为真(非0)，那这个语句就要被执行，否则的话什么都不执行
//     语句：
// 
//if（表达式）→如果表达式计算的结果如果为真，语句1就要被执行，否则语句2就要被执行
//     语句1；
// else
//     语句2；
//  
//多分支
//if（表达式1）如果表达式1成立执行语句1.表达式2成立执行语句2.否则执行语句3
//     语句1
//else  if（表达2）
//     语句2
//  else
//     语句3
//int main()
//{
	/*int age = 100;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else
		printf("老头\n");*/
	/*int age = 20;
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");*/
	/*int age = 20;
	if (age < 18)
		printf("未成年\n");*/
//	return 0;
//}
//如果条件成立，要执行多条语句时，应该用“{}→代码块”圈起
//int main()
//{
//		int age = 100;
//		if (age < 18)
//		{
//				printf("未成年\n");
//			printf("不能谈恋爱\n");
//		 }
//		else
//		{
//			if (age >= 18 && age < 28)
//				printf("青年\n");
//			else if (age >= 28 && age < 50)
//				printf("壮年\n");
//			else if (age >= 50 && age < 90)
//				printf("老年\n");
//			else
//				printf("老头\n");
//		}
//	return 0;
//}
//浮空else  else匹配最近的if  else要进去
//“=”是赋值。“ == ”是判断相等
//int main() 
//{
//	int num = 4;
//	if (5 == num)//这样可以避免“=”“==”的使用差错
//		printf("hehhe\n");
//}
//判断1-100是否为奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)//也可以判断i%2 != 0（i不等于0相当于等于1）
//			printf("%d ", i);//%d后面加空格意味着输出的数字后面有一个空格
//		i++;
//	}
//	return 0;
//}
//switch 语句   常常用于多分支的情况
// switch(整形表达式)
//   {
//     语句项：
//    }
// 语句项是   case 整型表达式；
//            语句；
// break →终止，跳出
//scanf函数和printf函数一样，它的功能通过键盘给程序中的变量赋值
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch判断圆括号里面的值，里面的值必须为整型
//	{
//	case 1://case是入口，必须为整型且为常量
//		printf("星期1\n");
//		break;//break是出口
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
	/*if (1 == day)
		printf("星期1\n");
	else if (2 == day)
		printf("星期2\n");
	else if (3 == day)
		printf("星期3\n");
	else if (4 == day)
		printf("星期4\n");*/
//	return 0;
//}
//int main()
//{
//	int day = 0;
//		scanf("%d", &day);
//		switch (day)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//        default://如果不能输出前面的情况，默认输出一种情况
//			printf("输入错误\n");
//			break;
//		}
//}
//循环语句 while for  do while     最多的for  →while →do while
//if语句：
//if(条件)
//     语句;
//当条件满足的情况下，if语句后的语句执行，否则不执行。
//但是这个语句只会执行一次。
//由于我们发现生活中很多的实际的例子是：同一件事情我们需要完成很多次。
//那我们怎么做呢？C语言中给我们引入了： while 语句，可以实现循环。
//while 语法结构
//while (表达式)  如果表达式的语句为真，循环语句将要被执行。然后继续判断表达式，循环往复。
//循环语句;
////int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0; 
//}
//continue：continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。
//break在while循环中的作用：
//其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。while中的break是用于永久终止循环的。
//getchar输入  putchar输出scanf输入函数   EOF相当于文件结束标志 end of file  快捷键ctrl + z
//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//当键入文件结束标志 ctrl+z 会结束循环
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码，并存放在password数组中
	//缓冲区还剩余一个‘\n’
	//再读取一个\n
	//while ((ch = getchar()) != '\n')//getchar读取字符放到ch里面。读取操作   
	//	                            //如果这个字符不等于EOF进到循环里面
	//{
	//	;
	//}
	//printf("请确认(Y/N):>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}
//	return 0;
//}
//int main()
//{
//	int ch = 0;//用ch接受我们输出的值
//	while ((ch = getchar()) != EOF)//用getchar接受一个值放到ch里面去，只要不等于EOF进入if里面判断
//	{
//		if (ch < '0' || ch> '9')//ch如果小于字符0或者大于字符9亦或者就是非数字字符的字符
//			continue;//如果是我们就跳过本次循环后面的代码
//		putchar(ch);//如果不是这个范围值的话就打印ch
//	}
//	return 0;
//}
//for循环
//for(表达式1; 表达式2; 表达式3)
//循环语句;
//表达式1
//表达式1为初始化部分，用于初始化循环变量的。
//表达式2
//表达式2为条件判断部分，用于判断循环时候终止。
//表达式3
//表达式3为调整部分，用于循环条件的调整。
// for循环中也可以出现break和continue，他们的意义和在while循环中是一样的。
//for语句的循环控制变量
//1. 不可在for 循环体内修改循环变量，防止 for 循环失去控制。
//2. 建议for语句的循环控制变量的取值采用“前闭后开区间”写法。for(i = 0;i<10;i++)前面是闭后面是开
//int main()
//{
//	int i = 0;//循环变量初始化
//	while (i < 10)//循环变量判断
//	{
//		//........
//		i++;//循环变量的调整
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}//切勿在循环体内改变循环变量
//	return 0;
//}
////for循环的变种
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//1.for循环的初始化、调整、判断都可以省略但是for循环的判断部分如果被省略，判断条件恒为正
//2.如果不是非常熟练，不要随便省略
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//初始化i=0；k=0，判断时把0赋值给k为假不进循环，为0次循环
//	
//		k++;
//	
//	return 0;
//}
//do....while()循环
//do
//循环语句;
//while (表达式);
//int main()
//{
//	int i = 1;//1.首先创建变量i
//	do
//	{
//		printf("%d ", i);//2.进入do以后打印i的值为1，然后i+1
//		i++;
//	 } 
//	while(i <= 10);//3.i<10上去，直接进去do循环里面
//	return 0;
//}
//int main()
//{
//	int i = 1;//1.首先创建变量i
//	do
//	{
//		if (i == 5)
//			break;//同上当i判断＝5时就会停止只输出1.2.3.4   当是continue时代表判断等于5时下面的代码直接不打印继续调到上面
//		printf("%d ", i);//2.进入do以后打印i的值为1，然后i+1
//		i++;
//	} while (i <= 10);//3.i<10上去，直接进去do循环里面
//	return 0;
//}
//计算n的阶乘
//1*2*3*.....*n，准备1 - n个数字累计乘在一起，要产生n个数字用循环变量，把循环变量累计乘在一个数上例如for循环或者while循环
//int main()
//{
//	int i = 0;
//	
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d的阶乘为%d",  n,ret);
//	return 0;
//}
// 计算1！+2！+3！+......+10！
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	int n = 0;//1+2+6=9
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;//ret = ret * i;
//		}//n的阶乘
//		sum = sum + ret;
//	}//当ret算的是1的阶乘时；ret = 1*1
//	 //           2的阶乘时；ret = 1*1*2
//	 //           3的阶乘时；ret = 2*1*2*3此时，ret从存的1变成2 
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	int n = 0;//1+2+6=9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//将ret初值始终为1，不会保留
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;//ret = ret * i;
//		}//n的阶乘
//		sum = sum + ret;
//	}//当ret算的是1的阶乘时；ret = 1*1
//	 //           2的阶乘时；ret = 1*1*2
//	 //           3的阶乘时；ret = 2*1*2*3此时，ret从存的1变成2 
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int sum = 0;
//	int ret = 1;
//	int n = 0;//1+2+6=9
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//买了一双鞋：500
//1 2 3 4 5 6 ... 500
//250 346 
 //折半查找算法   二分查找算法
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 19;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)//只有left<=right 才能进行查找。当找不到的时候会跳到下面
//	{
//		int mid = (left + right) / 2;//有了左右下标以后，每次进行二分查找时都要通过左右下标求出一个中间下标
//		if(arr[mid] > k)//用中间下标锁定的元素和我们要找的元素比较
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//				break;//找到以后跳出去
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//4.编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "                    ";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数   cls就是清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码输入正确则提示登陆成功，如果三次均输入错误，则退出程序。
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//==不能用来比较两个字符串是否相等，应该使用一个库函数  strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//		if (i == 3)
//			printf("三次密码均错误，退出程序\n");
//	return 0;
//}
//写代码三个数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3用指针取a b c的值  %d%d%d输入时，中间输入空格 
//	//算法实现
//	//a中放最大值
//	//b次之
//	//c中放最小值
//	if(a<b)
//	{
//		int tmp = a;//tmp临时变量
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//给定两个数，求这两个数的最大公约数   辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int j = 0;
//	scanf("%d%d", &m, &n);
//	while (j=m % n)
//	{
//		//j = m % n;
//		m = n;
//		n = j;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除
//		
//			/*if (year % 4 == 0 && year % 100 != 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//			else if (year % 400 == 0)
//			{
//				printf("%d ", year);
//				count++;
//			}*/
//		if (((year % 4 == 0 && year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);//计算一下有几个年份是闰年
//	return 0;
//}
//打印100-200之间的素数   先产生100-200之间的数，在判断里面有多少的素数
#include <math.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt是开平方的数学库函数
//	for (i = 100; i <= 200; i++)//最好采取左闭右开   还可以在奇数里面找素数for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//试除法   素数只能被1和它本身整除  例如13 判断2-12里面也就是2 - （i-1）里面是否有能被i整除，如果有说明13就不是素数
//        //产生2 - i-1的数字
//		// 也可以   如果i本身开平方的数 i 可以整除就说明它不是素数
//		int j = 0;
//		//for (j = 2; j < i; j++)
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//if (j == i)
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//编写程序数一下1到100的所有整数中出现多少个数字9
//int main()
//{
	//int i = 0;
	//int count = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 100 == 7)//看100里面个位余多少个9
	//	{
	//		printf("%d ", i);
	//		count++;
	//	}
	//	else if (i / 10 == 7)//看100里面商
	//	{
	//		printf("%d ", i);
	//		count++;
	//		
	//	}
	//	else if (i % 7 == 0)
	//	{
	//		printf("%d ", i);
	//		count++;
	//	}
	//}
	//printf("count = %d\n", count);
	//return 0;
//}
//计算1/1-1/2+1/3-1/4+1/5+......+1/99-1/100的值，打印结果
//int main()
//{
//	float sum = 0;
//	int a = 1;
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//
//		sum += a * 1.0 / i;//  1/i产生每一项分数，当i已经是整型时，让1变成1.0产生浮点数
//		a = -a;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//求10个整数中最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//将arr[0] = max
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	for (i = 0; i < sz; i++)//找到这个数组的所有元素，下标。在循环的过程中，i就是每个元素的下标
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//乘法口诀表打印
//int main()
//{
//	int i = 0;//首先确定9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行要确认打印多少项
//		int j = 1;//打印多少列
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//i 就是行  j就是列  乘积就是i*j的乘积 
//			                                  //%2d表示打印这个数字的时候打印两位，不够两位用空格补齐  右对齐
//			                                  //左对齐%-2d
//		}
//		printf("\n");//表示一个换行
//	}
//	return 0;
//}
//二分查找  编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。同之前405行
//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字
//do while表示至少进行一次.
//#include <time.h>
//void menu()
//{
//	printf("******************************\n");
//	printf("*****     1.play  0.exit   ***\n");
//	printf("******************************\n");
//}
////RAND_MAX 是0 - 32767之间
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;//rand函数，生成随机数，随机整数的范围是0 - max   在调用rand之前请使用srand函数设置随机数的一个生成器
//	int guess = 0;//来接受猜的数字的值
//	//拿时间戳来设置随机数的生成起始点   当前计算的时间减去计算的起始时间（1970.1.1.0：0：0）= （xxxx）秒
//	//time_t time(time_t *timer)   time_t是一个长整型 函数
//	//srand((unsigned int)time(NULL));//null空指针
//	ret = rand()%100+1;//生成1-100之内随机数  不能把这一行代码放到while 会使随机生成的随机数一直在随机
//	//printf("%d\n", ret);
//	//2.猜数字其实是循环的猜数字
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else {
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请选择>:");//用户做出一个选择
//		scanf("%d", &input);//输入一个数字 用input存储用户输入的数字
//		switch (input)//当用户输入一个值时，分多种情况时，用多分支判断input，
//		{
//		case 1://当选择为1，玩游戏
//		     game();
//		     break;
//		case 0://当选择为0，退出游戏
//			 printf("退出游戏\n");
//			 break;
//		default://当为default提示用户
//			 printf("选择错误\n");
//			 break;//当switch表达式的值并不匹配所有case标签的值时，这个default子句后面的语句就会执行。
//		}
//	} while (input);//判断选项 判断input为1 -  真，循环再玩一次   判断input为0 -  假，循环退出游戏
//	return 0;
//}
//goto语句  终止程序在某些深度嵌套的结构的处理过程，例如跳出两层或多层循环
//for(...)
//for (...)
//{
//	for (...)
//	{
//		if (disaster)
//			goto error;
//	}
//}
//error;
//if(disaster)
//     //处理错误情况
//shutdown -s -t 60 一分钟后关机
//shutdown -a   取消计划
//system()是执行系统命令的
#include <string.h> //字符串比较函数
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	//again:
//	//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	//	scanf("%s", input);
//	//	if (strcmp(input, "我是猪") == 0)//比较两个字符-strcmp()
//	//	{ 
//	//		system("shutdown -a");
//	//	}
//	//	else 
//	//	{
//	//		goto again;
//	//	}
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)//比较两个字符-strcmp()
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



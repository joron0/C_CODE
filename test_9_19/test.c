#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�����ݹ�
//�����������ı�̼��ɳ�Ϊ�ݹ飨 recursion����
//�ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ�á� һ�����̻������䶨���˵������ֱ�ӻ���
//���������һ�ַ�������ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬�ݹ����
//ֻ�������ĳ���Ϳ������������������Ҫ�Ķ���ظ����㣬���ؼ����˳���Ĵ�������
//�ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С
//�ݹ��������Ҫ����
//1.���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
//2.ÿ�εݹ����֮��Խ��Խ�ӽ��������������
//int main()//main�����������һ��һ��main��������һ���򵥵ĵݹ�
//{
//	printf("hehe\n");//�ݹ鳣���Ĵ���ջ��� Stack overflow
//	main();
//		return 0;
//}//stack overflow ��main����һֱ�ڵ����Լ���ջ�ռ䱻�ĸɾͻ���ʾstack overflow
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�����1234
//void print(int n)//��ӡ1234   ��ͣ��ִ��nֱ��n������������������ִ�У�ֱ����ӡΪ1��Ȼ�󷵻�12�����ӡ2������123�����ӡ3������1234�����ӡ4
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
//	scanf("%d", &num);//1234   ��1234%10=4  123/10=12 12%10=2 
//	//�ݹ� �����Լ������Լ�
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12)3 4
//	//print(1)2 3 4
//	//
//	return 0;
//}
//my_strlen(char* str)//char�ĵ�ַ�ŵ�ָ���������
//{
//	int count = 0;
//	while(*str != '\0')//������
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//��ָ������ǵ�һ��Ԫ�ص�ַʱ���ͽ������ж�һ�£�Ȼ��ָ��������ǵ�ַ+1��count������ͳ���ַ�
//int main()
//{
//	char arr[] = "bit";//ÿ��Ԫ�ض���char����Ԫ�صĵ�ַ����char�ĵ�ַ
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}
//�ݹ�ķ���
//�Ѵ��»�С
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0
//3
//int my_strlen(char* str)
//{
//	if (*str != '\0')//����һ���ַ�����\0
//		return 1 + my_strlen(str + 1);//������1+my_strlen,�����it�ĳ��ȡ�����str������ָ��b�ģ�str+1ָ��bit���е�i��str+1����i�ĵ�ַ
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
//�ݹ������
//��n�Ľ׳�
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
//int Fac2(int n)//fac(n) ��n<=1��1����n>1��n*fac(n-1)��
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
// }
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}
//���n��쳲���������쳲��������� 1 1 2 3 5 8 13 21 34 55 ......
//Fib(n)  ��n<=2,1����n>2,Fib(n-1)+Fib(n-2)��
// �ݹ�ķ���
//int count = 0;
//int Fib(int n) 
//{
//	if (n == 3)//���Ե�����쳲��������ļ������
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)//쳲��������� 1 1 2 3 5 8 13 21 34 55 ......
//{             //����ѭ���ķ���  ��a+b=c���ٰ�a=b��b=c��Ȼ��c��j--����n����ʱ��4-1=3.3-1=2  Ȼ��ǰ����쳲�����������2��3
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
//	//TDD - ������������
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	//printf("count = %d\n", count);
//	return 0;
//}
//ʲôʱ���õݹ飬ʲôʱ����ѭ��
//ջ�����ʱ�����õݹ�
// ��ŵ��   ������̨��
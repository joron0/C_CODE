#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����ؼ��� auto  break   case  char  const   continue  default  do   double else  enum   
//extern float  for   goto  if   int   long  register    return   short  signed
//sizeof   static struct  switch  typedef union  unsigned   void  volatile  while 
//auto int a = 10;//�ֲ�����ǰ�涼��һ��autoֻ�����ֲ��������ǣ��Զ�������  �Զ����� �Զ�����
//break ��c�����������ط����õ�  ��ѭ���У�break����ֹͣѭ��
//char �ַ�����  const  �ڳ����У���һ�ֳ���������������ʹ��const����
//continue ����ѭ����   defaultĬ��  do whileѭ��   double����
// else  enumö��   extern�����ⲿ����   float�����ȸ�����  forѭ��  if���goto���
// int����  long������  register�Ĵ����ؼ��֣�������洢���Ӵ�С�������ٶȣ��ӵ͵��ߣ�  Ӳ�̡��ڴ�����ٻ�����Ĵ�����
// register int a = 10;�����a����ɼĴ�������    return����   short������  
// signed�з�����  int����ı������з��ŵġ����ԷŸ���Ҳ���Է�����   unsigned�޷�����  ��ʹ�Ǹ�ֵ������Ȼ������
//sizeof�����С  static��̬  struct�ṹ��ؼ���  switch case���  typedef���Ͷ��� union������/������
//void ��/��  whileѭ��   �ؼ��ֲ��ܺͱ�������ͻ

//typedef ����˼�������Ͷ���-�����ض��壬����Ӧ�����Ϊ������������
//void main()
//{
//	typedef unsigned int u_int;//��unsigned int����������������˸����ֽ��� ��u_int������
//	unsigned int num = 20;
//	u_int num2 = 20;//��ʱnum��num2������������ͬһ���
//	return 0;
//}
//void test()       
//{                 ��Σ�test������ a����һ���ֲ���������a=1֮���1
//	int a = 1;    ���⣻a��Ϊһ���ֲ������ӽ��뺯����Χ�������ڿ�ʼ���Ӻ�����Χ�뿪�������ڽ�����Ȼ������
//	a++;          �ʴˣ���һֱ��ӡ2 ֱ��i>5  �������ʾ5��2
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5) ���ȣ����������е���Ȼ����������test����
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
// �������������Ԣ��������ڢ�������
//1.static ��tastic���ξֲ�����ʱ���ֲ����������������ӳ� ������Ϊ��a��ֵΪ2��3��4��5��6���ı�����������ڣ�
//2.��static����ȫ�ֱ���ʱ���ı������������ �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã��������Դ�ļ���û��ʹ����
//3.static���κ���ʱ�ı��˺������������ԣ��ⲿ�������Ա���ڲ���������
//int main()
//{
//extern�������ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//�����ⲿ����
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//#define �����ʶ������
//#define MAX 100
//#define ���Զ���ꡪ���������
//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 30;
//	//�����ķ�ʽ��ʾ
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}
//�ڴ��ǵ������ر���Ҫ�Ĵ洢����������г�������ж������ڴ��н��е� ��
//����Ϊ����Ч��ʹ���ڴ棬�Ͱ��ڴ滮�ֳ�һ����С���ڴ浥Ԫ��ÿ���ڴ浥Ԫ�Ĵ�С��1���ֽڡ�
//Ϊ���ܹ���Ч�ķ��ʵ��ڴ��ÿ����Ԫ���͸��ڴ浥Ԫ�����˱�ţ���Щ��ű���Ϊ���ڴ浥Ԫ�ĵ�
//ַ��
//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//&aȡ��ַ
//	//printf("%p\n", &a);//%p��ӡ��ַ
//	//printf("%p\n", p);
//	*p = 20;//*�������ò�����  �ҵ�����ָ����Ǹ�����a��ͨ��*p�ҵ�a��Ϊ20
//	printf("a = %d\n", a);
//	//��һ�ֱ�����������ŵ�ַ�Ľ���ָ�����
//	//printf("%p\n", &a);
//	return 0;
//}
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    printf("%d\n", sizeof(pc));//ָ���С8���ֽ�
//    /**pc = 'q';
//    printf("%c\n", ch);*/
//    return 0;
//}
//int main()
//{
	//int a = 10;//int�Ĵ�С��4���ֽ�  a�Ǹ�������a��������int
	//printf("%p\n".&a);%p��ӡ��ַ   p�Ǹ�������p��������int*  *�������˼p��ָ����� �����һ��ָ�������  pָ����Ǹ�������a˵��������int
	//int* p = &a;//p��һ������ ��һ��ָ����� ���Դ��ָ��Ĵ�С
	//printf("%p\n", p);//ͬ���Ǹ���ַ
	//ͨ��p�ҵ�a��*�������ò�����  �ҵ�����ָ����Ǹ�����a��ͨ��*p�ҵ�a��Ϊ20
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
//	printf("%d\n",sizeof(pd));//��ַ��64λ��ϵͳ��8���ֽ�
//}
//�ṹ��
//char double int
//��  �� ���Ǹ��Ӷ���
//��   ����+���+����+���֤��......
//��   ����+����+������+����+���.....
//struct �ṹ��ؼ���
//����һ���ṹ������
//struct Book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};//�������
//int main()
//{    //���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "c���Գ������",55 };
//	struct Book* pb = &b1;
	//����pb��ӡ�ҵ������ͼ۸�
	//printf("������%s\n", (*pb).name);
	//printf("�۸�%dԪ\n", (*pb).price);
	// ָ��  �����ü򻯲���
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	// . �ṹ�����.��Ա
	// -> �ṹ��ָ��->��Ա
	//printf("����:%s\n", b1.name);//��ӡ�ַ�����%s��ӡ  ��.���������൱�ڡ��ġ�
	//printf("�۸�:%d\n", b1.price);
//	//b1.price = 15;
//	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	return 0;
//}
//��������������һ����ַ

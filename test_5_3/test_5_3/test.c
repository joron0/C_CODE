#define _CRT_SECURE_NO_WARNINGS 1

//����һ����stdio.h���ļ�
//std-��׼ standard input output
#include <stdio.h>


//int main() //������-��������-main�������ҽ���һ�� 
//   {
//   printf("hehe\n");//����-print function - printf - ��ӡ���� int �����͵�
// return 0;        //mainǰ���int��ʾmain�������÷���һ������ֵ
//}                
// char���ַ�����������
//int main() 
//{
 //   char ch = 'A';//�ڴ�
  //  printf("%c\n",ch);// %c --��ӡ�ַ���ʽ������
//    return 0;
//}
//int main() 
//{
//	int age = 20;
//	printf("%d\n", age);//%d -- ��ӡ����ʮ��������
//	return 0;
//}
//short int - ������
//int - ����
//long ������
//int mian()
//{                             %d - ��ӡ����
//	long num = 100;             %c - ��ӡ�ַ�
//	printf("%d\n", num);        %f - ��ӡ��������-��С��
//	return 0;                   %p - �Ե�ַ����ʽ��ӡ
//}                             %x - ��ӡ16��������
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
//	printf("%d\n", sizeof(char));//char �� 1���ֽ�  �ַ���������    ���ֵ2��8λ
//	printf("%d\n", sizeof(short));//short �� 2���ֽ� ������  ���ֵ2��16λ
//	printf("%d\n", sizeof(int));//int �� 4���ֽ�     ����     ���ֵ2��32λ
//	printf("%d\n", sizeof(long));//long �� 4/8���ֽ�   ������    ���ֵ2��32λ
//	printf("%d\n", sizeof(long long));//long long �� 8���ֽ� ����������    ���ֵ2��64λ
//	printf("%d\n", sizeof(float));//float �� 4���ֽ� �����ȸ�����     ���ֵ2��32λ
//	printf("%d\n", sizeof(double));//double �� 8���ֽ� ˫���ȸ�����     ���ֵ2��64λ
//	return 0;
//}
//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 95.6f;//���ڴ�����4���ֽڴ��С��
//	return 0;
//}
//����������ֲ�������ȫ�ֱ���
//int num1 = 20;//num1��ȫ�ֱ���
//int main ()
//{
	//���ֲ�������ȫ�ֱ���һ��ʱ����������ֲ�����
//	int num1 = 10;//num1���ֲ�����
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
	//����2�����ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//��������-ʹ�����뺯��scanf
	scanf("%d%d",&num1 , &num2);//ȡ��ַ����&   %d%d��������������%d
	//int sum = 0;c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��//
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}*/
//���������������������
//�������޶�������ֵĿ����ԵĴ��뷶Χ
//�ֲ��������������Ǳ������ڵľֲ���Χ
//ȫ�ֱ���������������������    extern�������ⲿ���ŵ�
/* int main()
{
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
} */
//�������ڣ���������������ָ���Ǳ�����������������֮���һ��ʱ���
//�ֲ��������������ڣ���ȥ��������������ڿ�ʼ������������������ڽ���
//ȫ�ֱ������������ڣ������������������

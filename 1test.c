#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int num1 = 0;
//		int num2 = 0;
//
//		scanf("%d %d", &num1, &num2);
//		int sum = num1 + num2;
//		printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//		printf("a=%d", a);
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d,%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}
//
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	printf("%d\n", strlen(arr1));
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("do you fear die(1/0)");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("that's boring");
//	}
//	else
//	{
//		printf("Brilliant");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������Ա\n");
//	while (line < 5000)
//	{
//		printf("��ϰ:%d\n", line);
//		line++;
//	}
//	if (line >= 5000)
//	{
//		printf("�����ž�");
//	}
//	else
//	{
//		printf("������");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = ("abc");
//	printf("�ַ�����:%d\n", strlen(arr1));
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;   -->       return (x + y);
//���庯��
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);
//	printf("%d\n", sum);
//	return 0;
//���ú���������μ���



//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int i = 0;
//	while (i < 8)
//	{
//		printf("%d\n" , arr[i]);
//		i=i+1;
//	}
//	return 0;
//}




//
//int main()
//{
//	char ch[3] = { 'a','b','c'};
//	int i = 0;
//	while (i<3)
//	{
//		printf("%d\n", ch[i]);
//		i = i + 1;
//	}
//	return 0;
//} 


//�ȽϽϴ�ֵ
//Max(int x, int y)
//{
//	if (x > y)
//		return x;     //�����ȽϽϴ�ֵ����
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;            //������Ƚϱ���
// 	scanf("%d %d", &n1, &n2);         //����
//		int r = Max(n1, n2);      //����������Max�������r
//		printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x == 0)
//	{                                //�������
//		y = 0;
//		printf("%d\n", y);
//		return y;
//	}
//	if (x>0)
//	{
//		y = -1;
//		printf("%d\n", y);
//		return y;
//	}
//	else
//	{
//		y = 1;
//		printf("%d\n", y);
//		return y;
//	}
//	if (x == 0)
//	{
//		y = 0;
//		printf("%d\n", y);
//		return y;
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x>0)
//	{                        //��������
//		y = -1;
//	}
//	else if (x==0)
//	{
//		y = 0;
//	}
//	else
//	{
//		y = 1;
//	}
//	printf("%d\n", y);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	a = 5;
////	printf("%d", a);
////	return 0;
////}
//
//int main()
//{
//	double a = 2.0/7;
//	printf("%lf\n", a);
//	return 0;
//}

//int main()
//{
//	float a = 7 / 2.0;
//	printf("%f\n", a);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	while (1)
//	{
//		scanf("%d", &x);
//		if (x > 0)
//		{
//			y = -1;          // ����whileѭ�����ѡ��
//		}
//		else if(x == 0)
//		{
//			y = 0;
//		}
//		else
//		{
//			y = 1;
//		}
//		printf("%d\n", y);
//	}
//	return 0;
//}


//
//int Max(int x, int y)    //ȡ�ϴ�ֵ����Ϊѡ����
//{
//	if (x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);  
//	   //���庯��r��Max����ֵ����  //int r = Max(n1, n2);
//	printf("%d\n", Max(n1, n2));    //ֱ�ӽ�Max����������
//	return 0;
//}

////��Ӻ���
//int Add(int x, int y)
//{
//	                         //int x = 0;x, y��������Add�����н��ж��� intΪ�ٶ���
//                             //int y = 0;
//    int z = x + y;
//    return z;
//}
//
//int main()
//{
//    int n1 = 0;
//    int n2 = 0;
//    printf("%d\n", Add(n1, n2));
//    return 0;
//}
//int main()
//{
//	int i,tmp,sum = 0;
//	i = 1;
//	sum = 0;
//	tmp = 1;
//	while (i <= 5)
//{
//    int s = (tmp *= i, sum += tmp );
//    printf("%d\n", s);
//	i++;
//}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//    long long int a = 5;
//	short int b = 5;
//	printf("%zd\n", sizeof(a = b + 3));     
//	//sizeof�в�����ʵ�ʼ��㣬�����ԵȺ�ǰΪ׼
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	while (i <= 500)
//	{
//		printf("%d\n", a);
//		a += 1;
//		i += 1;
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = { 'b', 'i', 't' };
    printf("%d\n", strlen(arr));
    return 0;
}
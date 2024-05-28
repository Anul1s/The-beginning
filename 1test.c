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
//	printf("加入程序员\n");
//	while (line < 5000)
//	{
//		printf("练习:%d\n", line);
//		line++;
//	}
//	if (line >= 5000)
//	{
//		printf("初入门径");
//	}
//	else
//	{
//		printf("还得练");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = ("abc");
//	printf("字符长度:%d\n", strlen(arr1));
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;   -->       return (x + y);
//定义函数
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);
//	printf("%d\n", sum);
//	return 0;
//利用函数替代整形计算



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


//比较较大值
//Max(int x, int y)
//{
//	if (x > y)
//		return x;     //建立比较较大值函数
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;            //建立需比较变量
// 	scanf("%d %d", &n1, &n2);         //导入
//		int r = Max(n1, n2);      //将建立函数Max存入变量r
//		printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x == 0)
//	{                                //逆天代码
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
//	{                        //对上修正
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
//			y = -1;          // 加入while循环后的选择
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
//int Max(int x, int y)    //取较大值本质为选择函数
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
//	   //定义函数r将Max函数值存入  //int r = Max(n1, n2);
//	printf("%d\n", Max(n1, n2));    //直接将Max函数结果输出
//	return 0;
//}

////相加函数
//int Add(int x, int y)
//{
//	                         //int x = 0;x, y变量已在Add函数中进行定义 int为再定义
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
//	//sizeof中不进行实际计算，长度以等号前为准
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
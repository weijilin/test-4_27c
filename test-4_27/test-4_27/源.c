#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>



//int fib(int a)
//{
//	if(a  <= 2)	
//		return 1;
//	else
//	return fib(a - 1) + fib(a - 2);
//};
//int main()
//{
//	int a=0;
//	int b=0;
//	scanf("%d", &a);
//	b=fib(a);
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}
//
int fab(int n)
{
	if (n == 1 || n == 2)
		return 1;

	int fn1, fn2;
	fn1 = fn2 = 1;
	int ret = 0;
	for (int i = 3; i <= n; i++)
	{
		ret = fn1 + fn2;
		// fn1 : f(n-1)
		// fn2 = fn1   f(n - 2)  <----   f(n - 1)
		fn2 = fn1;
		// f(n - 1)  <---  f(n)
		fn1 = ret;
	}
	return ret;
}

int Fab_r(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return Fab_r(n - 1) + Fab_r(n - 2);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fab(n));
	printf("Fab_r(int)\n");
	printf("%d\n", Fab_r(n));
	system("pause");
	return 0;
}

//int Pow(int n, int k)
//{
//	if (k == 1)
//		return n;
//	return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	printf("%d\n", Pow(n, k));
//	system("pause");
//	return 0;
//}


//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	return n % 10 + DigitSum(n / 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	system("pause");
//	return 0;
//}
//
//void fun(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//		return;
//	}
//	fun(n / 10);
//	printf("%d ", n % 10);
//}

//void fun(int n)
//{
//	if (n > 9)
//		fun(n / 10);
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	fun(n);
//	system("pause");
//	return 0;
//}


#include <string.h>
//
//int mstrlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen(char *str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
// int mstrlen(char* str)
// {
// 	char *start = str;
// 
// 	while(*str != '\0')
// 	{
// 		str++;
// 	}
// 	return str-start;
// }
// 
// int main()
// {
// 	int len = mstrlen("abc");
// 	printf("%d\n", len);
// 	system("pause");
// 	return 0;
// }

//int jie(int a)
//{
//	if (a == 1)
//		return 1;
//	else
//		return a*jie(a - 1);
//	
//}
//
//int main()
//{
//	int a = 0;
//	int ret = 0;
//	scanf("%d", &a);
//	ret=jie(a);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a,i;
//	int sum = 1;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		sum = sum*i;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


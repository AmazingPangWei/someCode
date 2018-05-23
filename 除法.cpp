//#include <iostream>
//#include <cstdio>
//using namespace std;
///*
//输入正整数n，按从小到大的顺序输出所有形如 abcde / fghij = n的
//表达式,其中a~j恰好为数字0-9的一个排列(可以有前导0) ,2<=n<=79.
//
//输入描述
//有多组测试数据.
//对每组测试数据：
//在一行中给出正整数n.
//输入到文件结尾时结束输入.
//
//输出描述
//对每组测试用例：
//输出所有满足条件的表达式.每个表达式占一行.
//每个测试用例之间不用隔行。
//
//sample input
//62
//
//sample output
//79546 / 01283 = 62
//94736 / 01528 = 62
//*/
//
///*
//解题思路:
//1.先枚举分母x，分母的取值范围为[1234, 98765/2]
//2.然后根据分母和n计算出分子y
//3.最后判断x和y是否是由0-9这10个数字组成.如果是，就找到了一组解。
//*/
//int sum[10];
//
//bool fun(int z, int m)//分子与分母
//{
//	int i;
//	if (z < 10000)
//		sum[0]++;
//	if (m < 10000)
//		sum[0]++;
//	while (z)
//	{
//		sum[z % 10]++;
//		if (sum[z % 10] != 1)
//			return false;
//		z = z / 10;
//	}
//	while (m)
//	{
//		sum[m % 10]++;
//		if (sum[m % 10] != 1)
//			return false;
//		m = m / 10;
//	}
//	for (i = 0;i < 10;i++)
//		if (sum[i] != 1)
//			return false;
//	return true;
//}
//
//int main()
//{
//	int n;
//	int max = 98765 / 2;
//	while (cin >> n)
//	{
//		int m;
//		for (int i = 1234;i < max;i++) 
//		{
//			m = i*n;
//			memset(sum, 0, sizeof(sum));//统计0~9出现的个数，当0~9个数都为1才输出
//			if (fun(m, i))
//				printf("%05d / %05d = %d\n", m, i, n);
//		}
//	}
//
//	system("pause");
//	return 0;
//}
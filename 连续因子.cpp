///*
//L1-006. 连续因子
//时间限制
//400 ms
//内存限制
//65536 kB
//
//一个正整数N的因子中可能存在若干连续的数字。例如630可以分解为3*5*6*7，
//其中5、6、7就是3个连续的数字。给定任一正整数N，要求编写程序求出最长
//连续因子的个数，并输出最小的连续因子序列。
//
//输入格式：
//输入有多组测试数据.
//每组测试数据，在一行中给出一个正整数N。
//输入到文件末尾时输入结束.
//
//输出格式：
//对每组测试数据
//首先在第1行输出最长连续因子的个数；然后在第2行中按“因子1*因子2*……*因子k”
//的格式输出最长的连续因子序列，其中因子按递增顺序输出，1不算在内。
//
//输入样例：
//630
//输出样例：
//3
//5*6*7
//*/
//
///*
//解题思路：
//对每个数n,求出其从i(2<=i<=sqrt(n) )开始的连续因子的个数记为f[i]，
//找出其中最大的f[i]，记为N,
//输出 :
//N
//i，i+1,i+2,...,i+N
//*/
//#include <iostream>
//#include <cmath>
//#include <cstring>
//using namespace std;
//
//int fun(int n, int i)//n为输入值,从i开始统计其连续因子数
//{
//	int sum = 0;
//	while (n%i==0)
//	{
//		n = n / i;
//		sum++;
//		i++;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n, i;
//	while (cin >> n)
//	{
//		int max = sqrt(n) + 1;
//		int p[50000];//用数组p[n]来存从n开始连续因子的个数
//		memset(p, 0, sizeof(p));
//		for (i = 2;i <= max;i++)
//			p[i] = fun(n, i);
//		int Max = 2;
//		for (i = 3;i <= max;i++)
//			if (p[i] > p[Max])
//				Max = i;//Max为最大值的下标
//		if (p[Max] == 0)
//			cout << 1 << endl << n << endl;
//		else
//		{
//			cout << p[Max] << endl;
//			for (i = Max;i < Max + p[Max];i++)
//			{
//				cout << i;
//				if (i != Max + p[Max] - 1)
//					cout << '*';
//			}
//			cout << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
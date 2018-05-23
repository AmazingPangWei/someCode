////数位DP
//
//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//bool j_38(int n)
//{
//	int m = 0;
//	for (int i = n; i != 0; i /= 10)
//	{
//		if (m == 8 && i % 10 == 3)
//			return true;
//		m = i % 10;//记录各位
//	}
//	return false;
//}
//
//bool j_4(int n)
//{
//	for (int i = n; i != 0; i /= 10)
//	{
//		if (i % 10 == 4)
//			return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int n, m;
//	do
//	{
//		cin >> n >> m;
//		if (n == 0 && m == 0)
//			break;
//		int sum = 0;
//		for (int i = n; i <= m; i++)
//		{
//			bool j1 = j_38(i);
//			bool j2 = j_4(i);
//			if (j1 != false || j2 != false)
//			{
//				sum++;
//			}
//		}
//		printf("%d\n", sum);
//	} while (1);
//	
//	return 0;
//}
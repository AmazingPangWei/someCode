////算法竞赛入门经典P274
////d(i)=max{0,d(j)}+1(j<i,a[j]<a[i])
//#include <iostream>
//using namespace std;
//
//int LIS(int *p,int n)//最长上升子序列
//{
//	int b[10];//存前n个数的最长上升子序列
//	b[0] = 1;
//	for (int i = 1;i < n;i++)
//	{
//		b[i] = 1;
//		for (int j = 0;j < i;j++)
//		{
//			if (p[i] > p[j] && b[i]<b[j]+1)
//			{
//				b[i] = b[j] + 1;
//			}
//		}
//	}
//	int MAX = 0;
//	for (int i = 0;i < n;i++)
//		if (MAX < b[i])
//			MAX = b[i];
//	return MAX;
//}
//
//
//int main()
//{
//	int a[10];
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++)
//		cin >> a[i];
//	cout << LIS(a, n);
//
//	system("pause");
//	return 0;
//}
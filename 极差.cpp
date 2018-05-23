////贪心算法
////从小到大排列，每次取两个最小的相乘+1，可得最大数
////每次取两个最大数相乘，可得最小数
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a[50001];
//int main()
//{
//	int n;
//	cin >> n;
//	if (n == 2)
//		cout << 0 << endl;
//	else
//	{
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		sort(a, a + n);
//		int MAX = 0, MIN = 0;
//		for (int i = n - 3; i >= 0; i--)
//			MIN = (MIN + 1)*a[i];
//		for (int i = 2; i < n; i++)
//			MAX = (MAX + 1)*a[i];
//		cout << MAX - MIN << endl;
//	}
////	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//bool judge(int *a, int n)
//{
//	for (int i = 1; i < n; i++)
//		if (a[i] != a[i - 1])
//			return false;
//	return true;
//}
//
//int main()
//{
//	int a[1000];
//	int b[1000];
//	int ans = 0;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//
//	while (!judge(a,n))
//	{
//		for (int i = 0; i < n; i++)
//			if (a[i] % 2 == 1)
//			{
//				a[i]++;
//				ans++;
//			}
//		for (int i = 0; i < n; i++)
//		{
//			a[i] /= 2;
//			b[i] = a[i];
//		}
//		
//		for (int i = 1; i < n; i++)
//			a[i - 1] += b[i];
//		a[n - 1] += b[0];
//	}
//
//	cout << ans << endl;
////	system("pause");
//	return 0;
//}
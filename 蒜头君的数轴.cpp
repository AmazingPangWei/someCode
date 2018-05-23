//#include <iostream>
//#include <algorithm>
//#include <list>
//using namespace std;
//
//long long a[100005];
//long long pre[100005];
//
//int main()
//{
//	long long n;
//	cin >> n;
//	long long MIN=2000000005;
//	for (long long i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	for (long long i = 1; i < n; i++)
//	{
//		pre[i] = a[i] - a[i - 1];
//		MIN = min(pre[i], MIN);
//	}
//	int t = 0;
//	for (int i = 1; i < n; i++)
//	{
//		
//	}
//	if (t <= 1)
//	{
//		cout << (n - 1) - 1 << endl;
//	}
//	system("pause");
//	return 0;
//}
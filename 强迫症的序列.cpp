//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int a[100002];
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		sort(a, a + n);
//		int ans = 0 ;
//		int sum = 0;
//		for (int i = 0; i < n-1; i++)
//		{
//			ans = ans + (a[i + 1] - a[i]);
//			sum += ans;
//		}
//		ans = sum - ans + a[n - 1];
//		cout << sum << ' ' << ans << endl;
//	}
//
//
////	system("pause");
//	return 0;
//}
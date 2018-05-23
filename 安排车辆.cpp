//#include <iostream>
//#include <algorithm>
//using namespace std;
//int t[1000000];
//int main()
//{
//	int n;
//	cin >> n;
//	int MAX = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int a, b;
//		char c;
//		cin >> a  >> c >> b;
//		if (MAX < a)
//			MAX = a;
//		if (MAX < b)
//			MAX = b;
//		for (int i = a; i <= b; i++)
//			t[i]++;
//	}
//	int ans=0;
//	for (int i = 0; i <= MAX; i++)
//		if (t[i])
//			ans = max(ans, t[i]);
//	cout << ans << endl;
////	system("pause");
//	return 0;
//}
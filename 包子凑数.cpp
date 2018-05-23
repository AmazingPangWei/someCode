//#include <iostream>
//#include <algorithm>
//#define N 10000
//using namespace std;
//
//bool a[N];
//int t[101];
//pair<int, int> x;
//int gcd(int a, int b)
//{
//	if (b == 0)
//		return 0;
//	return a % b == 0 ? b : gcd(b, a%b);
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	memset(a, 0, sizeof(a));
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	int flag = gcd(a[0], a[1]);
//	for (int i = 2; i < n; i++)
//	{
//		flag = min(flag, gcd(flag, a[i]));
//	}
//	if (flag != 1)
//	{
//		cout << "INF" << endl;
//	}
//	else
//	{
//		
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//long long poww(long long a, long long b ,long long mod)//a^b % mod
//{
//	long long ans = 1;
//	long long base = a%mod;
//	while (b > 0)
//	{
//		if (b & 1 == 1)
//			ans = (ans*base)%mod;
//		base = (base*base) % mod;
//		b = b >> 1;
//	}
//	return ans;
//}
//
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		long long x, a, y, b;
//		cin >> x >> a >> y >> b;
//		if (poww(x, a, 100000007) == poww(y, b, 100000007))
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//
//	system("pause");
//	return 0;
//}
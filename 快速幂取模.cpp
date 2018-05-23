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
//int main()
//{
//	cout << (9 * poww(6, 1000000005, 1000000007)) % 1000000007 << endl;
//
//	system("pause");
//	return 0;
//}
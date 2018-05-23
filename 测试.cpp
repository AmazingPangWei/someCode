//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int poww(int a, int b, int mod)
//{
//	int base = a%mod;
//	int ans = 1;
//	while (b > 0)
//	{
//		if (b & 1)//bĩβΪ1
//		{
//			ans = base * ans % mod;
//		}
//		base *= base;
//		base %= mod;
//		b = b >> 1;
//	}
//	return ans;
//}
//
//int main() 
//{
//	cout << poww(2, 10, 10) << endl;
//	system("pause");
//	return 0;
//}
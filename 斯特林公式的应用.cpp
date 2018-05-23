////http://blog.csdn.net/liangzhaoyang1/article/details/51145807
////题目：给一个整数n，求n！的在8进制下的位数是多少位
//#include <iostream>
//#include <cmath>
//#define Pi 3.1415926535
//using namespace std;
//
//long long Stirling(long long n)
//{
//	if (n == 0)
//		return 1;
//	else
//
//		return floor((log10(Pi * 2 * n) / log10(8)) / 2 + n*(log10(n / exp(1)) / log10(8))) + 1;
//}
//int main()
//{
//	long long N;
//	scanf("%lld", &N);
//	while (N--)
//	{
//		long long n;
//		scanf("%lld", &n);
//		printf("%lld\n", Stirling(n));
//	}
//	system("pause");
//	return 0;
//}
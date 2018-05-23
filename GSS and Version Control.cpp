//#include <iostream>
//#include <string>
//#include <cstdio>
//using namespace std;
//long long a[100000000];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	a[0] = 0;
//	long long now = 1;
//	while (n--)
//	{
//		char s[20];
//		scanf("%s", s);
//		long long t;
//		scanf("%lld", &t);
//		if (s[1] == 'o')
//		{
//			long long x = a[now - 1] ^ t;
//			a[now] = x;
//			printf("%lld\n", x);
//		}
//		else
//		{
//			a[now] = a[t];
//			printf("%lld\n", a[now]);
//		}
//		now++;
//	}
////	system("pause");
//	return 0;
//}

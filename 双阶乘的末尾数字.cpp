//#include <iostream>
//#include <stdio.h>
//using namespace std;
//typedef long long LL;
//
//bool fun(LL x, LL y,LL k)
//{
//	int temp=1;
//	for (LL i = x; i >= y + 2; i = i - 2)
//	{
//		temp *= (i % 10);
//		temp %= 10;
//	}
//	if (temp == k)
//		return true;
//	else
//		return false;
//}
//
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//
//	while (T--)
//	{
//		LL x, k;
//		scanf("%lld %lld",&x,&k);
//		if (k == 1)
//		{
//			printf("%lld\n", x);
//			continue;
//		}
//		else
//		{
//			LL i;
//			for (i = x-2; i >= 0; i = i - 2)
//			{
//				if (fun(x, i, k))
//				{
//					printf("%lld\n", i);
//					break;
//				}
//			}
//			if (i < 0)
//				printf("-1\n");
//		}
//
//
//	}
//
//
//	//system("pause");
//	return 0;
//}
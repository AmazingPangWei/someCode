//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//bool isprime(int n)
//{
//	if (n == 1)
//		return false;
//	else
//		for (int i = 2; i < sqrt(n); i++)
//		{
//			if (n % i == 0)
//				return false;
//		}
//	return true;
//
//}
//
//int main()
//{
//	int a[8] = { 0,1,2,3,4,5,6,7};
//	long long ans = 0;
//	do
//	{
//		if (a[0] == 0)
//			continue;
//		else
//		{
//			long long num = 0;
//			for (int i = 0; i < 8; i++)
//			{
//				num = num * 10 + a[i];
//			}
//			int flag = 0;
//			for (int i = 2; i < sqrt(num); i++)
//				if (num % i == 0)
//				{
//					flag = 1;
//					break;
//				}
//			if (!flag)
//				ans++;
//		}
//	} while (next_permutation(a,a+8));
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}
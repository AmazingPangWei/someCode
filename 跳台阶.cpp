//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	long long t;
//	cin >> t;
//	while (t--)
//	{
//		long long a[50];
//		long long n;
//		cin >> n;
//		memset(a, 0, sizeof(a));
//		if (n == 1)
//		{
//			cout << 1 << endl;
//			continue;
//		}
//		else if (n == 2)
//		{
//			cout << 2  << endl;
//			continue;
//		}
//		else
//		{
//			a[1] = 1;
//			a[2] = 2;
//			for (long long i = 3; i <= n; i++)
//			{
//				for (int j = 1; j < i; j++)
//				{
//					a[i] += a[j];
//				}
//				a[i] += 1;
//			}
//			cout << a[n]<< endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
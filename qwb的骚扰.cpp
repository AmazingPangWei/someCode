//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n, x, y;
//		cin >> n >> x >> y;
//		if (n < x)
//		{
//			cout << 0 << endl;
//			continue;
//		}
//		if (x >= 3 * y)
//		{
//			if (n == x)
//			{
//				cout << 3 << endl;
//				continue;
//			}
//			int sum = 3;
//			n -= x;
//			sum += n / y;
//			cout << sum << endl;
//		}
//		else
//		{
//			int sum = (n / x) * 3 + (n%x) / y;
//			cout << sum << endl;
//		}
//	}
//
////	system("pause");
//	return 0;
//}
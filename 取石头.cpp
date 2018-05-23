//#include <iostream>
//using namespace std;
//
//int f[100000];
////1 3 7 8
//int main()
//{
//	f[1] = 0;
//	f[2] = 1;
//	f[3] = 0;
//	f[4] = 1;
//	f[5] = 0;
//	f[6] = 1;
//	f[7] = 0;
//	f[8] = 1;
//	int n, m;
//	cin >> m;
//	while (m--)
//	{
//		cin >> n;
//		if (n <= 8)
//		{
//			cout << f[n] << endl;
//			continue;
//		}
//		else
//		{
//			for (int i = 9; i <= n; i++)
//				if (f[i - 1] == 0 || f[i - 3] == 0 || f[i - 7] == 0 || f[i - 8] == 0)
//					f[i] = 1;
//				else
//					f[i] = 0;
//		}
//		cout << f[n] << endl;
//	}
////	system("pause");
//	return 0;
//}
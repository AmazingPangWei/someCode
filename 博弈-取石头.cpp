////Nim²©ÞÄ
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int a[100000];
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		int k = a[0];
//		for (int i = 1; i < n; i++)
//			k ^= a[i];
//		if (k == 0)
//			cout << "No" << endl;
//		else
//		{
//			cout << "Yes" << endl;
//			for (int i = 0; i < n; i++)
//			{
//				int t = k ^ a[i];
//				if (t < a[i])
//				{
//					cout << a[i] << ' ' << t << endl;
//				}
//			}
//		}
//	}
////	system("pause");
//	return 0;
//}
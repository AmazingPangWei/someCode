//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int a[100001];
//bool r[100001];
//int main()
//{
//	int N;
//	memset(a, 0, sizeof(a));
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int t;
//		cin >> t;
//		if (i == 0)
//		{
//			a[i] = t;
//		}
//		else
//			a[i] = a[i - 1] + t;
//	}
//	for (int i = 0; i < N - 1; i++)
//	{
//		if (a[i] < 0)
//		{
//			int t = a[N - 1] - a[i];//后面的区间
//			int flag = 0;
//			for (int j = i + 1; j < N; j++)
//				if (a[j]-a[i] <= 0)
//				{
//					flag = 1;
//					break;
//				}
//			if (!flag && a[i] < 0 && t > 0 && t + a[i] > 0)
//			{
//				cout << i+2 << endl;
//				//system("pause");
//				return 0;
//			}
//		}
//	}
//	cout << -1 << endl;
////	system("pause");
//	return 0;
//}
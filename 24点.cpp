//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//double a[4];
//
//bool solve()
//{
//	do //防止出现6 6 6 6这样不通过的情况
//	{
//		for (int i = 0; i < 4; i++)
//			for (int j = 0; j < 4; j++)
//				for (int k = 0; k < 4; k++)
//				{
//					double sum = 0;
//					switch (i)
//					{
//					case 0:sum = a[0] + a[1]; break;
//					case 1:sum = a[0] - a[1]; break;
//					case 2:sum = a[0] * a[1]; break;
//					case 3:sum = a[0] / a[1]; break;
//					}
//					switch (j)
//					{
//					case 0:sum = sum + a[2]; break;
//					case 1:sum = sum - a[2]; break;
//					case 2:sum = sum * a[2]; break;
//					case 3:sum = sum / a[2]; break;
//					}
//					switch (k)
//					{
//					case 0:sum = sum + a[3]; break;
//					case 1:sum = sum - a[3]; break;
//					case 2:sum = sum * a[3]; break;
//					case 3:sum = sum / a[3]; break;
//					}
//					if (sum == 24)
//						return true;
//				}
//	} while (next_permutation(a, a + 4));
//	return false;
//}
//
//int main()
//{
//	double n;
//	cin >> n;
//	while (n--)
//	{
//		memset(a, 0, sizeof(a));
//		cin >> a[0] >> a[1] >> a[2] >> a[3];
//		sort(a, a + 4);
//		bool t = solve();
//		if (t)
//		{
//			cout << "Yes" << endl;
//		}
//		else
//			cout << "No" << endl;
//	}
//	system("pause");
//	return 0;
//}
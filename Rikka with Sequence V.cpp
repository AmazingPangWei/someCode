//#include <iostream>
//using namespace std;
//
//int a[100001];
//int main()
//{
//	int n;
//	cin >> n;
//	if (n % 2 == 0)
//	{
//		int temp = 1;
//		for (int i = 1; i <= n / 2; i++)
//		{
//			a[i] = temp;
//			temp += 2;
//		}
//		temp = 2;
//		for (int i = n; i > n / 2; i--)
//		{
//			a[i] = temp;
//			temp += 2;
//		}
//	}
//	else
//	{
//		int temp = 1;
//		for (int i = 1; i <= n / 2; i++)
//		{
//			a[i] = temp;
//			temp += 2;
//		}
//		a[n / 2 + 1] = temp;
//		temp = 2;
//		for (int i = n; i > (n- n / 2); i--)
//		{
//			a[i] = temp;
//			temp += 2;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//		cout << a[i] << ' ';
////	system("pause");
//	return 0;
//}
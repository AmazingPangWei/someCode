//#include <iostream>
//#include <cstdio>
//using namespace std;
//
////A1 = 能被5整除的数字中所有偶数的和；
////A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1 - n2 + n3 - n4...；
////A3 = 被5除后余2的数字的个数；
////A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
////A5 = 被5除后余4的数字中最大数字。
//
//int a[1000];
//int n;
//
//void A1()
//{
//	int sum = 0;
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 5 == 0 && a[i] % 2 == 0)
//		{
//			sum += a[i];
//			ans++;
//		}
//
//	}
//	if (ans == 0)
//		cout << 'N' << ' ';
//	else
//		cout << sum << ' ';
//}
//
//void A2()
//{
//	int sum = 0;
//	int temp = 0;
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 5 == 1)
//		{
//			if (temp == 0)
//			{
//				sum += a[i];
//				temp++;
//				ans++;
//			}
//			else
//			{
//				sum -= a[i];
//				temp--;
//				ans++;
//			}
//		}
//	}
//	if (ans == 0)
//		cout << 'N' << ' ';
//	else
//		cout << sum << ' ';
//}
//
//void A3()
//{
//	int i,t = 0;
//	for (i = 0;i < n;i++)
//		if (a[i] % 5 == 2)
//			t++;
//	if (t == 0)
//		cout << 'N' << ' ';
//	else
//		cout << t << ' ';
//}
//
//void A4()
//{
//	int i, t = 0;
//	double sum = 0;
//	for (i = 0;i < n;i++)
//		if (a[i] % 5 == 3)
//		{
//			sum = sum + a[i];
//			t++;
//		}
//	if (t == 0)
//		cout << 'N' << ' ';
//	else {
//		sum = sum / t;
//		printf("%.1lf ", sum);
//	}
//}
//
//void A5()
//{
//	int max = 0;
//	int ans = 0;
//	for(int i=0;i<n;i++)
//		if (a[i] % 5 == 4)
//		{
//			ans++;
//			if (max < a[i])
//				max = a[i];
//		}
//	if (ans == 0)
//		cout << 'N';
//	else
//		cout << max;
//
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	A1();
//	A2();
//	A3();
//	A4();
//	A5();
//	system("pause");
//	return 0;
//}
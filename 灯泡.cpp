//#include <iostream>
//using namespace std;
//
//int light[101];
//int main()
//{
//	int n;
//	int sum = 100;
//	cin >> n;
//	for (int i = 1; i <= 100; i++)
//		light[i] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = i; j <= 100; j = j + i)
//		{
//			if (light[j] == 0)
//			{
//				light[j] = 1;
//				sum++;
//			}
//			else if (light[j] == 1)
//			{
//				light[j] = 0;
//				sum--;
//			}
//		}
//	}
//	cout << sum << endl;
//
////	system("pause");
//	return 0;
//}
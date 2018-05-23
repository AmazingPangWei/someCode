//#include <iostream>
//using namespace std;
//
//
//int a[100][100];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			cin >> a[i][j];
//	int sum = 0;
//	for (int i = 0; i < n-2; i++)
//		for (int j = 0; j < m - 2; j++)
//		{
//			int num1 = 0, num2 = 0, num3 = 0, left = 0, right = 0;
//			int col1 = 0, col2 = 0, col3 = 0;
//			for (int k = j; k <= j + 2; k++)
//			{
//				num1 += a[i][k];
//				num2 += a[i + 1][k];
//				num3 += a[i + 2][k];
//			}
//			for (int k = i; k <= i + 2; k++)
//			{
//				col1 += a[k][j];
//				col2 += a[k][j+1];
//				col3 += a[k][j+2];
//			}
//
//			left = a[i][j] + a[i + 1][j + 1] + a[i + 2][j + 2];
//			right = a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j];
//
//			if (num1 == num2 && num2 == num3 && num3 == right && right == left && left == col1 && col1 == col2 && col2 == col3)
//				sum++;
//		}
//	cout << sum << endl;
//
////	system("pause");
//	return 0;
//}
////����dp
////http://blog.csdn.net/qq_27601815/article/details/52938608
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int m[100][100]; //i~j���Ĵ�С
//int dp[100][100];//i,j��ʾǰi�����м���j���˺�     
//int a[100];
//int n, k;
//void init()
//{
//	for(int i=1;i<=n;i++)
//		for (int j = i; j <= n; j++)
//		{
//			if (i == j)
//				m[i][j] = a[i];
//			else
//				m[i][j] = m[i][j - 1] * 10 + a[j];
//		}
//}
//int main()
//{
//	cin >> n >>k;
//	string t;
//	cin >> t;
//	for (int i = 1; i <= n; i++)
//		a[i] = t[i - 1] - '0';
//	init();
//	for(int i=1;i<=n;i++)//ǰiλ��
//		for (int j = 0; j <= i - 1; j++)//�˺Ÿ���
//		{
//			if (j == 0)
//			{
//				dp[i][j] = m[1][i];
//				continue;
//			}
//			else
//			{
//				for (int k = 1; k < i; k++)//ö�ٳ˺�λ��
//				{
//					dp[i][j] = max(dp[i][j], dp[k][j - 1] * m[k + 1][i]);
//				}
//			}
//		}
//	cout << dp[n][k-1] << endl; ////ǰn�����ֳַ�k�Σ��൱��ǰ�����k-1���˺�  
////	system("pause");
//	return 0;
//}
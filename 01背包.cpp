//#include <iostream>
//#define max(a,b) a>b?a:b
//using namespace std;
//
//
//int w[100];
//int v[100];
//int dp[101][101]; //Ŀǰ���ڵ�i��,ʣ�����װW����Ʒʱ�����ļ�ֵ
//
//void solve(int n) //��n��
//{
//	for (int i = n-1; i >= 0 ; i--)
//	{
//		for (int j = 0; j < 100; j++)
//		{
//			if (w[i] > j)
//				dp[i][j] = dp[i + 1][j];//����װ���£���ֱ�Ӽ̳���һ��
//			if (w[i] <= j) //��װ����
//			{
//				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> w[i];
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//	solve(n);
//	cout << dp[0][99] << endl;
////	system("pause");
//	return 0;
//}
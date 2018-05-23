//#include <iostream>
//#include <cstring>
//using namespace std;
//
//bool p[8001][8001];//1ÊÇºì£¬0ÊÇºÚ
//long long ans = 0;
//int main()
//{
//	int n,m;
//	memset(p, 0, sizeof(p));
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		p[a][b] = 1;
//		p[b][a] = 1;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i+1; j <= n; j++)
//		{
//			for (int k = j + 1; k <= n; k++)
//			{
//				if (p[i][j] == p[j][k] && p[j][k] == p[i][k])
//				{
//					ans++;
//				}
//			}
//		}
//	}
//	cout << ans << endl;
////	system("pause");
//	return 0;
//}
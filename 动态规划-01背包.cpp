////紫书P272
////有n中物品，每种只有一个。第i种物品的体积为Vi，重量为Wi。选一些物品装到一个容量为C的背包
////使得背包内物品在总体积不超过C的前提下重量尽量大。1<=n<=100，1<=Vi<=C<=10000,1<=Wi<=10^6。
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
////dp[i][j]表示目前处于第i层(即还需要取i~n的物品)，剩余可取体积为j时，能取到的最大重量
////dp[i][j]=max(dp[i+1][j],dp[i+1][j-v[i]]+w[i])
////答案即为dp[1][C]
//int dp[100][100];
//int v[100];
//int w[100];
//int C, n;
//
//
//int solve()
//{
//	for(int i=n;i>=1;i--)//逆推  层数
//		for (int j = 0;j <= C;j++)//剩余的体积
//		{
//			if (i == n)
//				dp[i][j] = 0;//当i处于第n层时,赋值0,之后下面的判断，若能再加物品则加，不能加则不加
//			else
//				dp[i][j] = dp[i + 1][j];//将上一层数值赋予它,用于下面的判断，如果不能j<Vi则说明不能再加东西，正好也该赋dp[i+1][j]
//			if (j <= v[i])
//				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - v[i]] + w[i]);
//			    //dp[i][j]=max(dp[i][j],dp[i+1][j-v[i]]+w[i]);也一样，因为之前也已经赋值了的
//		}
//	return dp[1][C];
//}
//
//int main()
//{
//	cin >> n >> C;
//	for (int i = 1;i <= n;i++)
//		cin >> v[i] >> w[i];
//	cout << solve() << endl;
//
//
//	system("pause");
//	return 0;
//}
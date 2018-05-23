////¶¯Ì¬¹æ»®
////dp[i][j] = dp[i - 1][j - 1] + 1; (str1[i - 1] == str2[j - 1])
////dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  (str1[i - 1] != str2[j - 1])
//#include <iostream>
//#include <cstring>
//using namespace std;
//#define max(a,b) a>b?a:b;
//
//char str1[1001], str2[1001];
//int dp[1001][1001];
//
//int main()
//{
//	int n;
//	int i, j;
//	cin >> n;
//	while (n--)
//	{
//		int len1, len2;
//		memset(dp, 0, sizeof(dp));
//		cin >> str1 >> str2;
//		len1 = strlen(str1);
//		len2 = strlen(str2);
//		for (i = 1;i <= len1;i++)
//			for (j = 1;j <= len2;j++)
//			{
//				if (str1[i - 1] == str2[j - 1])
//					dp[i][j] = dp[i - 1][j - 1] + 1;
//				else
//					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//			}
//		cout << dp[len1][len2] << endl;
//	}
//	system("pause");
//	return 0;
//}
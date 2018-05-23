//#include <iostream>    
//#include <cstring>  
//#include <string>
//#include <algorithm>
//using namespace std;
//
//#define MAX 2000      
//
//int dp[MAX][MAX];
////i~j的最长回文子序列长度
////状态初始条件：dp[i][i]=1 （i=0：n-1）
////状态转移方程：dp[i][j] = dp[i + 1][j - 1] + 2  if（str[i] == str[j]）
////dp[i][j] = max(dp[i + 1][j], dp[i][j - 1])  if （str[i] != str[j]）
////计算dp[i][j]时需要计算dp[i+1][*]或dp[*][j-1]，
////因此i应该从大到小，即递减；j应该从小到大，即递增。
////void LPS_Length(char *s, int len)
////{
////	for (int i = len - 1; i >= 0; i--)
////	{
////		//  当i=j时，dp(i,j)==1  
////		dp[i][i] = 1;
////		for (int j = i + 1; j<len; j++)
////		{
////			//  当i<j并且s[i]=s[j]时，dp(i,j)=dp(i+1,j-1)+2  
////			if (s[i] == s[j])
////				dp[i][j] = dp[i + 1][j - 1] + 2;
////			else
////			//  当i<j并且s[i]≠s[j]时，dp(i,j)=max( dp(i,j-1), dp(i+1,j) )  
////				dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
////		}
////	}
////}
//
//void LPS_Length(string s)
//{
//	//dp[i][j]=dp[i+1][j-1]+2 
//	//dp[i][j]=max(dp[i+1][j],dp[i][j-1])
//	for (int i = s.size() - 1; i >= 0; i--)
//	{
//		dp[i][i] = 1;
//		for (int j = i + 1; j < s.size(); j++)
//		{
//			if (s[i] == s[j])
//			{
//				dp[i][j] = dp[i + 1][j - 1] + 2;
//			}
//			else
//			{
//				dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		memset(dp, 0, sizeof(dp));
//		LPS_Length(s);
//		cout << s.size() - dp[0][s.size() - 1] << endl;
//	}
//	system("pause");
//	return 0;
//}
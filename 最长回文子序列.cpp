//#include <iostream>    
//#include <cstring>  
//#include <string>
//#include <algorithm>
//using namespace std;
//
//#define MAX 2000      
//
//int dp[MAX][MAX];
////i~j������������г���
////״̬��ʼ������dp[i][i]=1 ��i=0��n-1��
////״̬ת�Ʒ��̣�dp[i][j] = dp[i + 1][j - 1] + 2  if��str[i] == str[j]��
////dp[i][j] = max(dp[i + 1][j], dp[i][j - 1])  if ��str[i] != str[j]��
////����dp[i][j]ʱ��Ҫ����dp[i+1][*]��dp[*][j-1]��
////���iӦ�ôӴ�С�����ݼ���jӦ�ô�С���󣬼�������
////void LPS_Length(char *s, int len)
////{
////	for (int i = len - 1; i >= 0; i--)
////	{
////		//  ��i=jʱ��dp(i,j)==1  
////		dp[i][i] = 1;
////		for (int j = i + 1; j<len; j++)
////		{
////			//  ��i<j����s[i]=s[j]ʱ��dp(i,j)=dp(i+1,j-1)+2  
////			if (s[i] == s[j])
////				dp[i][j] = dp[i + 1][j - 1] + 2;
////			else
////			//  ��i<j����s[i]��s[j]ʱ��dp(i,j)=max( dp(i,j-1), dp(i+1,j) )  
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
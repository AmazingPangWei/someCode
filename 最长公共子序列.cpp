//#include <iostream>
//#include <string>
//#include <algorithm>
//#define MAX 100
//using namespace std;
//
//int dp[MAX][MAX];
////i,j ,s1~s1[i]��s2~s2[j]����������г���
////��s1[i+1]==s2[j+1]ʱ,���ʾ��s1[i]��s2[j]����������г�����+1
////��s1[i+1]!=s2[j+1]ʱ,���ʾ������s1[i+1]��s2[j]���������ϻ�s1[i]��s2[j+1]����������
////���� if(s1[i+1]==s2[j+1]) dp[i+1][j+1]=dp[i][j]+1 
////     if(s1[i+1]!=s2[j+1]) max(dp[i+1][j],dp[i][j+1])
//string s1, s2;
//void solve()
//{
//	for (int i = 0; i < s1.size(); i++)
//	{
//		for (int j = 0; j < s2.size(); j++)
//		{
//			if (s1[i] == s2[j])
//			{
//				dp[i+1][j+1] = dp[i][j] + 1;
//			}
//			else
//			{
//				dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> s1 >> s2;
//	solve();
//	cout << dp[s1.size()][s2.size()] << endl;
//	system("pause");
//	return 0;
//}
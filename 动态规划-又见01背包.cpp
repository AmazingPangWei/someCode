////��n�������ͼ�ֵ�ֱ�Ϊwi �� vi �� ��Ʒ������Щ��Ʒ��ѡ�������������� W
////����Ʒ����������ѡ��������Ʒ��ֵ�ܺ͵����ֵ��
////1 <= n <= 100
////1 <= wi <= 10 ^ 7
////1 <= vi <= 100
////1 <= W <= 10 ^ 9
////����
////����������ݡ�
////ÿ��������ݵ�һ�����룬n �� W ����������n�У�ÿ�������������������i����Ʒ��wi �� vi��
////���
////�������������ֵ��ÿ���������ռһ�С�
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//
//int n, W;
//int v[101];
//int dp[100001];//�ŵ�i����Ʒ,ʣ���ֵΪjʱ����С����
//int w[101];
//int sum;
//
////dp[i]=min(dp[i-1],dp[i-w[i]]+v[i])  ��ֵ��ͬ������£���������С
//
//int solve()
//{
//	dp[0] = 0;//��ֵΪ0ʱ������Ϊ0
//	for(int i=1;i<=n;i++)
//		for (int j = sum;j>=v[i];j--)
//		{
//				dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
//		}
//
//	while (dp[sum] > W)
//		sum--;
//	return sum;
//}
//
//int main()
//{
//	while (cin >> n >> W)
//	{
//		memset(dp, 0x3f, sizeof(dp));
//		memset(v, 0, sizeof(v));
//		memset(w, 0, sizeof(w));
//		sum = 0;
//		for (int i = 1;i <= n;i++)
//		{
//			cin >> w[i] >> v[i];
//			sum += v[i];
//		}
//		cout << solve() << endl;
//	}
////	system("pause");
//	return 0;
//}
////����
////����һ��������{ a1,a2...,an }���ҳ������ǿ��Ӵ�{ ax,ax + 1,...,ay }��ʹ�ø������еĺ�������У�1 <= x <= y <= n��
////����
////��һ����һ������N(N <= 10)��ʾ�������ݵ�������
////ÿ��������ݵĵ�һ����һ������n��ʾ�����й���n������������һ������n������I(-100 = <I <= 100)����ʾ�����е�����Ԫ�ء�(0<n <= 1000000)
////	���
////	����ÿ�����������������������Ӵ��ĺ͡�
////	��������
////	1
////	5
////	1 2 - 1 3 - 2
//
////״̬ת�Ʒ���   dp[i]=max{dp[i-1]+x[i],x[i]};
//
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int dp[1000002];//ǰn�������Ӵ���
//int a[1000002];
//int n;
//
//int solve()
//{
//	dp[0] = a[0];
//	int MAX = a[0];
//	for (int i = 1;i < n;i++)
//	{
//		dp[i] = max(dp[i - 1] + a[i], a[i]);
//		MAX = max(dp[i], MAX);
//	}
//	return MAX;
//}
//
//int main()
//{
//	int m;
//	scanf("%d",&m);
//	while (m--)
//	{
//		memset(dp, 0, sizeof(dp));
//		memset(a, 0, sizeof(a));
//		scanf("%d", &n);
//		for (int i = 0;i < n;i++)
//			scanf("%d", &a[i]);
//		printf("%d\n", solve());
//	}
//	return 0;
//}
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
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#define INF 0x3f3f3f3f
//using namespace std;
//
//int temp;//��¼�Ӵ��ĺ�,��sum���и���
//int sum;//����Ӵ���
//int a[1000002];
//int n;
//
//int solve()
//{
//	for (int i = 0;i < n;i++)
//	{
//		temp += a[i];
//		if (temp > sum)
//			sum = temp;
//		if (temp < 0)
//			temp = 0;
//	}
//	return sum;
//}
//
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	while (m--)
//	{
//		memset(a, 0, sizeof(a));
//		sum = -INF;
//		temp = 0;
//		scanf("%d", &n);
//		for (int i = 0;i < n;i++)
//			scanf("%d", &a[i]);
//		printf("%d\n", solve());
//	}
////	system("pause");
//	return 0;
//}
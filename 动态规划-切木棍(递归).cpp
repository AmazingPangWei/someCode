////��ɫ�㷨��P278
//
///*
//Sample Input
//100
//3
//25 50 75
//10
//4
//4 5 7 8
//0
//Sample Output
//The minimum cutting is 200.
//The minimum cutting is 22.
//���⣺
//
//�����������һ�ҽ�Analog Cutting Machinery (ACM)�Ĺ�˾�и�ľ����
//�и�ľ���ĳɱ��Ǹ���ľ���ĳ��ȶ����� �����и�ľ����ʱ��ÿ��ֻ��һ�Ρ�
//
//����Ȼ�ģ���ͬ�и��˳����в�ͬ�ĳɱ��� ���磺
//��һ����10���ߵ�ľ�������ڵ�2��4��7���ߵĵط��и
//���ʱ����м���ѡ���ˡ������ѡ������2���ߵĵط���
//Ȼ����4���ߵĵط��������7���ߵĵط���������ѡ����ɱ�Ϊ��10+8+6=24��
//��Ϊ��һ����ʱľ����10���ߣ��ڶ�����ʱľ����8���ߣ���������ʱľ����6���ߡ�
//���������ѡ������4���ߵĵط���Ȼ����2���ߵĵط��������7���ߵĵط���
//��ɱ�Ϊ��10+4+6=20����ɱ�����һ���Ϻõ�ѡ��
//
//����ϰ�������ĵ�������һ�������ҳ��и�һľ��������С�ĳɱ���
//
//˼·�����͵Ķ�̬�滮��Ŀ���е�������������⣬
//�ҵ�״̬ת�ƹ�ʽ�ͺ���dp[i][j]=min{dp[i][k]+dp[k][j]+len[j]-len[i]|i<k<j}
//*/
//
//#include <iostream>
//#define max 100
//#define INF 0x3f3f3f3f
//using namespace std;
//
//int dp[max][max];
//int len[max];//�����и�ľͷ��λ��
//
//int solve(int start, int end)//dp[i][j]=max{dp[i][k]+dp[k][j]+len[j]-len[i]|i<k<j}
//{
//	if (start + 1 == end)
//		return 0;
//	for (int k = start + 1;k < end;k++)
//	{
//		int temp;
//		temp = solve(start,k) + solve(k,end) + len[end] - len[start];//�и�ÿһ�ε������ѡȡ��С�����
//		if (temp < dp[start][end])
//			dp[start][end] = temp;
//	}
//	return dp[start][end];
//}
//
//int main()
//{
//	int L, n;//�ֱ��ʾľͷ�ĳ��Ⱥ��и����
//	cin >> L >> n;
//	len[n + 1] = L;
//	for (int i = 1;i <= n;i++)
//		cin >> len[i];
//	for (int i = 0;i <= n + 1;i++)
//		for (int j = 0;j <= n + 1;j++)
//			dp[i][j] = INF;
//	cout << solve(0, n + 1);
//
//	system("pause");
//	return 0;
//}
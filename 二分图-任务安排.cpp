//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//const int maxn = 305;
//const int inf = 0x3f3f3f3f;
//
//int love[maxn][maxn];   // ��¼ÿ�����Ӻ�ÿ�������ĺøж�
//int ex_girl[maxn];      // ÿ�����ӵ�����ֵ
//int ex_boy[maxn];       // ÿ������������ֵ
//bool vis_girl[maxn];    // ��¼ÿһ��ƥ��ƥ�����Ů��
//bool vis_boy[maxn];     // ��¼ÿһ��ƥ��ƥ���������
//int match[maxn];        // ��¼ÿ������ƥ�䵽������ ���û����Ϊ-1
//int slack[maxn];        // ��¼ÿ����������ܱ������������ٻ���Ҫ��������ֵ
//
//int n, m;
//
//
//bool dfs(int girl)
//{
//	vis_girl[girl] = true;
//
//	for (int boy = 0; boy < m; ++boy) {
//
//		if (vis_boy[boy]) continue; // ÿһ��ƥ�� ÿ������ֻ����һ��
//
//		int gap = ex_girl[girl] + ex_boy[boy] - love[girl][boy];
//
//		if (gap == 0) {  // �������Ҫ��
//			vis_boy[boy] = true;
//			if (match[boy] == -1 || dfs(match[boy])) {    // �ҵ�һ��û��ƥ������� ���߸����������ӿ����ҵ�������
//				match[boy] = girl;
//				return true;
//			}
//		}
//		else {
//			slack[boy] = min(slack[boy], gap);  // slack �������Ϊ������Ҫ�õ�Ů�������� �����������ֵ ȡ��Сֵ ��̥�����ӡ�����
//		}
//	}
//
//	return false;
//}
//
//int km()
//{
//	memset(match, -1, sizeof match);    // ��ʼÿ��������û��ƥ���Ů��
//	memset(ex_boy, 0, sizeof ex_boy);   // ��ʼÿ������������ֵΪ0
//
//										// ÿ��Ů���ĳ�ʼ����ֵ�������������������ĺøж�
//	for (int i = 0; i < n; ++i) {
//		ex_girl[i] = love[i][0];
//		for (int j = 1; j < n; ++j) {
//			ex_girl[i] = max(ex_girl[i], love[i][j]);
//		}
//	}
//
//	// ����Ϊÿһ��Ů�������������
//	for (int i = 0; i < n; ++i)
//	{
//
//		fill(slack, slack + m, inf);    // ��ΪҪȡ��Сֵ ��ʼ��Ϊ�����
//
//		while (1) {
//			// Ϊÿ��Ů�������������ķ����� ������Ҳ����ͽ�������ֵ��ֱ���ҵ�Ϊֹ
//
//			// ��¼ÿ��ƥ��������Ů���Ƿ񱻳���ƥ���
//			memset(vis_girl, false, sizeof vis_girl);
//			memset(vis_boy, false, sizeof vis_boy);
//
//			if (dfs(i)) break;  // �ҵ����� �˳�
//
//								// ��������ҵ� �ͽ�������ֵ
//								// ��С�ɽ��͵�����ֵ
//			int d = inf;
//			for (int j = 0; j < m; ++j)
//				if (!vis_boy[j])
//					d = min(d, slack[j]);
//
//			for (int j = 0; j < n; ++j) 
//				// ���з��ʹ���Ů����������ֵ
//				if (vis_girl[j])
//					ex_girl[j] -= d;
//			for (int j = 0; j < m; ++j)
//			{
//				// ���з��ʹ���������������ֵ
//				if (vis_boy[j])
//					ex_boy[j] += d;
//				// û�з��ʹ���boy ��Ϊgirl�ǵ�����ֵ���ͣ�����õ�Ů�������ֽ���һ����
//				else
//					slack[j] -= d;
//			}
//			
//		}
//	}
//	// ƥ����� ���������Եĺøжȵĺ�
//	int res = 0;
//	for (int i = 0; i < m; ++i)
//		res += love[match[i]][i];
//
//	return res;
//}
//
//int main()
//{
//	while (~scanf("%d%d", &n,&m)) 
//	{
//
//		for (int i = 0; i < n; ++i)
//			for (int j = 0; j < m; ++j)
//			{
//				scanf("%d", &love[i][j]);
//				love[i][j] *= n + 1;
//			}
//		int old;
//		int sum = 0;
//		for (int i = 0;i < n;i++)
//		{
//			scanf("%d", &old);
//			sum += love[i][old - 1] / (n + 1);
//			love[i][old - 1]++;
//		}
//		int ans = km();
//		printf("%d %d\n", n-ans%(n+1),ans/(n+1)-sum);
//	}
//	return 0;
//}
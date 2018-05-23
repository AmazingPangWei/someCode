//#include <iostream>
//using namespace std;
//
//struct people
//{
//	int dj, sj, tj;
//};//分别表示租教室数量，从sj到tj天
//
//
//bool judge(int *r, int sj, int tj, int dj)//判断从第sj天到tj天是否有符合条件的教室
//{
//	for (int i = sj;i <= tj;i++)
//		if (r[i] < dj)
//			return false;
//	return true;
//}
//
//int main()
//{
//	int n, m;//n为天数，m为订单数量
//	int *r;
//	cin >> n >> m;
//	r = new int[n + 1];//r[i]表示每天的教室数量
//	for (int i = 1;i <= n;i++)
//		cin >> r[i];
//	people *p;
//	p = new people[m];
//	for (int i = 0;i<m;i++)
//		cin >> p[i].dj >> p[i].sj >> p[i].tj;
//	for (int i = 1;i <= m;i++)
//	{
//		if (judge(r, p[i - 1].sj, p[i - 1].tj, p[i - 1].dj))
//			for (int j = p[i - 1].sj;j <= p[i - 1].tj;j++)
//				r[j] = r[j] - p[i - 1].dj;
//		else
//		{
//			cout << i;
//			break;
//		}
//		if (i == m)
//			cout << 0;
//	}
//	delete[]p, r;
//	system("pause");
//	return 0;
//}
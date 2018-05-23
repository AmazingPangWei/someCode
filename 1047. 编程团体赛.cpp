//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct Team
//{
//	int Num;//队伍编号
//	int Member;//队员
//	int Score;//成绩
//	int G = 0;
//};
//
//struct win
//{
//	int Num = 0;
//	int Sum = 0;
//};
//
//bool fun(win a, win b)
//{
//	return a.Sum > b.Sum;
//}
//
//bool fun1(Team a, Team b)
//{
//	if (a.Num == b.Num)
//		return a.Member < b.Member;
//	return a.Num < b.Num;
//}
//int main()
//{
//	int n ,i ,j,t = 0;
//	char c;
//	Team *p;
//	win *q;
//	cin >> n;
//	p = new Team[n];
//	q = new win[n];
//	for (i = 0;i < n;i++)
//		cin >> p[i].Num >> c >> p[i].Member>> p[i].Score;
//	sort(p, p + n, fun1);
//	int next = p[0].Num;
//	for (i = 0;i < n;i++)
//	{
//		if (next == p[i].Num)
//		{
//			q[t].Sum = q[t].Sum + p[i].Score;
//			q[t].Num = p[i].Num;
//		}
//		else
//		{
//			next = p[i].Num;
//			t++;
//			i--;
//		}
//	}
//	sort(q, q + t, fun);
//	cout << q[0].Num << ' ' << q[0].Sum << endl;
//	delete[]p, q;
//	system("pause");
//	return 0;
//}
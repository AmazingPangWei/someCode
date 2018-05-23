//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//struct P
//{
//	int x, y;
//};
//
//struct L//表示线段
//{
//	int x1, y1, x2, y2;//线段的两个端点
//	int n;//表示线段下面的金矿数
//};
//
//bool comp(P a, P b)
//{
//	if (a.x == b.x)
//		return a.y < b.y;
//	return a.x < b.x;
//
//}
//
//bool judge(L a,P c)//判断点是否在线段下面
//{
//	if (c.x >= a.x1&&c.x <= a.x2)
//	{
//		P x,y;//表示向量
//		x.x = a.x1 - c.x;
//		x.y = a.y1 - c.y;
//		y.x = a.x2 - c.x;
//		y.y = a.y2 - c.y;
//		if ((x.x*y.y - x.y*y.x) < 0)
//			return true;
//	}
//	return false;
//}
//
//bool san(L a, L b, L c)//判断a,b,c能组成一个三角形
//{
//	if (a.x1 == b.x1&&b.x2 == c.x2&&a.x2 == c.x1&&a.y2==c.y1)
//		return true;
//	return false;
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	P *house;
//	P *gold;
//	house = new P[n];
//	gold = new P[m];
//	for (int i = 0;i < n;i++)
//		cin >> house[i].x >> house[i].y;
//	for (int i = 0;i < m;i++)
//		cin >> gold[i].x >> gold[i].y;
//
//	sort(house, house + n, comp);
//
//	for (int i = 0;i < n;i++)
//	{
//		house[i].x ,house[i].y;
//	}
//	L *line;
//	line = new L[n*(n - 1) / 2];//储存线段
//	int num = 0;
//
//	for(int i=0;i<n;i++)
//		for (int j = i + 1;j < n;j++)
//		{
//			line[num].x1 = house[i].x;
//			line[num].y1 = house[i].y;
//			line[num].x2 = house[j].x;
//			line[num].y2 = house[j].y;
//			line[num].n = 0;//金矿数置0；
//			num++;
//		}
//	for(int i=0;i<num;i++)//枚举在线段下面的金矿数
//		for (int j = 0;j < m;j++)
//		{
//			if (judge(line[i], gold[j]))
//				line[i].n++;
//		}
//
//	int ans = 0;
//	for(int i=0;i<num;i++)
//		for(int j=i+1;j<num;j++)
//			for (int k = j + 1;k < num;k++)
//			{
//				if(san(line[i],line[j],line[k]))
//					if (abs(line[k].n - line[j].n - line[i].n) % 2 == 1)
//						ans++;
//			}
//
//	cout << ans << endl;
//
//	delete[]house, gold, line;
////	system("pause");
//	return 0;
//}
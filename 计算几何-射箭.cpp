//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define MIX -1000000
//struct point
//{
//	int x, y;
//};//点的x，y坐标
//
//struct line
//{
//	point a, b;
//};//线段的a,b两点  a为左边的点，b为右边的点
//
//int Multiply(point p1, point p2, point p0)//叉乘
//{
//	return ((p1.x - p0.x) * (p2.y - p0.y) - (p2.x - p0.x) * (p1.y - p0.y));
//}
//
//bool LineOnLine(line a, line b)//伸长的线在线上，a为点伸长的线,b为线段
//{
//	if (b.a.y == b.b.y&&b.b.y == a.b.y&&a.b.x >= b.b.x)
//		return true;
//	return false;
//}
//
//bool PointOnLine(line a, point p)//判断点是否在线上
//{
//	if (p.y<a.a.y || p.y>a.b.y || p.x<a.a.x||p.x>a.b.x)//当不在a,b范围时返回false
//		return false;
//	if ((a.b.y - p.y)*(p.x - a.a.x) == (p.y - a.a.y)*(a.b.x - p.x))//通过斜率判断
//		return true;
//	return false;
//}
//
//bool Num(line a,line b)//判断a，b是否相交，b为需判断的边
//{
//	int X_1 = Multiply(a.a, b.a, b.b);
//	int X_2 = Multiply(a.b, b.a, b.b);
//	int X_3 = Multiply(b.a, a.a, a.b);
//	int X_4 = Multiply(b.b, a.a, a.b);
//	if (X_1 == 0 || X_2 == 0)//当过两个线段的交点时
//	{
//		if (a.a.y < b.b.y || a.b.y<b.b.y)
//			return true;
//		else
//			return false;
//	}
//	if (X_1*X_2 < 0&& X_3*X_4<0)
//		return true;;//过一个线段时
//	return false;
//}
//
//
//bool PointInArea(point *p, point X,int n)//判断x在p组成的区域内,n为p的点数
//{
//	line x;
//	x.a.x = MIX;
//	x.a.y = X.y;
//	x.b.x = X.x;
//	x.b.y = X.y;
//	line *L;
//	L = new line[n];
//	for (int i = 0;i < n - 1;i++)
//	{
//		L[i].a.x = p[i].x;
//		L[i].a.y = p[i].y;
//		L[i].b.x = p[i + 1].x;
//		L[i].b.y = p[i + 1].y;
//	}
//	L[n - 1].a.x = p[n - 1].x;
//	L[n - 1].a.y = p[n - 1].y;
//	L[n - 1].b.x = p[0].x;
//	L[n - 1].b.y = p[0].y;
//	for (int i = 0;i < n ;i++)
//		if (LineOnLine(L[i], x))//判断是否伸长的线在线上
//		{
//			delete[]L;
//			return true;
//		}
//	for (int i = 0;i < n ;i++)
//		if (PointOnLine(L[i], X))
//		{
//			delete[]L;
//			return true;
//		}
//	int count = 0;//线与线的交点
//	for (int i = 0;i < n ;i++)
//		if (Num(L[i], x))
//			count++;
//	if (count % 2 == 0)//偶数时不在多边形内
//	{
//		delete[]L;
//		return false;
//	}
//	else//奇数时在多边形内
//	{
//		delete[]L;
//		return true;
//	}
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	point p[100];//区域
//	for (int i = 0;i < n;i++)
//		cin >> p[i].x >> p[i].y;
//	int m;
//	cin >> m;
//	point g[1000];//区域里的点
//	for (int i = 0;i < m;i++)
//		cin >> g[i].x >> g[i].y;
//	for (int i = 0;i < m;i++)
//		if (PointInArea(p, g[i], n))
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
////	system("pause");
//	return 0;
//}
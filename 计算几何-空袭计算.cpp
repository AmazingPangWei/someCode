//#include <iostream>
//#include <cmath>
//#define π 3.1415926
//using namespace std;
//
//double r;//圆的半径
//
//typedef struct point
//{
//	double x, y;
//}vector;//表示点和向量
//
//double distance(point p, point o)//o与p的距离
//{
//	return sqrt((p.x - o.x)*(p.x - o.x) + (p.y - o.y)*(p.y - o.y));
//}
//
//int InCircle(point p, point o)//判断p是否在o内(包括在圆上) 返回点数
//{
//	if (distance(p, o) <= r)
//		return true;
//	return false;
//}
//
//double multiplication(vector a, vector b)//ab叉乘
//{
//	return a.x*b.y - a.y*b.x;
//}
//
//double solve(point p, point p1, point o)//分别为多边形的两点和圆的原点
//{
//	double ans = 0;
//	vector a, b;//向量a,b
//	a.x = p.x - o.x;
//	a.y = p.y - o.y;
//	b.x = p1.x - o.x;
//	b.y = p1.y - o.y;
//	if (InCircle(p, o) && InCircle(p1, o))//p和p1都在圆内，直接计算其三角形面积
//	{
//		ans += multiplication(a, b);
//	}
//	else if (!InCircle(p, o) && InCircle(p1, o))//p不在圆内
//	{
//
//	}
//}
//
//
//int main()
//{
//	double x, y, h;
//	cin >> x >> y >> h;
//	double vx, vy;
//	cin >> vx >> vy;
//	cin >> r;
//	int n;
//	cin >> n;
//	point *p;
//	p = new point[n];
//	for (int i = 0;i < n;i++)
//		cin >> p[i].x >> p[i].y;
//	double t = sqrt(2 * h / 10);
//	x = vx*t + x;
//	y = vy*t + x;
//	point O = { x,y };//o为圆的原点
//
//
//	system("pause");
//	return 0;
//}
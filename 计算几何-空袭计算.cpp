//#include <iostream>
//#include <cmath>
//#define �� 3.1415926
//using namespace std;
//
//double r;//Բ�İ뾶
//
//typedef struct point
//{
//	double x, y;
//}vector;//��ʾ�������
//
//double distance(point p, point o)//o��p�ľ���
//{
//	return sqrt((p.x - o.x)*(p.x - o.x) + (p.y - o.y)*(p.y - o.y));
//}
//
//int InCircle(point p, point o)//�ж�p�Ƿ���o��(������Բ��) ���ص���
//{
//	if (distance(p, o) <= r)
//		return true;
//	return false;
//}
//
//double multiplication(vector a, vector b)//ab���
//{
//	return a.x*b.y - a.y*b.x;
//}
//
//double solve(point p, point p1, point o)//�ֱ�Ϊ����ε������Բ��ԭ��
//{
//	double ans = 0;
//	vector a, b;//����a,b
//	a.x = p.x - o.x;
//	a.y = p.y - o.y;
//	b.x = p1.x - o.x;
//	b.y = p1.y - o.y;
//	if (InCircle(p, o) && InCircle(p1, o))//p��p1����Բ�ڣ�ֱ�Ӽ��������������
//	{
//		ans += multiplication(a, b);
//	}
//	else if (!InCircle(p, o) && InCircle(p1, o))//p����Բ��
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
//	point O = { x,y };//oΪԲ��ԭ��
//
//
//	system("pause");
//	return 0;
//}
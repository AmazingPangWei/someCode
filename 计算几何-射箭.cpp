//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define MIX -1000000
//struct point
//{
//	int x, y;
//};//���x��y����
//
//struct line
//{
//	point a, b;
//};//�߶ε�a,b����  aΪ��ߵĵ㣬bΪ�ұߵĵ�
//
//int Multiply(point p1, point p2, point p0)//���
//{
//	return ((p1.x - p0.x) * (p2.y - p0.y) - (p2.x - p0.x) * (p1.y - p0.y));
//}
//
//bool LineOnLine(line a, line b)//�쳤���������ϣ�aΪ���쳤����,bΪ�߶�
//{
//	if (b.a.y == b.b.y&&b.b.y == a.b.y&&a.b.x >= b.b.x)
//		return true;
//	return false;
//}
//
//bool PointOnLine(line a, point p)//�жϵ��Ƿ�������
//{
//	if (p.y<a.a.y || p.y>a.b.y || p.x<a.a.x||p.x>a.b.x)//������a,b��Χʱ����false
//		return false;
//	if ((a.b.y - p.y)*(p.x - a.a.x) == (p.y - a.a.y)*(a.b.x - p.x))//ͨ��б���ж�
//		return true;
//	return false;
//}
//
//bool Num(line a,line b)//�ж�a��b�Ƿ��ཻ��bΪ���жϵı�
//{
//	int X_1 = Multiply(a.a, b.a, b.b);
//	int X_2 = Multiply(a.b, b.a, b.b);
//	int X_3 = Multiply(b.a, a.a, a.b);
//	int X_4 = Multiply(b.b, a.a, a.b);
//	if (X_1 == 0 || X_2 == 0)//���������߶εĽ���ʱ
//	{
//		if (a.a.y < b.b.y || a.b.y<b.b.y)
//			return true;
//		else
//			return false;
//	}
//	if (X_1*X_2 < 0&& X_3*X_4<0)
//		return true;;//��һ���߶�ʱ
//	return false;
//}
//
//
//bool PointInArea(point *p, point X,int n)//�ж�x��p��ɵ�������,nΪp�ĵ���
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
//		if (LineOnLine(L[i], x))//�ж��Ƿ��쳤����������
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
//	int count = 0;//�����ߵĽ���
//	for (int i = 0;i < n ;i++)
//		if (Num(L[i], x))
//			count++;
//	if (count % 2 == 0)//ż��ʱ���ڶ������
//	{
//		delete[]L;
//		return false;
//	}
//	else//����ʱ�ڶ������
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
//	point p[100];//����
//	for (int i = 0;i < n;i++)
//		cin >> p[i].x >> p[i].y;
//	int m;
//	cin >> m;
//	point g[1000];//������ĵ�
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
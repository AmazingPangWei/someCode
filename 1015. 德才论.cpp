//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct score
//{
//	int no;
//	int d;
//	int c;
//};
//
//score s[100000];
//int n, low, high;
//int t = 0;
//
//bool comp(score a, score b) //�ж�a,b�Ĵ�С ����1   С��0
//{
//	if (a.d >= high && a.c >= high)
//	{
//		if (b.d >= high && b.c >= high)
//		{
//			if (b.c + b.d > a.c + a.d)
//				return false;
//			if (b.c + b.d == a.c + a.d)
//			{
//				if (b.d > a.d)
//					return false;
//				if (b.d == a.d && b.no < a.no)
//					return false;	
//			}
//		}
//		return true;
//	}
//	//�ŷֲ������·ֵ��ߵ�һ�࿼�����ڡ���ʤ�š���Ҳ���ܷ����򣬵����ڵ�һ�࿼��֮��
//	else if (a.d >= high && a.c < high)
//	{
//		if (b.d >= high && b.c >= high)
//			return false;
//		if (b.d >= high && b.c < high)
//		{
//			if (b.c + b.d > a.c + a.d)
//				return false;
//			if (b.c + b.d == a.c + a.d)
//			{
//				if (b.d > a.d)
//					return false;
//				if (b.d == a.d && b.no < a.no)
//					return false;
//			}
//		}
//		return true;
//	}
//	//�²ŷ־�����H��
//	//���ǵ·ֲ����ڲŷֵĿ������ڡ��ŵ¼����������С���ʤ�š��ߣ�
//	//���ܷ����򣬵����ڵڶ��࿼��֮��
//	else if (a.d < high && a.c < high && a.d >= a.c) 
//	{
//		if (b.d >= high && b.c >= high)
//			return false;
//		if (b.d >= high && b.c < high)
//			return false;
//		if (b.d < high && b.c < high && b.d >= b.c)
//		{
//			if (b.c + b.d > a.c + a.d)
//				return false;
//			if (b.c + b.d == a.c + a.d)
//			{
//				if (b.d > a.d)
//					return false;
//				if (b.d == a.d && b.no < a.no)
//					return false;
//			}
//		}
//		return true;
//	}
//	else
//	{
//		if (b.d >= high && b.c >= high)
//			return false;
//		if (b.d >= high && b.c < high)
//			return false;
//		if (b.d < high && b.c < high && b.d >= b.c)
//			return false;
//
//		if (b.c + b.d > a.c + a.d)
//			return false;
//		if (b.c + b.d == a.c + a.d)
//		{
//			if (b.d > a.d)
//				return false;
//			if (b.d == a.d && b.no < a.no)
//				return false;
//		}
//		return true;
//	}
//}
//
//
//
//int main()
//{
//	scanf("%d%d%d", &n, &low, &high);
//	for (int i = 0; i < n; i++)
//	{
//		int no;
//		int d;
//		int c;
//		scanf("%d%d%d", &no, &d, &c);
//		if (d >= low && c >= low)
//		{
//			s[t].no = no;
//			s[t].d = d;
//			s[t].c = c;
//			t++;
//		}
//	}
//	sort(s, s + t, comp);
//	printf("%d\n", t);
//	for (int i = 0; i < t; i++)
//		printf("%d %d %d\n", s[i].no, s[i].d, s[i].c);
////	system("pause");
//	return 0;
//}
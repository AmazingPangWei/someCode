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
//bool comp(score a, score b) //判断a,b的大小 大于1   小于0
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
//	//才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后
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
//	//德才分均低于H，
//	//但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，
//	//按总分排序，但排在第二类考生之后
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
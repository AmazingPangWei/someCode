////http://blog.csdn.net/dellaserss/article/details/7724401/
//#include<iostream>  
//using namespace std;
//
//int  pre[1050];
//bool t[1050];               //t 用于标记独立块的根结点  
//
//int Find(int x)
//{
//	int r = x;
//	while (r != pre[r])
//		r = pre[r];
//
//	int i = x, j;
//	while (pre[i] != r)
//	{
//		j = pre[i];
//		pre[i] = r;
//		i = j;
//	}
//	return r;
//}
//
//void mix(int x, int y)
//{
//	int fx = Find(x), fy = Find(y);
//	if (fx != fy)
//	{
//		pre[fy] = fx;
//	}
//}

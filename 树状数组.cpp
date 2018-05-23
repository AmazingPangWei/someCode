//#include <iostream>
//using namespace std;
//long long n, c[500001];
//
//long long lowbit(long long x) {
//	return x&(-x);
//}
//
//void update(long long x, long long num) {//更新结点
//	while (x <= n) {
//		c[x] += num;
//		x += lowbit(x);
//	}
//}
//
//long long getsum(long long x) {//取得前n项和
//	long long s = 0;
//	while (x>0) {
//		s += c[x];
//		x -= lowbit(x);
//	}
//	return s;
//}
//
//int main()
//{
//	long long m;
////	memset(c, 0, sizeof(c));
//	cin >> n >> m;
//	for (long long i = 1; i <= n; i++)
//	{
//		long long t;
//		cin >> t;
//		update(i, t);
//	}
//	for (long long i = 1; i <= m; i++)
//	{
//		int t;
//		cin >> t;
//		long long  l, r;
//		cin >> l >> r;
//		if (t == 1)
//		{
//			update(l, r);
//		}
//		else if (t == 2)
//		{
//			long long l_sum =0, r_sum;
//			if (l != 1)
//				l_sum = getsum(l-1);
//			r_sum = getsum(r);
//			cout << r_sum - l_sum << endl;
//		}
//	}
////	system("pause");
//	return 0;
//}
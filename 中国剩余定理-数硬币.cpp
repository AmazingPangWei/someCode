//#include <iostream>
//using namespace std;
//
//long long gcd(long long a, long long b)
//{
//	return b == 0 ? a : gcd(b, a%b);
//}
//
//long long ex_gcd(long long a, long long b, long long &x, long long &y)
//{
//	if (b == 0)
//	{
//		x = 1;
//		y = 0;
//		return a;
//	}
//	long long ans = ex_gcd(b, a%b, x, y);
//	long long temp = x;
//	x = y;
//	y = temp - a / b*y;
//	return ans;
//}
//
//int main()
//{
//	long long m;
//	cin >> m;
//	long long *x, *y;//x一波，剩y
//	x = new long long[m + 1];
//	y = new long long[m + 1];
//	for (long long i = 1; i <= m; i++)
//		cin >> x[i] >> y[i];
//	long long temp = 1;//记录次数
//	while (temp != m)//全部合并到x[1]与y[1]
//	{
//		long long a, b, x0, y0, n, d, X;
//		a = x[1];
//		b = x[temp+1];
//		n = y[temp + 1] - y[1];//xa+yb=n;
//		ex_gcd(a, b, x0, y0);//求得x0
//		d = gcd(a, b);//d为a,b最大公倍数
//		X = n*x0 / d;
//		long long t = b / d;
//		X = (X%t + t) % t;//求得最小的X
//		if (n%d != 0)
//		{
//			cout << "无解" << endl;
//			return 0;
//		}
//		y[1] = a*X + y[1];
//		x[1] = a*b / d;
//		temp++;
//	}
//	//合并完成,仅需求根据N=y1 (mod x1)求解N
//	cout << y[1]%x[1] << endl;
//
//	delete[]x, y;
////	system("pause");
//	return 0;
//}
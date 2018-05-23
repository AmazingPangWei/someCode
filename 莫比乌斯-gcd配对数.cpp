////http://blog.csdn.net/lixuepeng_001/article/details/50577932
////ÓÐÏê½â
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a%b);
//}
//
//int maxn;
//int *mu;
//void getMu() {
//	int N = maxn;
//	for (int i = 1;i<N;++i) {
//		int target = i == 1 ? 1 : 0;
//		int delta = target - mu[i];
//		mu[i] = delta;
//		for (int j = 2 * i;j<N;j += i)
//			mu[j] += delta;
//	}
//}
//
//long long f(int n, int m)
//{
//	long long  ans = 0;
//	for (int i = 1;i <= maxn;i++)
//		ans += mu[i] * (n / i)*( m/ i);
//	return ans;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int a, b, c, d, k;
//		cin >> a >> b >> c >> d >> k;
//		int sum = 0;
//		int n, m;
//		n = b / k;
//		m = d / k;
//		maxn = min(n, m);
//		mu = new int[maxn + 1];
//		for (int i = 0;i <= maxn;i++)
//			mu[i] = 0;
//		getMu();
//		long long  ans1 = f(n, m);
//		long long  ans2 = f(maxn, maxn);
//		cout << ans1 - ans2 / 2 << endl;
//		delete[]mu;
//	}
//	system("pause");
//	return 0;
//}
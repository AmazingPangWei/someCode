//#include <iostream>
//using namespace std;
//
//int solve(int n, int m)////n个苹果,m个盘子
//{
//	if (n == 0 || n == 1 || m == 1)
//		return 1;
//	if (m > n)
//		return solve(n, n);
//	if (n >= m)
//		return solve(n - m, m) + solve(n, m - 1); //放与不放
//}
//
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, m;//n个苹果,m个盘子
//		cin >> n >> m;
//		cout << solve(n, m) << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int solve(int n, int m)//表示划分n时最大值是m
//{
//	if (m == 1 || n == 1)
//		return 1;
//	if (m > n)
//		return solve(n, n);
//	if (m == n)
//		return solve(n, n - 1) + 1;
//	if (n > m)
//		return solve(n - m, m) + solve(n, m - 1);
//}
//
//int main()
//{
//	cout << solve(5,5) << endl;
//
//	system("pause");
//	return 0;
//}
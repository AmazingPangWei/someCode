//#include <iostream>
//using namespace std;
//
//int solve(int n, int m)////n��ƻ��,m������
//{
//	if (n == 0 || n == 1 || m == 1)
//		return 1;
//	if (m > n)
//		return solve(n, n);
//	if (n >= m)
//		return solve(n - m, m) + solve(n, m - 1); //���벻��
//}
//
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, m;//n��ƻ��,m������
//		cin >> n >> m;
//		cout << solve(n, m) << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int num(int n, int m)
//{
//	if (n <= 0)
//		return 0;
//	if (n == 1 || m == 1)
//		return 1;
//	if (m > n)
//		return num(n, n);
//	if (m == n)
//		return num(n, n - 1) + 1;
//	if (m < n)
//		return num(n - m, m) + num(n, m - 1);   //划分中有m与没有m的情况
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << num(n, n) << endl;
//
//	//	system("pause");
//	return 0;
//}
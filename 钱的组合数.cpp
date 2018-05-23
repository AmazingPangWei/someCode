////可以对比整数划分问题，两题同属于数的划分
//#include <iostream>
//using namespace std;
//
//int a[3] = { 1,2,5 };
//
//int solve(int n, int m)//目前的钱是n，划分的钱不能超过a[m]
//{
//	if (n == 0)
//		return 1;
//	if (n == 1)
//		return 1;
//	if (m == 0)
//		return 1;
//	if (m < 0)
//		return 0;
//	if (n < 0)       //钱是负数时，说明之前的钱可以全部用1代替
//		return 0;
//	return solve(n - a[m] , m) + solve(n, m - 1);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << solve(n,2) << endl;
////	system("pause");
//	return 0;
//}
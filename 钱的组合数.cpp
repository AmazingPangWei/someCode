////���ԶԱ������������⣬����ͬ�������Ļ���
//#include <iostream>
//using namespace std;
//
//int a[3] = { 1,2,5 };
//
//int solve(int n, int m)//Ŀǰ��Ǯ��n�����ֵ�Ǯ���ܳ���a[m]
//{
//	if (n == 0)
//		return 1;
//	if (n == 1)
//		return 1;
//	if (m == 0)
//		return 1;
//	if (m < 0)
//		return 0;
//	if (n < 0)       //Ǯ�Ǹ���ʱ��˵��֮ǰ��Ǯ����ȫ����1����
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
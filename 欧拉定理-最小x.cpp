//#include <iostream>
//#include <cmath>
//using namespace std;
//
//typedef long long LL;
//
//int euler(int n) { //欧拉函数的实现  
//	int res = n, a = n;
//	for (int i = 2;i*i <= a;i++) {
//		if (a%i == 0) {
//			res = res / i*(i - 1);//先进行除法是为了防止中间数据的溢出   
//			while (a%i == 0) a /= i;
//		}
//	}
//	if (a>1) res = res / a*(a - 1);
//	return res;
//}
//
//bool check(int n, int i)
//{
//	int temp = 2;
//	for (int j = 1;j <= i - 1;j++)
//	{
//		temp = temp * 2;
//		if (temp >= n)
//			temp = temp - n;
//	}
//	if (temp == 1)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	if (n % 2 == 0)
//	{
//		cout << "不存在" << endl;
//		return 0;
//	}
//	int temp = euler(n);//最小x在temp的约数中
//	int ans = 0;
//	for (int i = 1;i <= temp;i++)
//	{
//		if (temp%i == 0 && check(n, i))
//		{
//			ans = i;
//			break;
//		}
//	}
//	if (ans)
//		cout << ans << endl;
//	else
//		cout << "不存在" << endl;
////	system("pause");
//	return 0;
//}
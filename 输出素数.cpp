//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//bool isPrime(int n)//判断N是否为素数
//{
//	if (n < 2) return false;
//	if (n == 2) return true;
//	if (n % 2 == 0) return false;
//	for (int i = 3; i*i <= n; i += 2)
//		if (n%i == 0) return false;
//	return true;
//}
//int fun()//输出2000的质数数量
//{
//	int i;
//	int sum = 0;
//	for (i = 2; i <= 2000; i++)
//		if (isPrime(i))
//			sum++;
//	return sum;
//}
//int main()
//{
//	cout << fun() << endl;
//	system("pause");
//	return 0;
//}
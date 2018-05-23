//#include <iostream>
//#include <cmath>
//using namespace std;
//
//long long gcd(long long a, long long b)//返回最大公约数
//{
//	return a%b == 0 ? b : gcd(b, a%b);
//}
//
//void fun(long long z, long long m)
//{
//	if (m == 0)
//		cout << "Inf";
//	else if (z == 0)
//		cout << 0;
//	else
//	{
//		long long t = 0;
//		if (m < 0)
//		{
//			m = -m;
//			z = -z;
//		}
//		
//		if (abs(z) >= m) //分母比分子大的情况
//		{
//			if (z%m== 0)
//			{
//				if (z < 0)
//					cout << '(' << z/m << ')';
//				else
//					cout << z/m;
//				return;
//			}
//			t = z / m;//整数部分
//			z = abs(z) % m;//分子部分
//		}
//		long long x;
//		x = gcd(abs(z), m);
//		z = z / x;
//		m = m / x;
//		if (t < 0)
//			cout << '(' << t << ' ' << z << '/' << m << ')';
//		else if (t > 0)
//			cout << t << ' ' << z << '/' << m;
//		else if (t == 0)
//		{
//			if (z < 0)
//				cout << '(' << z << '/' << m << ')';
//			else
//				cout << z << '/' << m;
//		}
//	}
//}
//
//void juage(long long z, long long m)
//{
//	/*long long t1 = z / m;
//	float t2 = z / (m*1.0);
//	if (t2 - t1 == 0)
//	{
//		if (z < 0)
//			cout << '(' << t1 << ')';
//		else
//			cout << t1;
//	}
//	else*/
//		fun(z, m);
//}
//
//void pulse(long long a,long long b,long long d,long long f)
//{
//	long long Z, M;
//	Z = a*f + d*b;
//	M = b*f;
//	juage(a, b);
//	cout << " + ";
//	juage(d, f);
//	cout << " = ";
//	fun(Z, M);
//}
//void multiplication(long long a, long long b, long long d, long long f)
//{
//	long long Z, M;
//	Z = a*d;
//	M = b*f;
//	juage(a, b);
//	cout << " * ";
//	juage(d, f);
//	cout << " = ";
//	fun(Z, M);
//}
//void division(long long a, long long b, long long d, long long f)
//{
//	long long Z, M;
//	Z = a*f;
//	M = b*d;
//	juage(a, b);
//	cout << " / ";
//	juage(d, f);
//	cout << " = ";
//	fun(Z, M);
//}
//void subtraction(long long a, long long b, long long d, long long f)
//{
//	long long Z, M;
//	Z = a*f - d*b;
//	M = b*f;
//	juage(a, b);
//	cout << " - ";
//	juage(d, f);
//	cout << " = ";
//	fun(Z, M);
//}
//int main()
//{
//	long long a, b, d, f;
//	char c;
//	cin >> a >> c >> b >> d >> c >> f;
//	pulse(a,b,d,f);
//	cout << endl;
//	subtraction(a, b, d, f);
//	cout << endl;
//	multiplication(a, b, d, f);
//	cout << endl;
//	division(a, b, d, f);
//	cout << endl;
//	system("pause");
//	return 0;
//}
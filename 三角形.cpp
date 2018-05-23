//#include <iostream>
//#include <cmath>
//using namespace std;
//typedef long long LL;
//
//LL gcd(LL a, LL b)
//{
//	if (b == 0)
//		return a;
//	return a%b == 0 ? b : gcd(b, a%b);
//}
//
//int main()
//{
//	double a, b, c, d, e, f;
//	while (1)
//	{
//		cin >> a;
//		if (a == -1)
//			return 0;
//		cin >> b >> c >> d >> e >> f;
//		double len1, len2, len3;
//		double s = abs((a*d + c*f + b*e - a*f - b*c - d*e) / 2);
//		LL ab = gcd(abs(a - c), abs(b - d))-1;
//		LL ac = gcd(abs(a - e), abs(b - f))-1;
//		LL bc = gcd(abs(c - e), abs(d - f))-1;
//		LL sum = ab + ac + bc + 3; //线段上的整点
//		LL in = s + 1 - sum / 2; //皮克定理求内部整点
//		printf("%.1lf %lld %lld %lld %lld\n", s,in,ab,bc,ac);
//	}
////	system("pause");
//	return 0;
//}
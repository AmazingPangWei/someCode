////题目内容：
////计算循环语句的执行频次 for (i = A; i != B; i += C) x += 1;
////其中A, B, C, i都是k位无符号整数。
////输入描述
////A B C k, 其中0<k<32
////
////	输出描述
////	输出执行频次数，如果是无穷，则输出“forever”
////
////	输入样例
////	3 7 2 16
////
////	输出样例
////	2
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//typedef long long LL;
//
//LL gcd(LL a, LL b)
//{
//	return b == 0 ? a : gcd(b, a%b);
//}
//
//LL ex_gcd(LL a, LL b, LL &x, LL &y)
//{
//	if (b == 0)
//	{
//		x = 1;
//		y = 0;
//		return a;
//	}
//	LL ans = ex_gcd(b, a%b, x, y);
//	LL temp = x;
//	x = y;
//	y = temp - a / b*y;
//	return ans;
//}
//
//int main()
//{
//	LL A, B, C, k;
//	cin >> A >> B >> C >> k;
//
//	LL a, x, b, y, n;
//	a = C;b = pow(2, k);n = B - A;
//	//原式转化为A+t*C=B (mod 2^k)  t为整数，为要求的数
//	//t*c+y*2^k=B-A     x即t
//	//继续转化  a=c,x=t,b=2^k,y=y,n=B-A
//	//即ax+by=n；需求x
//	LL temp = gcd(a, b);
//	if (!A&& !B && !C)
//	{
//		cout << "forever" << endl;
//		return 0;
//	}
//	if (n%temp != 0 || temp==0)
//	{
//		cout << "forever" << endl;
//		return 0;
//	}
//	ex_gcd(a, b, x, y);//求得x0,y0
//	x = (n / temp)*x;//x为所得，但不一定为最小所得值
//	LL T = b / temp;//T为区间
//	x = ( x % T + T ) % T;//取得最小所得值
//	cout << x << endl;
////	system("pause");
//	return 0;
//}
//

////给出一个数n，求1到n中，有多少个数不是2 5 11 13的倍数。 
//#include <iostream>
//using namespace std;
//typedef long long LL;
//int main()
//{
//	LL n;
//	while (cin >> n)
//	{
//		LL a, b, c, d;
//		a = n / 2;
//		b = n / 5;
//		c = n / 11;
//		d = n / 13;
//
//		LL ab = n / 10;
//		LL ac = n / 22;
//		LL ad = n / 26;
//		LL bc = n / 55;
//		LL bd = n / 65;
//		LL cd = n / 143;
//
//		LL abc = n / 110;
//		LL abd = n / (2 * 5 * 13);
//		LL acd = n / (2 * 11 * 13);
//		LL bcd = n / (5 * 11 * 13);
//
//		LL abcd = n / (2 * 5 * 11 * 13);
//
//		cout <<  n - (a + b + c + d - ab - ac - ad - bc - bd - cd + abc + abd + acd + bcd - abcd) << endl;
//	}
////	system("pause");
//	return 0;
//}
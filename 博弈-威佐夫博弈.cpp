////两堆石子分别n，m（n >= m）个，A和B轮流取，有两种取法，
////一是在任意的一堆中取走任意多的石子，最少为一；
////二是在两堆中同时取走相同数量的石子。A先取，先取完者胜，问A是否胜？（胜输出1，负为0）
////
////著名的威佐夫博奕，题解链接：威佐夫博弈，
////结论：若floor(（n - m） * (sqrt(5.0) + 1.0) / 2.0)  != m, 则A胜，否则负。
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		if (n < m)
//			swap(n, m);
//		if (floor((n - m)*((sqrt(5) + 1.0) / 2.0)) != m)
//			cout << 1 << endl;
//		else
//			cout << 0 << endl;
//	}
////	system("pause");
//	return 0;
//}

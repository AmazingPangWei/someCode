////http://blog.csdn.net/qinmusiyan/article/details/7949557
////Nim博弈
////题意：有m堆牌，两个人先后取某堆中的任意（不少于一）张牌，最后取完者胜；
////问:先手取胜第一次取牌有多少种取法。
////思路：1）如若给出 的是必败状态：a1^a2^......^an = 0, 则先手不会有任何可能获得胜利；
////2）若给出的是必胜状态：a1^a2^.......^an = k, (其中k不为零)，那么我们的目的是要把必胜状态
////转化为必败状态从 而使得先手胜利。若a1^a2^...^an != 0，一定存在某个合法的移动，将ai
////改变成ai'后满足a1^a2^...^ai'^...^an = 0。若a1^a2^...^an = k，则一定存在某个ai，
////它的二进制 表示在k的最高位上是1（否则k的最高位那个1是怎么得到的）。这时ai^k<ai一定
////成立。则我们可以将ai改变成ai'=ai^k，此时a1^a2^...^ai'^...^an = a1^a2^...^an^k = 0.
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n && n!=0)
//	{
//		int *p;
//		p = new int[n];
//		for (int i = 0;i < n;i++)
//			cin >> p[i];
//		int sum = 0;
//		for (int i = 0;i < n;i++)
//			sum = sum^p[i];
//		if (sum == 0)
//			cout << "Lose" << endl;
//		else
//		{
//			cout << "Win" << endl;
//		}
//		delete[]p;
//	}
//
////	system("pause");
//	return 0;
//}
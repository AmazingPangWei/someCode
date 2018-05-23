//#include <iostream>
//using namespace std;
//
//int tot = 0;
//int w[10000]; //判断i层放置的位置
//void solve(int n,int now) //总共n层，目前是now层
//{
//	if (n + 1 == now)
//		tot++;
//	for (int i = 1; i <= n; i++)
//	{
//		int k = 1;
//		w[now] = i;
//		int j;
//		for (j = 1; j < now; j++)//
//		{
//			if (now + w[now] == j + w[j] || w[now] == w[j] || now - w[now] == j - w[j])
//			{
//				k = 0;
//				break;
//			}
//		}
//		if (k)
//			solve(n, now + 1);
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	solve(n, 1);
//	cout << tot << endl;
////	system("pause");
//	return 0;
//}
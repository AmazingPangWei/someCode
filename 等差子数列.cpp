//#include <iostream>
//#include <algorithm>
//using namespace std;
//typedef long long LL;
//
//int a[100001];
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int t;
//	cin >> t;
//	for (int i = 1; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		a[i] = temp - t;
//		t = temp;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int l, r;
//		cin >> l >> r;
//		int t = a[l];
//		int MAX = 1;
//		int time = 1;
//		for (int i = l+1; i < r; i++)
//		{
//			if (t == a[i])
//			{
//				time++;
//				MAX = max(MAX, time);
//			}
//			else
//			{
//				MAX = max(MAX, time);
//				time = 1;
//				t = a[i];
//			}
//		}
//		if (l == r)
//			cout << 1 << endl;
//		else
//			cout << MAX + 1 << endl;
//	}
//	//system("pause");
//	return 0;
//}
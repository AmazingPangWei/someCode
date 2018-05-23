////我们现在要找到一个最大值的距离,
////这个距离能保证只搬走m或m以内个石头就能让任意两个相邻的石头之间的距离≥这个距离。
//#include <iostream>
//using namespace std;
//
//bool jauge(int *p,int mid,int n,int m)//mid为最大值距离
//{
//	int count = 0, last = 0;//分别记录石头的花销数量，上一个石头的距离
//	for (int i = 1;i <= n; i++)
//	{
//		if (p[i] - last < mid)
//			count++;
//		else
//			last = p[i];
//	}
//	if (count <= m)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	int l, n, m;
//	cin >> l >> n >> m;
//	int *p;
//	p = new int[n + 2];
//	p[0] = 0;
//	p[n + 1] = l;
//	for (int i = 1;i <= n;i++)
//		cin >> p[i];
//	int low = 0, mid, ans;
//	while (low <= l)
//	{
//		mid = (low + l) / 2;
//		if (jauge(p,mid,n,m))
//		{
//			ans = mid;
//			low = mid + 1;
//		}
//		else
//			l = mid - 1;
//	}
//	cout << ans << endl;
//	delete[]p;
//	system("pause");
//	return 0;
//}
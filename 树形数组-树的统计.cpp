////http://blog.csdn.net/libin56842/article/details/46634095
//#include <iostream>
//#include <vector>
//#include <cstdio>
//using namespace std;
//#define MAX 100005
//
//int tree[MAX];
//int r[MAX], l[MAX];//记录左值和右值  从自身出发到最底端
//int s[MAX];        //记录结点
//int n;//数组数
//int m;//m个操作
//int tot;//对后代编号
//
//vector<int> a[MAX];
//
//int lowbit(int t)
//{
//	return t&(-t);
//}
//
//void add(int x, int y)//更改A[x]数组，对c数组的影响
//{
//	for (int i = x;i <= n;i += lowbit(i))
//		tree[i] += y;
//}
//
//int getsum(int x)//得前x的和
//{
//	int ans = 0;
//	for (int i = x;i > 0;i -= lowbit(i))
//		ans += tree[i];
//	return ans;
//}
//
//void DFS(int x)
//{
//	l[x] = tot;
//	for (int i = 0;i < a[x].size();i++)
//	{
//		tot++;
//		DFS(a[x][i]);
//	}
//	r[x] = tot;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0;i <= n;i++)
//		a[i].clear();
//	int x, y;
//	for (int i = 1;i <= n - 1;i++)
//	{
//		cin >> x >> y;
//		a[x].push_back(y);
//	}
//	for (int i = 1;i <= n;i++)
//	{
//		s[i] = 1;//1代表白色  0代表黑色
//		add(i, 1);
//	}
//	tot = 1;
//	DFS(1);
//	cin >> m;
//	while (m--)
//	{
//		getchar();
//		char c;
//		int temp;
//		cin >> c;
//		cin >> temp;
//		if (c == 'C')
//		{
//			if (s[temp] == 1)
//				add(temp, -1);//为白色就变为黑色，即-1
//			else
//				add(temp, 1); //为黑色就变为白色，即+1
//			s[temp] = !s[temp];
//		}
//		else
//		{
//			cout << getsum(r[temp]) - getsum(l[temp - 1]) << endl;
//		}
//	}
////	system("pause");
//	return 0;
//}
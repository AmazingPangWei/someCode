//
//int tree[100];
//int n;//数组数
//int lowbit(int t)
//{
//	return t&(-t);
//}
//void add(int x, int y)//更改A[x]数组，对c数组的影响
//{
//	for (int i = x;i <= n;i += lowbit(i))
//		tree[i] += y;
//}
//int getsum(int x)//得前x的和
//{
//	int ans = 0;
//	for (int i = x;i>0;i -= lowbit(i))
//		ans += tree[i];
//	return ans;
//}
//
//int tree[100];
//int n;//������
//int lowbit(int t)
//{
//	return t&(-t);
//}
//void add(int x, int y)//����A[x]���飬��c�����Ӱ��
//{
//	for (int i = x;i <= n;i += lowbit(i))
//		tree[i] += y;
//}
//int getsum(int x)//��ǰx�ĺ�
//{
//	int ans = 0;
//	for (int i = x;i>0;i -= lowbit(i))
//		ans += tree[i];
//	return ans;
//}
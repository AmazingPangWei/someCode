////��������Ҫ�ҵ�һ�����ֵ�ľ���,
////��������ܱ�ֻ֤����m��m���ڸ�ʯͷ�����������������ڵ�ʯͷ֮��ľ����������롣
//#include <iostream>
//using namespace std;
//
//bool jauge(int *p,int mid,int n,int m)//midΪ���ֵ����
//{
//	int count = 0, last = 0;//�ֱ��¼ʯͷ�Ļ�����������һ��ʯͷ�ľ���
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
////http://blog.csdn.net/libin56842/article/details/46634095
//#include <iostream>
//#include <vector>
//#include <cstdio>
//using namespace std;
//#define MAX 100005
//
//int tree[MAX];
//int r[MAX], l[MAX];//��¼��ֵ����ֵ  �������������׶�
//int s[MAX];        //��¼���
//int n;//������
//int m;//m������
//int tot;//�Ժ�����
//
//vector<int> a[MAX];
//
//int lowbit(int t)
//{
//	return t&(-t);
//}
//
//void add(int x, int y)//����A[x]���飬��c�����Ӱ��
//{
//	for (int i = x;i <= n;i += lowbit(i))
//		tree[i] += y;
//}
//
//int getsum(int x)//��ǰx�ĺ�
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
//		s[i] = 1;//1�����ɫ  0�����ɫ
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
//				add(temp, -1);//Ϊ��ɫ�ͱ�Ϊ��ɫ����-1
//			else
//				add(temp, 1); //Ϊ��ɫ�ͱ�Ϊ��ɫ����+1
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
//#include <iostream>
//using namespace std;
//
//int pre[10000];
//void init(int n)//n֮ǰ��ʼ��
//{
//	for (int i = 0; i < n; i++)
//	{
//		pre[i] = i;
//	}
//}
//
//int find(int n)
//{
//	int r = n;
//	while (pre[r] != r)
//		r = pre[r];
//	int x = n;
//	int j;
//	while (pre[x]!=r)
//	{
//		j = pre[x];//����x����һ�������Ϣ
//		pre[x] = r;//
//		x = j;//������һ�����
//	}
//	return r;
//}
//
//void mix(int a, int b)
//{
//	int x = find(a), y = find(b);
//	pre[x] = y;
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}
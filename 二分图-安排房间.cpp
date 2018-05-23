//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int map[1000][1000];
//bool used[1000] = { false };
//int r[1000] = {0};//��ʾ�ұ�ͬѧ�Ķ�����˭
//int color[1000] = { 0 };//��ʾ�Ƿ�Ⱦɫ ȾɫΪ-1��1
//
//bool BFS(int i,int n,int c)//nΪ����
//{
//	queue<int> Q;
//	Q.push(i);
//	color[i] = c;
//	used[i] = true;
//	while (!Q.empty())
//	{
//		int q = Q.front();
//		Q.pop();
//		for (int j = 1;j <= n;j++)
//		{
//			if (color[j] == color[q] && map[q][j] == 1)
//				return false;
//			if (map[q][j] == 1 && !used[j])
//			{
//				Q.push(j);
//				used[j] = true;
//				color[j] = -color[q];
//			}
//		}
//	}
//	return true;
//}
//
//bool find(int x,int m) {
//	int j;
//	for (j = 1;j <= m;j++) {    //ɨ��ÿ������  
//		if (map[x][j] == true && used[j] == false)
//			//������������һ�û�б�ǹ�(�����ǵ���˼����β�������ͼ�ı�������ӵĹ������⣬����û�гɹ������ԾͲ���Ϲ�ѹ����ˣ�  
//		{
//			used[j] = 1;
//
//			if (r[j] == 0 || find(r[j],m)) {
//				//���������������ڳ���λ����������ʹ�õݹ�  
//				r[j] = x;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		memset(map, 0, sizeof(map));
//		memset(used, false, sizeof(used));
//		memset(color, 0, sizeof(color));
//		memset(r, 0, sizeof(r));
//		int left, right;
//		int i;
//		int c = -1;
//		for (i = 0;i < m;i++)
//		{
//			cin >> left >> right;
//			map[left][right] = 1;
//			map[right][left] = 1;
//		}
//		if (n == 1 || n == 0)
//		{
//			cout << "No" << endl;
//			return 0;
//		}
//		for (i = 1;i <= n;i++)
//			if (used[i] == false && BFS(i, n, c) == false)
//			{
//				cout << "No" << endl;
//				break;
//			}
//		if (i != n + 1)
//			continue;
//		int ans = 0;
//		//	��ʼ�������ͼ  ��lineΪ����ͼ����ʼѰ�����
//		for (i = 1;i <= n;i++)
//		{
//			memset(used, 0, sizeof(used));    //�����ÿһ�������  
//			if (find(i, n))
//				ans += 1;
//		}
//		cout << ans / 2 << endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int map[1000][1000];
//bool used[1000] = { false };
//int r[1000] = {0};//表示右边同学的对象是谁
//int color[1000] = { 0 };//表示是否被染色 染色为-1与1
//
//bool BFS(int i,int n,int c)//n为人数
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
//	for (j = 1;j <= m;j++) {    //扫描每个妹子  
//		if (map[x][j] == true && used[j] == false)
//			//如果有暧昧并且还没有标记过(这里标记的意思是这次查找曾试图改变过该妹子的归属问题，但是没有成功，所以就不用瞎费工夫了）  
//		{
//			used[j] = 1;
//
//			if (r[j] == 0 || find(r[j],m)) {
//				//名花无主或者能腾出个位置来，这里使用递归  
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
//		//	开始构造二分图  以line为二分图，开始寻找配对
//		for (i = 1;i <= n;i++)
//		{
//			memset(used, 0, sizeof(used));    //这个在每一步中清空  
//			if (find(i, n))
//				ans += 1;
//		}
//		cout << ans / 2 << endl;
//	}
//	return 0;
//}
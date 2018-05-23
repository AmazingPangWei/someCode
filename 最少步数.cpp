//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int map[9][9] =
//{ 
//1,1,1,1,1,1,1,1,1,
//1,0,0,1,0,0,1,0,1,
//1,0,0,1,1,0,0,0,1,
//1,0,1,0,1,1,0,1,1,
//1,0,0,0,0,1,0,0,1,
//1,1,0,1,0,1,0,0,1,
//1,1,0,1,0,1,0,0,1,
//1,1,0,1,0,0,0,0,1,
//1,1,1,1,1,1,1,1,1
//};
//bool used[9][9] = { 0 };
//int x, y;
//int aim_x, aim_y;
//
//bool right(int x, int y)
//{
//	if (x == aim_x && y == aim_y)
//		return true;
//	return false;
//}
//
//int px[4] = { 0,0,1,-1 };
//int py[4] = { 1,-1,0,0 };
//int ans = 1000000000;
//void DFS(int x,int y,int deep)
//{
//	if (right(x, y))
//	{
//		ans = min(deep, ans);
//	}
//	else
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			int tx = x + px[i];
//			int ty = y + py[i];
//			if (tx >= 0 && tx < 9 && ty>=0 && ty < 9)
//			{
//				if (!map[tx][ty] && !used[tx][ty])
//				{
//					used[tx][ty] = 1;
//					DFS(tx, ty, deep + 1);
//					used[tx][ty] = 0;
//				}
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		ans = 1000000000;
//		memset(used, 0, sizeof(used));
//		cin >> x >> y;
//		cin >> aim_x >> aim_y;
//		used[x][y] = 1;
//		if (right(x, y))
//		{
//			cout << 0 << endl;
//			continue;
//		}
//		DFS(x,y,0);
//		cout << ans << endl;
//	}
//
////	system("pause");
//	return 0;
//}
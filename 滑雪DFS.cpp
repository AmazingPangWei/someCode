//#include <iostream>
//#define max(a,b) a>b?a:b
//using namespace std;
//
//
//int a[100][100];
//int dfs[100][100];
//int point[4][2] = { 0,1,0,-1,1,0,-1,0 };
//int row, column; //分别表示行和列
//int DFS(int n,int m)
//{
//	if (dfs[n][m])
//		return dfs[n][m];
//	if (!dfs[n][m])
//		dfs[n][m] = 1;
//	for (int i = 0; i < 4; i++)//分别搜索该点的上下左右
//	{
//		int y = n + point[i][0], x = m + point[i][1];
//		if (y >= 0 && y < row&&x >= 0 && x < column && a[n][m]> a[y][x])
//		{
//			dfs[n][m] = max(dfs[n][m], DFS(y, x) + 1);
//		}
//	}
//	return dfs[n][m];
//}
//
//int main()
//{
//	cin >> row >> column;
//	for (int i = 0; i < row; i++)
//		for (int j = 0; j < column; j++)
//			cin >> a[i][j];
//	int MAX = 0;
//	for (int i = 0; i < row; i++) //依次检索每一个滑雪点
//		for (int j = 0; j < column; j++)
//		{
//			MAX = max(MAX, DFS(i, j));
//		}
//	cout << MAX << endl;
////	system("pause");
//	return 0;
//}
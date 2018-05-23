//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int map[10][10];
//
//bool cheack(int row, int col, int num)//判断行列
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		if (map[row][i] == num || map[i][col] == num)
//			return false;
//	}
//	return true;
//}
//
//bool cheack2(int row, int col, int num)//判断3*3小格
//{
//	int r = (row / 3) * 3;
//	int c = (col / 3) * 3;
//	for (int i = r; i < r + 3; i++)
//	{
//		for (int j = c; j < c + 3; j++)
//		{
//			if (map[i][j] == num)
//				return false;
//		}
//	}
//	return true;
//}
//
//int flag = 0;
//void dfs(int row, int col)
//{
//	if (row == 9)
//	{
//		flag = 1;
//		return;
//	}
//	else
//	{
//		if (map[row][col] == 0)
//		{
//			for (int i = 1; i <= 9; i++)//分别写入1~9
//			{
//				if (cheack(row, col, i) && cheack2(row, col, i))
//				{
//					map[row][col] = i;
//					dfs(row + (col + 1) / 9, (col + 1) % 9);//尝试写入
//					if (flag)//写入成功
//						return;
//					map[row][col] = 0;//写入失败
//				}
//			}
//		}
//		else
//		{
//			dfs(row + (col + 1) / 9, (col + 1) % 9);
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		memset(map, 0, sizeof(map));
//		flag = 0;
//		for (int i = 0; i < 9; i++)
//			for (int j = 0; j < 9; j++)
//				cin >> map[i][j];
//		dfs(0, 0);
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 9; j++)
//			{
//				cout << map[i][j];
//				if (j == 8)
//					cout << endl;
//				else
//					cout << ' ';
//			}
//		}
//	}
////	system("pause");
//	return 0;
//}
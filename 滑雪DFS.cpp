//#include <iostream>
//#define max(a,b) a>b?a:b
//using namespace std;
//
//
//int a[100][100];
//int dfs[100][100];
//int point[4][2] = { 0,1,0,-1,1,0,-1,0 };
//int row, column; //�ֱ��ʾ�к���
//int DFS(int n,int m)
//{
//	if (dfs[n][m])
//		return dfs[n][m];
//	if (!dfs[n][m])
//		dfs[n][m] = 1;
//	for (int i = 0; i < 4; i++)//�ֱ������õ����������
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
//	for (int i = 0; i < row; i++) //���μ���ÿһ����ѩ��
//		for (int j = 0; j < column; j++)
//		{
//			MAX = max(MAX, DFS(i, j));
//		}
//	cout << MAX << endl;
////	system("pause");
//	return 0;
//}
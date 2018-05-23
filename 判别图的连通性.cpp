//#include <iostream>
//using namespace std;
//
//
//void warshall(int c[][100], int N)
//{
//	//	initc(r);/*用c装好r*/
//	for (int i = 0; i<N; i++)
//		for (int j = 0; j<N; j++)
//			if (c[j][i])
//				for (int k = 0; k<N; k++)
//				{
//					c[j][k] = c[j][k] + c[i][k];
//					if (c[j][k])
//						c[j][k] = 1;
//				}
//
//}
//
//int main()
//{
//	cout << "*****欢迎使用本系统*****" << endl;
//	cout << "请先输入要判断的邻接矩阵的大小N" << endl;
//
//	int n;
//	cin >> n;
//
//	while (n <= 0)
//	{
//		cout << "N输入错误，请重新输入!" << endl;
//		cin >> n;
//	}
//
//	cout << "请输入要判断的邻接矩阵" << endl;
//
//	int c[100][100], r[100][100];
//
//	for (int i = 0; i<n; i++)
//		for (int j = 0; j<n; j++)
//		{
//			cin >> c[i][j];
//			r[i][j] = c[i][j];
//		}
//	warshall(r, n);
//	//判断强连通图 
//	int i, j;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (r[i][j] != 1 && i != j)
//				break;
//		}
//		if (j != n)
//			break;
//	}
//	if (i == n)
//	{
//		cout << "该图是强连通图!" << endl << endl;
//		system("pause");
//		return 0;
//	}
//	//判断单向连通图 
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (r[i][j] != 1 && r[i][j] + r[j][i] != 1 && i != j)
//				break;
//		}
//		if (j != n)
//			break;
//	}
//	if (i == n)
//	{
//		cout << "该图是单向连通图!" << endl << endl;
//		system("pause");
//		return 0;
//	}
//	//判断连通图
//	//将c改造成单向连通图 
//	for (i = 0; i<n; i++)
//		for (j = 0; j<n; j++)
//		{
//			if (c[i][j] == 1)
//			{
//				r[i][j] = 1;
//				r[j][i] = 1;
//			}
//		}
//	warshall(r, n);
//
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (r[i][j] != 1 && i != j)
//				break;
//		}
//		if (j != n)
//			break;
//	}
//	if (i == n)
//	{
//		cout << "该图是弱连通图!" << endl << endl;
//		system("pause");
//		return 0;
//	}
//	cout << "该图不连通!" << endl << endl;
//	system("pause");
//	return 0;
//}

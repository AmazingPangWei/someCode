//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	int c[100][100];
//	bool t[100][100]; //输出答案的数组
//	cout << "***欢迎使用关系闭包运算系统！***" << endl;
//
//	char judge = 'Y';
//	while (judge == 'Y')
//	{
//		int n;
//		memset(c, 0, sizeof(c));
//		memset(t, 0, sizeof(t));
//		cout << "请输入矩阵n的大小:" << endl;
//		cin >> n;
//		cout << "请输入" << n << '*' << n << "大小的矩阵" << endl;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				cin >> c[i][j];
//				t[i][j] = c[i][j];
//			}
//
//		bool temp = false;		//判断原来矩阵是否合法
//		for (int i = 0; i < n; i++)
//		{
//			int j;
//			for (j = 0; j < n; j++)
//			{
//				if (c[i][j] != 1 && c[i][j] != 0)
//				{
//					cout << "原矩阵不合法！将自动退出程序！" << endl;
//					temp = true;
//					break;
//				}
//			}
//			if (j != n)
//				break;
//		}
//		if (temp)
//			break;
//
//		//自反闭包
//		cout << "自反闭包为:" << endl;
//		for (int i = 0; i < n; i++)
//			t[i][i] = true;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				cout << t[i][j] << ' ';
//				if (j == n - 1)
//					cout << endl;
//			}
//		//对称闭包
//		memset(t, 0, sizeof(t));
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				if (c[i][j])
//				{
//					t[i][j] = c[i][j];
//					t[j][i] = true;
//				}
//			}
//		cout << "对称闭包为:" << endl;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				cout << t[i][j] << ' ';
//				if (j == n - 1)
//					cout << endl;
//			}
//
//		//对称闭包
//		memset(t, 0, sizeof(t));
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				if (c[i][j])
//				{
//					t[i][j] = true;
//				} 
//			}
//		cout << "Warshall算法计算传递闭包为:" << endl;
//		for (int i = 0; i < n; i++)    //表示列
//			for (int j = 0; j < n; j++)//表示行
//				if (t[j][i])    //表示指向i的顶点
//					for (int k = 0; k < n; k++) //搜索出从i指向的顶点
//						if (t[i][k])
//							t[j][k] = 1;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				cout << t[i][j] << ' ';
//				if (j == n - 1)
//					cout << endl;
//			}
//
//		memset(t, 0, sizeof(t));
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				if (c[i][j])
//				{
//					t[i][j] = true;
//				}
//			}
//
//		cout << "R+算法计算传递闭包为:" << endl;
//		for (int i = 1; i < n; i++) //得到R+
//		{
//			for(int j=0;j<n;j++)    //计算R^(i+1)
//				for (int k = 0; k < n; k++)
//				{
//					for (int m = 0; m < n; m++)
//					{
//						c[j][k] += c[j][m] * c[m][k];
//					}
//					if (c[j][k])
//						t[j][k] = true;
//				}
//		}
//
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				cout << t[i][j] << ' ';
//				if (j == n - 1)
//					cout << endl;
//			}
//
//
//		cout << endl;
//		cout << "运算已经已结束，回复Y继续使用程序，回复N结束使用" << endl;
//		cin >> judge;
//		while (judge != 'N' && judge != 'Y')
//		{
//			cout << "输入错误，重新输入！" << endl;
//			cin >> judge;
//		}
//	}
//
//	cout << "***感谢使用关系闭包运算系统！***" << endl;
//
//	system("pause");
//	return 0;
//}
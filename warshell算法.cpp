//#include <iostream>
//#include <cstring>
//using namespace std;
//typedef long long LL;
//
//int a[100][100];
//int main()
//{
//	int n, m;
//	while (scanf("%d%d",&n,&m)!=EOF)
//	{
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < m; i++)
//		{
//			int t1, t2;
//			scanf("%d%d", &t1, &t2);
//			a[t1][t2] = 1;
//		}
//		for (int i = 1; i <= n; i++)    //表示列
//			for (int j = 1; j <= n; j++)//表示行
//				if (a[j][i])    //表示指向i的顶点
//					for (int k = 1; k <= n; k++) //搜索出从i指向的顶点
//						if (a[i][k])
//							a[j][k] = 1;
//		if (a[1][n] == 1)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	system("pause");
//	return 0;
//}

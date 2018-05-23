////二.拓扑序列算法思想
////(1)从有向图中选取一个没有前驱(即入度为0)的顶点，并输出之;
////(2)从有向图中删去此顶点以及所有以它为尾的弧;
////重复上述两步，直至图空，或者图不空但找不到无前驱的顶点为止。
////三.代码实现
////采用邻接矩阵实现，map[i][j] = 0, 表示节点i和j没有关联;map[i][j] = 1
////表示存在边<i, j>, 并且j的入度加1;
//
//#include<iostream>
//#include<stdlib.h>
//#include<stdio.h>
//#define MAX 100
//using namespace std;
//
//void toposort(int map[MAX][MAX], int indegree[MAX], int n)//n为节点数
//{
//	int i, j, k;
//	for (i = 0;i<n;i++) //遍历n次
//	{
//		for (j = 0;j<n;j++) //找出入度为0的节点
//		{
//			if (indegree[j] == 0)
//			{
//				indegree[j]--;
//				cout << j << endl;
//				for (k = 0;k<n;k++) //删除与该节点关联的边
//				{
//					if (map[j][k] == 1)
//					{
//						indegree[k]--;
//					}
//				}
//				break;
//			}
//		}
//	}
//}
//
//
//int main(void)
//{
//	int n, m; //n:关联的边数，m:节点数
//	while (scanf("%d %d", &n, &m) == 2 && n != 0)
//	{
//		int i;
//		int x, y;
//		int map[MAX][MAX]; //邻接矩阵
//		int indegree[MAX]; //入度
//		memset(map, 0, sizeof(map));
//		memset(indegree, 0, sizeof(indegree));
//		for (i = 0;i<n;i++)
//		{
//			scanf("%d %d", &x, &y);
//			if (!map[x][y])
//			{
//				map[x][y] = 1;
//				indegree[y]++;
//			}
//		}
//		toposort(map, indegree, m);
//	}
//	return 0;
//}
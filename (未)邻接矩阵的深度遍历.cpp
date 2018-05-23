//#include <iostream>
//using namespace std;
//typedef char VertexType; /* 顶点类型应由用户定义 */
//typedef int EdgeType; /* 边上的权值类型应由用户定义 */
//
//#define MAXSIZE 9 /* 存储空间初始分配量 */
//#define MAXEDGE 15
//#define MAXVEX 9
//
//typedef struct
//{
//	VertexType vexs[MAXVEX]; /* 顶点表 */
//	EdgeType arc[MAXVEX][MAXVEX];/* 邻接矩阵，可看作边表 */
//	int numVertexes, numEdges; /* 图中当前的顶点数和边数 */
//} MGraph;
//
//bool visited[MAXVEX];/* 访问标志的数组 */
//					 /* 邻接矩阵的深度优先递归算法 */
//void DFS(MGraph MG, int i)
//{
//	int j;
//	visited[i] = true;
//	cout << MG.vexs[i] << ' '; /* 打印顶点，也可以其它操作 */
//	for (j = 0; j < MG.numVertexes; j++)
//		if (MG.arc[i][j] == 1 && !visited[j])
//			DFS(MG, j);/* 对为访问的邻接顶点递归调用 */
//}
///* 邻接矩阵的深度遍历操作 */
//void DFSTraverse(MGraph MG)
//{
//	int i;
//	for (i = 0; i < MG.numVertexes; i++)
//		visited[i] = false;/* 初始所有顶点状态都是未访问过状态 */
//	for (i = 0; i < MG.numVertexes; i++)
//		if (!visited[i])
//			DFS(MG, i);/* 对未访问过的顶点调用DFS，若是连通图,只会执行一次*/
//}
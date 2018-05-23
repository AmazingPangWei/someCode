//#include <iostream>
//using namespace std;
//typedef char VertexType; /* 顶点类型应由用户定义 */
//typedef int EdgeType; /* 边上的权值类型应由用户定义 */
//
//#define MAXSIZE 9 /* 存储空间初始分配量 */
//#define MAXEDGE 15
//#define MAXVEX 9
//
//					  /* 邻接表结构 */
//typedef struct EdgeNode /* 边表结点 */
//{
//	int adjvex;    /* 邻接点域,存储该顶点对应的下标 */
//	int weight;     /* 用于存储权值,对于非网图可以不需要 */
//	struct EdgeNode *next; /* 链域,指向下一个邻接点 */
//} EdgeNode;
//
//typedef struct VertexNode /* 顶点表结点 */
//{
//	int in; //结点入度
//	char data; /* 顶点域,存储顶点信息 */
//	EdgeNode *firstedge;/* 边表头指针 */
//} VertexNode, AdjList[MAXVEX];
//
//typedef struct
//{
//	AdjList adjList;
//	int numVertexes, numEdges; /* 图中当前顶点数和边数 */
//} graphAdjList, *GraphAdjList;
//
//bool visited[MAXVEX];/* 访问标志的数组 */
//					 /* 邻接表的深度优先递归算法 */
//void DFS(GraphAdjList GL, int i)
//{
//	EdgeNode *p;
//	visited[i] = true;
//	cout << GL->adjList[i].data << ' '; /* 打印顶点，也可以其它操作 */
//	p = GL->adjList[i].firstedge;
//	while (p)
//	{
//		if (!visited[p->adjvex])
//			DFS(GL, p->adjvex);/* 对未访问的邻接顶点递归调用 */
//		p = p->next;
//	}
//}
///* 邻接表的深度遍历操作 */
//void DFSTraverse(GraphAdjList GL)
//{
//	int i;
//	for (i = 0; i < GL->numVertexes; i++)
//		visited[i] = false;/* 初始所有顶点状态都是未访问过状态 */
//	for (i = 0; i < GL->numVertexes; i++)
//		if (!visited[i])
//			DFS(GL, i);/* 对未访问过的顶点调用DFS，若是连通图,只会执行一次*/
//}
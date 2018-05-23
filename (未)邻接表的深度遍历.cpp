//#include <iostream>
//using namespace std;
//typedef char VertexType; /* ��������Ӧ���û����� */
//typedef int EdgeType; /* ���ϵ�Ȩֵ����Ӧ���û����� */
//
//#define MAXSIZE 9 /* �洢�ռ��ʼ������ */
//#define MAXEDGE 15
//#define MAXVEX 9
//
//					  /* �ڽӱ�ṹ */
//typedef struct EdgeNode /* �߱��� */
//{
//	int adjvex;    /* �ڽӵ���,�洢�ö����Ӧ���±� */
//	int weight;     /* ���ڴ洢Ȩֵ,���ڷ���ͼ���Բ���Ҫ */
//	struct EdgeNode *next; /* ����,ָ����һ���ڽӵ� */
//} EdgeNode;
//
//typedef struct VertexNode /* ������� */
//{
//	int in; //������
//	char data; /* ������,�洢������Ϣ */
//	EdgeNode *firstedge;/* �߱�ͷָ�� */
//} VertexNode, AdjList[MAXVEX];
//
//typedef struct
//{
//	AdjList adjList;
//	int numVertexes, numEdges; /* ͼ�е�ǰ�������ͱ��� */
//} graphAdjList, *GraphAdjList;
//
//bool visited[MAXVEX];/* ���ʱ�־������ */
//					 /* �ڽӱ��������ȵݹ��㷨 */
//void DFS(GraphAdjList GL, int i)
//{
//	EdgeNode *p;
//	visited[i] = true;
//	cout << GL->adjList[i].data << ' '; /* ��ӡ���㣬Ҳ������������ */
//	p = GL->adjList[i].firstedge;
//	while (p)
//	{
//		if (!visited[p->adjvex])
//			DFS(GL, p->adjvex);/* ��δ���ʵ��ڽӶ���ݹ���� */
//		p = p->next;
//	}
//}
///* �ڽӱ����ȱ������� */
//void DFSTraverse(GraphAdjList GL)
//{
//	int i;
//	for (i = 0; i < GL->numVertexes; i++)
//		visited[i] = false;/* ��ʼ���ж���״̬����δ���ʹ�״̬ */
//	for (i = 0; i < GL->numVertexes; i++)
//		if (!visited[i])
//			DFS(GL, i);/* ��δ���ʹ��Ķ������DFS��������ͨͼ,ֻ��ִ��һ��*/
//}
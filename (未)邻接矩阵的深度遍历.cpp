//#include <iostream>
//using namespace std;
//typedef char VertexType; /* ��������Ӧ���û����� */
//typedef int EdgeType; /* ���ϵ�Ȩֵ����Ӧ���û����� */
//
//#define MAXSIZE 9 /* �洢�ռ��ʼ������ */
//#define MAXEDGE 15
//#define MAXVEX 9
//
//typedef struct
//{
//	VertexType vexs[MAXVEX]; /* ����� */
//	EdgeType arc[MAXVEX][MAXVEX];/* �ڽӾ��󣬿ɿ����߱� */
//	int numVertexes, numEdges; /* ͼ�е�ǰ�Ķ������ͱ��� */
//} MGraph;
//
//bool visited[MAXVEX];/* ���ʱ�־������ */
//					 /* �ڽӾ����������ȵݹ��㷨 */
//void DFS(MGraph MG, int i)
//{
//	int j;
//	visited[i] = true;
//	cout << MG.vexs[i] << ' '; /* ��ӡ���㣬Ҳ������������ */
//	for (j = 0; j < MG.numVertexes; j++)
//		if (MG.arc[i][j] == 1 && !visited[j])
//			DFS(MG, j);/* ��Ϊ���ʵ��ڽӶ���ݹ���� */
//}
///* �ڽӾ������ȱ������� */
//void DFSTraverse(MGraph MG)
//{
//	int i;
//	for (i = 0; i < MG.numVertexes; i++)
//		visited[i] = false;/* ��ʼ���ж���״̬����δ���ʹ�״̬ */
//	for (i = 0; i < MG.numVertexes; i++)
//		if (!visited[i])
//			DFS(MG, i);/* ��δ���ʹ��Ķ������DFS��������ͨͼ,ֻ��ִ��һ��*/
//}
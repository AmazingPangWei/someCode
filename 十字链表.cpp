//#include <iostream>
//using namespace std;
//typedef char VertexData;
//
//typedef struct ArcNode
//{
//	int tailvex, headvex;//β����,ͷ����
//	struct ArcNode *hlink, *tlink;//ָ����˻��Ļ�ͷ��ͬ��һ������ָ����˻��Ļ�β��ͬ����һ����
//}ArcNode;
//
//typedef struct VertexNode
//{
//	VertexData data;//���������
//	ArcNode *firstin, *firstout;//ָ���Ըö�����Ϊ��ͷ�ĵ�һ�������㣬ָ���Ըö�����Ϊ��β�ĵ�һ��������
//};
//
//typedef struct
//{
//	VertexNode vertex[20];//����20������
//	int vexnum, arcnum;//������������
//}OrthList;//ʮ������
//
//int LocateVertex(OrthList *g, VertexData t)//��Ԫ��t�ڶ����е�λ��
//{
//	int i;
//	for (i = 0;i < 20;i++)
//		if (t == g->vertex[i].data)
//			return i;
//	return -1;
//}
//
//void CrtOrthList(OrthList *g)
//{
//	int n, e;//nΪ������,eΪ����
//	cin >> n >> e;
//	g->vexnum = n;
//	g->arcnum = e;
//	for (int i = 0;i < n;i++)//���붥��
//	{
//		cin >> g->vertex[i].data;
//		g->vertex[i].firstin = NULL;
//		g->vertex[i].firstout = NULL;
//	}
//	for (int k = 0;k < e;k++)//������
//	{
//		VertexData A, B;//��Aָ��B��һ����,��AΪ��β��BΪ��ͷ
//		ArcNode *p;
//		cin >> A >> B;
//		int i, j;
//		i = LocateVertex(g, A);//A�ڶ����е�λ��
//		j = LocateVertex(g, B);//B�ڶ����е�λ��
//		p = (ArcNode *)malloc(sizeof(ArcNode));
//		p->tailvex = i;
//		p->headvex = j;
//		p->tlink = g->vertex[i].firstout;
//		g->vertex[i].firstout = p;
//		p->hlink = g->vertex[j].firstin;
//		g->vertex[j].firstin = p;
//	}
//}
//
//int in_sum(OrthList *g,VertexData t)
//{
//	int i;
//	int in = 0;
//	i = LocateVertex(g, t);
//	ArcNode *p;
//	p = g->vertex[i].firstin;
//	while (p)
//	{
//		in++;
//		p = p->hlink;
//	}
//	return in;
//}
//int out_sum(OrthList *g, VertexData t)
//{
//	int i;
//	int out = 0;
//	i = LocateVertex(g, t);
//	ArcNode *p;
//	p = g->vertex[i].firstout;
//	while (p)
//	{
//		out++;
//		p = p->tlink;
//	}
//	return out;
//}
//int main()
//{
//	OrthList g;
//	CrtOrthList(&g);
//	VertexData t;
//	cin >> t;
//	cout << in_sum(&g, t) << ' ' << out_sum(&g, t) << endl;
//	system("pause");
//	return 0;
//}
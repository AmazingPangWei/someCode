//#include <iostream>
//using namespace std;
//typedef char VertexData;
//
//typedef struct ArcNode
//{
//	int tailvex, headvex;//尾顶点,头顶点
//	struct ArcNode *hlink, *tlink;//指向与此弧的弧头相同下一条弧，指向与此弧的弧尾相同的下一条弧
//}ArcNode;
//
//typedef struct VertexNode
//{
//	VertexData data;//顶点的名字
//	ArcNode *firstin, *firstout;//指向以该顶点作为弧头的第一个弧顶点，指向以该顶点作为弧尾的第一个弧顶点
//};
//
//typedef struct
//{
//	VertexNode vertex[20];//建立20个顶点
//	int vexnum, arcnum;//顶点数，弧数
//}OrthList;//十字链表
//
//int LocateVertex(OrthList *g, VertexData t)//求元素t在顶点中的位置
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
//	int n, e;//n为顶点数,e为弧数
//	cin >> n >> e;
//	g->vexnum = n;
//	g->arcnum = e;
//	for (int i = 0;i < n;i++)//输入顶点
//	{
//		cin >> g->vertex[i].data;
//		g->vertex[i].firstin = NULL;
//		g->vertex[i].firstout = NULL;
//	}
//	for (int k = 0;k < e;k++)//建立弧
//	{
//		VertexData A, B;//由A指向B的一条弧,即A为弧尾，B为弧头
//		ArcNode *p;
//		cin >> A >> B;
//		int i, j;
//		i = LocateVertex(g, A);//A在顶点中的位置
//		j = LocateVertex(g, B);//B在顶点中的位置
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
//#include <iostream>
//#define max 50
//using namespace std;
//
//int deep = 0;
//typedef struct Node
//{
//	int data;
//	Node *lchild, *rchild;
//}tree,*Bitree;
//
//typedef struct Queue
//{
//	Bitree data[max];
//	int rear, front;
//}Queue;
//
//void InitQueue(Queue *Q)
//{
//	Q->front = Q->rear = 0;
//}
//Bitree Inittree()
//{
//	Bitree T;
//	int t;
//	cin >> t;
//	if (t == -1)
//		T = NULL;
//	else
//	{
//		T = (Bitree)malloc(sizeof(Node));
//		T->data = t;
//		T->lchild = Inittree();
//		T->rchild = Inittree();
//	}
//	return T;
//}
//
//void visit(int n)
//{
//	cout << n << ' ';
//}
//
//void print(Bitree T)
//{
//	if (T != NULL)
//	{
//		print(T->lchild);
//		visit(T->data);
//		print(T->rchild);
//	}
//}
//
//void enterQueue(Queue *Q, Bitree T)
//{
//	if ((Q->rear + 1) % max == Q->front)
//		return;
//	Q->data[Q->rear] = T;
//	Q->rear = (Q->rear + 1) % max;
//}
//
//void deleteQueue(Queue *Q, Bitree *T)
//{
//	if (Q->rear == Q->front)
//		return;
//	*T = Q->data[Q->front];
//	Q->front = (Q->front + 1) % max;
//}
//void LayerOrder(Bitree T)
//{
//	Queue Q;
//	Bitree q;
//	InitQueue(&Q);
//	if (T == NULL)
//		return;
//	enterQueue(&Q, T);
//	while (Q.front != Q.rear)
//	{
//		deleteQueue(&Q, &q);
//		visit(q->data);
//		if (q->lchild != NULL)
//			enterQueue(&Q, q->lchild);
//		if (q->rchild != NULL)
//			enterQueue(&Q, q->rchild);
//	}
//}
//
//void high(Bitree T,int h)//¸ß¶È
//{
//	if (T != NULL)
//	{
//		if (h > deep)
//			deep = h;
//		high(T->lchild, h + 1);
//		high(T->rchild, h + 1);
//	}
//}
//	//strcpy
//int main()
//{
//	Bitree T;
//	T = Inittree();
//	print(T);
//	cout << endl;
//	LayerOrder(T);
//	cout << endl;
////	high(T, 1);
////	cout << deep << endl;
//	system("pause");
//	return 0;
//}
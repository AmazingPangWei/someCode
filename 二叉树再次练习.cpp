//#include <iostream>
//#include <malloc.h>
//
//using namespace std;
//
//int n,temp=0;//temp计数
//int *PreArray, *InArray;
//
//typedef struct Node
//{
//	int data;
//	Node *lchild, *rchild;
//}BiNode,*Bitree;
//
//typedef struct Queue
//{
//	Bitree a[120];
//	int front, rear;
//}SeqQueue;
//
//void InitQueue(SeqQueue *Q)
//{
//	Q->front = 0;
//	Q->rear = 0;
//}
//int EnterQueue(SeqQueue *Q,Bitree *x)
//{
//	if (Q->front == (Q->rear + 1) % 50)
//		return -1;
//	else {
//		Q->a[Q->rear] = *x;
//		Q->rear = (Q->rear + 1) % 50;
//		return 1;
//	}
//}
//int DeleteQueue(SeqQueue *Q,Bitree *x)
//{
//	if (Q->front == Q->rear)
//		return -1;
//	else
//	{
//		*x = Q->a[Q->front];
//		Q->front = (Q->front + 1) % 50;
//		return 1;
//	}
//}
//
//Bitree creatBitree()
//{
//
//	Bitree T;
//	int t;
//	cin >> t;
//	if (t == -1)
//		T = NULL;
//	else
//	{
//		T = (Bitree)malloc(sizeof(Node));
//		T->data = t;
//		T->lchild = creatBitree();
//		T->rchild = creatBitree();
//	}
//	return T;
//}
//
//void visit(Bitree x)
//{
//	cout << x->data ;
//	if (temp < n-1)
//		cout << ' ';
//	if (temp == n - 1)
//		cout << endl;
//	temp++;
//}
//
//void PreOrder(Bitree root)
//{
//	if (root != NULL)
//	{
//	
//		visit(root);
//		PreOrder(root->lchild);
//		PreOrder(root->rchild);
//	}
//}
//
//int LayerQrder(Bitree root)
//{
//	SeqQueue Q;
//	Bitree T;
//	if (root == NULL)
//		return -1;
//	InitQueue(&Q);
//	EnterQueue(&Q, &root);
//	while (Q.front != Q.rear)
//	{
//		DeleteQueue(&Q, &T);
//		visit(T);
//		if (T->lchild != NULL)
//			EnterQueue(&Q, &T->lchild);
//		if (T->rchild != NULL)
//			EnterQueue(&Q, &T->rchild);
//	}
//	return 1;
//}
//
//
//void PreInCreateTree(Bitree & T, int PreS, int PreE, int InS, int InE) {
//	int RootIndex;
//	中序中先序的第一个字符
//	T = (Bitree)malloc(sizeof(Node));
//	T->data = PreArray[PreS];
//	寻找该结点在中序序列中的位置
//	for (int i = InS;i <= InE;i++) {
//		if (T->data == InArray[i]) {
//			RootIndex = i;
//			break;
//		}
//	}
//	if (RootIndex != InS) {//根结点的左子树不为空
//		以根节点的左结点为根建树
//		PreInCreateTree(T->lchild, PreS + 1, (RootIndex - InS) + PreS, InS, RootIndex - 1);
//	}
//	else {
//		T->lchild = NULL;
//	}
//	根结点的右子树不为空
//	if (RootIndex != InE) {
//		以根节点的右结点为根建树
//		PreInCreateTree(T->rchild, PreS + 1 + (RootIndex - InS), PreE, RootIndex + 1, InE);
//	}
//	else {
//		T->rchild = NULL;
//	}
//}
//
//int main()
//{
//	int i;
//	while (cin >> n) {
//		if (n == 0)
//			;
//		else {
//			PreArray = new int[n];
//			InArray = new int[n];
//			for (i = 0;i < n;i++)
//				cin >> PreArray[i];
//			for (i = 0;i < n;i++)
//				cin >> InArray[i];
//			Bitree  T;
//			PreInCreateTree(T, 0, n - 1, 0, n - 1);
//			LayerQrder(T);
//			delete[] PreArray;
//			delete[] InArray;
//			delete T;
//			temp = 0;
//		}
//	}
//	system("pause");
//	return 0;
//}
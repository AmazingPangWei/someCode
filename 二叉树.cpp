//#include <iostream>
//
//using namespace std;
//
//typedef struct Node {
//	int data;
//	struct Node *lchild , *rchild ;
//}BiNode, *Bitree;
//
//Bitree inittree() {
//	Bitree T;
//	int a;
//	cin >> a;
//	if (a == -1)
//		T = NULL;
//	else {
//		T = (Bitree)malloc(sizeof(Node));
//		T->data = a;
//		T->lchild = inittree();
//		T->rchild = inittree();
//	}
//	return T;
//}
//
//void visit(int n)
//{
//	cout << n << ' ';
//}
//
//void PreOrder(Bitree root) {
//	if (root != NULL)
//	{
//		visit(root->data);
//		PreOrder(root->lchild);
//		PreOrder(root->rchild);
//	}
//}
//
//int main()
//{
//	Bitree T;
//	T = inittree();
//	PreOrder(T);
//	system("pause");
//	return 0;
//
//}
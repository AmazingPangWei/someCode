//#include <iostream>
//#include <malloc.h>
//using namespace std;
//
//typedef struct Node
//{
//	int data;
//	Node *next;
//}Node,*LinkList;
////��ʼ��
//void InitList(LinkList *L)
//{
//	*L = (LinkList)malloc(sizeof(Node));
//	(*L)->next = NULL;
//}
////ͷ�巨
//void creatfromhead(LinkList L)
//{
//	LinkList s;
//	int t;
//	while (1) {
//		cin >> t;
//		if (t == -1)
//			break;
//		else
//		{
//			s = (LinkList)malloc(sizeof(Node));
//			s->data = t;
//			s->next = L->next;
//			L->next = s;
//		}
//	}
//}
////β�巨
//void creatfromtail(LinkList L)
//{
//	LinkList s, r;
//	r = L;
//	int t;
//	while (1)
//	{
//		cin >> t;
//		if (t == -1)
//			break;
//		else
//		{
//			s = (LinkList)malloc(sizeof(Node));
//			s->data = t;
//			r->next =s;
//			r = s;
//		}
//	}
//	r->next = NULL;
//}
////���
//void printList(LinkList L)
//{
//	LinkList p = L->next;
//	while (p != NULL)
//	{
//		cout << p->data << ' ';
//		p = p->next;
//	}
//}
////�ڵ�n���������һ��e
//void InsList(LinkList L, int n, int e)
//{
//	int i;
//	LinkList p = L,s;
//	for (i = 0;i < n - 1;i++)
//		p = p->next;
//	s = (LinkList)malloc(sizeof(Node));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//}
////ɾ����n�����
//void DeleteList(LinkList L, int n)
//{
//	LinkList p=L,t;
//	int i;
//	for (i = 0;i < n - 1;i++)
//		p = p->next;
//	t = p->next;
//	p->next = p->next->next;
//	free(t);
//}
//
//int main()
//{
//	LinkList L;
//	InitList(&L);
//	creatfromtail(L);
//	printList(L);
//	cout << endl;
//	InsList(L, 3, 5);
//	printList(L);
//	cout << endl;
//	DeleteList(L, 3);
//	printList(L);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
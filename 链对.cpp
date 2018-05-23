//#include <iostream>
//
//using namespace std;
//
//typedef struct Queue
//{
//	int data;
//	Queue* next;
//}Queue,*LinkQueue;
//
//void initQueue(LinkQueue *Q)
//{
//	*Q = (LinkQueue)malloc(sizeof(Queue));
//	(*Q)->next = NULL;
//}
//
//void enterQueue(LinkQueue Q)
//{
//	LinkQueue p, r=Q;
//	while (1) {
//		int i;
//		cin >> i;
//		if (i == -1)
//			break;
//		else {
//			p = (LinkQueue)malloc(sizeof(Queue));
//			p->data = i;
//			r->next = p;
//			r = p;
//		}
//		r->next = NULL;// important
//	}
//}
//void quitQueue(LinkQueue Q, int *x)
//{
//	LinkQueue p=Q->next;
//	*x = p->data;
//	Q->next = p->next;
//	free(p);
//}
//int main()
//{
//	LinkQueue Q;
//	initQueue(&Q);
//	enterQueue(Q);
//	int t;
//	while (Q->next != NULL) {
//		quitQueue(Q,&t);
//		cout << t << ' ';
//	}
//	system("pause");
//	return 0;
//}
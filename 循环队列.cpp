//#include <iostream>
//#define max 50
//using namespace std;
//
//typedef struct Queue
//{
//	int a[max];
//	int front, rear;
//}Queue;
//
//void initQueue(Queue *Q)
//{
//	Q->front = Q->rear = 0;
//}
//
//void enterQueue(Queue *Q, int x)
//{
//	if ((Q->rear + 1) % max == Q->front)
//		return;
//	Q->a[Q->rear] = x;
//	Q->rear = (Q->rear + 1) % max;
//}
//
//void quitQueue(Queue *Q, int *x)
//{
//	if (Q->front == Q->rear)
//		return;
//	*x = Q->a[Q->front];
//	Q->front = (Q->front + 1) % max;
//}
//int main()
//{
//	int i;
//	Queue Q;
//	initQueue(&Q);
//	while (1)
//	{
//		cin >> i;
//		if (i == -1)
//			break;
//		enterQueue(&Q, i);
//	}
//	while (Q.front != Q.rear)
//	{
//		quitQueue(&Q, &i);
//		cout << i << ' ';
//	}
//	system("pause");
//	return 0;
//}
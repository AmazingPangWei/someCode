//#include <iostream>
//#include <malloc.h>
//using namespace std;
//
//typedef struct Node
//{
//	int data;
//	Node *next;
//}Stack,*LinkStack;
//
//void InitStack(LinkStack *s)
//{
//	*s = (LinkStack)malloc(sizeof(Node));
//	(*s)->next = NULL;
//}
//
//void pushStack(Stack *s, int n)
//{
//	Stack *t;
//	t = (Stack *)malloc(sizeof(Node));
//	t->data = n;
//	t->next = s->next;
//	s->next = t;
//}
//
//void popStack(LinkStack top, int *n)
//{
//	LinkStack p;
//	p = top->next;
//	*n = p->data;
//	top->next = p->next;
//	free(p);
//}
//
//int main()
//{
//	LinkStack S;
//	InitStack(&S);
//	while (1)
//	{
//		int i;
//		cin >> i;
//		if (i == -1)
//			break;
//		else
//			pushStack(S, i);
//	}
//	int t;
//	while (S->next != NULL) {
//		popStack(S, &t);
//		cout << t <<' ';
//	}
//	system("pause");
//	return 0;
//}
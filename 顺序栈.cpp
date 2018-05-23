//#include <iostream>
//#define max 50
//using namespace std;
//
//typedef struct Stack
//{
//	int a[max];
//	int top;
//}Stack;
//void initStack(Stack *s)
//{
//	s->top = -1;
//}
//void pushStack(Stack *s, int x)
//{
//	s->top++;
//	s->a[s->top] = x;
//}
//void popStack(Stack *s,int *x)
//{
//	*x = s->a[s->top];
//	s->top--;
//}
//int main()
//{
//	Stack S;
//	initStack(&S);
//	int i;
//	while (1) {
//		cin >> i;
//		if (i == -1)
//			break;
//		else
//		{
//			pushStack(&S, i);
//		}
//	}
//	while (S.top != -1)
//	{
//		popStack(&S, &i);
//		cout << i << ' ';
//	}
//	system("pause");
//	return 0;
//}
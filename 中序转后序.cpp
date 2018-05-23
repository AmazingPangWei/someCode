//#include <iostream>
//using namespace std;
//
////a） 是数字,直接输出 
////b） 是运算符 
////i : “(” 直接入栈 
////ii : “)” 将符号栈中的元素依次出栈并输出, 直到 “(“, “(“只出栈, 不输出 
////iii: 其他符号, 将符号栈中的元素依次出栈并输出, 
////直到遇到比当前符号优先级更低的符号或者"("。 将当前符号入栈。
//
//typedef struct Node
//{
//	char a[100];
//	int top;
//}Stack;
//
//void InitStack(Stack *s)
//{
//	s->top = -1;
//}
//
//void push(Stack *s, char c)
//{
//	s->top++;
//	s->a[s->top] = c;
//}
//
//void pop(Stack *s, char *c)
//{
//	*c = s->a[s->top];
//	s->top--;
//}
//
//int compare(char c, char s)//字符C与栈的元素比较,新加的操作符始终比栈顶的优先性高
//{
//	if (c == '*' || c == '/')
//	{
//		if (s == '*' || s == '/')
//			return 1;
//		else
//			return 0;
//	}
//	if (c == '+' || c == '-')
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		char a[10000];
//		cin >> a;
//		Stack S;
//		InitStack(&S);
//		int i = 0;
//		char c;
//		while (a[i] != '=')
//		{
//			if (a[i] == '.')
//				cout << a[i];
//			else if (((a[i] - '0') >= 0 && (a[i] - '0') <= 9 && (a[i + 1] - '0') >= 0 && (a[i + 1] - '0' <= 9)) || a[i + 1] == '.')
//				cout << a[i];
//			else if (a[i] - '0' >= 0 && (a[i] - '0') <= 9)
//				cout << a[i] << ' ';
//			else if (a[i] == '(')
//				push(&S, a[i]);
//			else if (a[i] == ')')
//			{
//				while (1)
//				{
//					pop(&S, &c);
//					if (c == '(')
//						break;
//					cout << char(c) << ' ';
//				}
//			}
//			else
//			{
//				while (compare(a[i], S.a[S.top]) && S.a[S.top] != '(' && (S.top != -1))//保证a[i]比S的元素优先性
//				{
//					pop(&S, &c);
//					cout << (char)c << ' ';
//				}
//				push(&S, a[i]);
//			}
//			i++;
//		}
//		while (S.top != -1)
//		{
//			pop(&S, &c);
//			cout << c << ' ';
//		}
//		cout << '=' << endl;
//	}
//	system("pause");
//	return 0;
//}
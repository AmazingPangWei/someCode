//#include <iostream>
//using namespace std;
//
////a�� ������,ֱ����� 
////b�� ������� 
////i : ��(�� ֱ����ջ 
////ii : ��)�� ������ջ�е�Ԫ�����γ�ջ�����, ֱ�� ��(��, ��(��ֻ��ջ, ����� 
////iii: ��������, ������ջ�е�Ԫ�����γ�ջ�����, 
////ֱ�������ȵ�ǰ�������ȼ����͵ķ��Ż���"("�� ����ǰ������ջ��
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
//int compare(char c, char s)//�ַ�C��ջ��Ԫ�رȽ�,�¼ӵĲ�����ʼ�ձ�ջ���������Ը�
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
//				while (compare(a[i], S.a[S.top]) && S.a[S.top] != '(' && (S.top != -1))//��֤a[i]��S��Ԫ��������
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
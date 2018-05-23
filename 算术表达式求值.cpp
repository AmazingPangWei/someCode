//#include <iostream>
//#include <string>
//#include <cctype>
//#include <stack>
//#include <queue>
//#include<cstdio>
//using namespace std;
//
//int solve(char ch)
//{
//	if (ch == '+' || ch == '-')
//		return 1;
//	else if (ch == '*' || ch == '/')
//		return 2;
//}
//
//double JS(double a, char c)
//{
//	if (c == '+')
//		return a + b;
//	if(c==)
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//	queue<double> num;
//	queue<char> cul;
//	stack<char> ch;
//	
//	int temp = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//   
//if (isalnum(s[i]))
//			temp = temp * 10 + (s[i] - '0');
//		else
//		{
//			if (ch.empty())
//			{
//				ch.push(s[i]);
//			}
//			else
//			{
//				if (solve(ch.top()) > solve(s[i]))
//				{
//					cul.push(s[i]);
//				}
//				else
//				{
//					while (solve(ch.top()) <= solve(s[i]) && !ch.empty)
//					{
//						cul.push(ch.top());
//						ch.pop();
//					}
//
//				}
//			}
//			num.push(temp);
//			temp = 0;
//		}
//	}
//	num.push(temp);
//
//
//
//	system("pause");
//	return 0;
//}
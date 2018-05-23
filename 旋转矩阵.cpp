//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//void change(char &x)
//{
//	if (x == '-')
//		x = '|';
//	if (x == '|')
//		x = '-';
//}
//
//char a[31][31];
//char b[31][31];
//int n, m;
//void Left()
//{
//	swap(n, m);
//	for (int i = 0; i < n; i++)
//	{
//		for (intj = 0; j < m; j++)
//		{
//
//		}
//	}
//}
//
//void Right()
//{
//
//}
//
//int main()
//{
//
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> m;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				cin >> a[i][j];
//		string s;
//		cin >> s;
//		int num_L = 0, num_R = 0;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == 'L')
//				num_L++;
//			else
//				num_R++;
//		}
//		int c = num_L - num_R;
//		int flag = 1;//1×ó£¬0ÓÒ
//		if (c > 0)
//		{
//			c %= 4;
//			if (c == 3)
//			{
//				flag = 0;
//				c = 1;
//			}
//		}
//		else
//		{
//			flag = 0;
//			c = abs(c);
//			c %= 4;
//			if (c == 3)
//			{
//				flag = 1;
//				c = 1;
//			}
//		}
//		if (c == 0)
//		{
//			cout << n << ' ' << m << endl;
//		}
//		else if (c == 1 && flag)
//		{
//			Left();
//		}
//		else if (c == 1 && !flag)
//		{
//			Right();
//		}
//		else
//		{
//			Right();
//			Right();
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}
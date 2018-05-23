//#include <iostream>
//#include <string>
//#include <cctype>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	int c[300];
//	memset(c, 0, sizeof(c));
//	string str;
//	char t;
//	do
//	{
//		t = getchar();
//		if (t == '\n')
//			break;
//		else
//		{
//			if (isalpha(t))
//			{
//				c[t]++;
//				c[t + 32]++;
//			}
//			else if (t == '+')
//			{
//				for (int i = 'A'; i <= 'Z'; i++)
//					c[i]++;
//			}
//			else
//				c[t]++;
//		}
//	} while (1);
//	cin >> str;
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (!c[str[i]])
//			cout << str[i];
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//string s[100000];
//int main()
//{
//	string t;
//	getline(cin, t);
//	int x = 0;//单词的数量
//	for (int i = 0; i < t.size(); i++)
//	{
//		if (t[i] == ' ')
//		{
//			x++;
//			continue;
//		}
//		s[x].push_back(t[i]);
//	}
//	int i=0;
//	int now = 0;//目前字符的个数
//	int cha = 0;//目前单词的个数
//	while(i<=x)
//	{
//		if (now + s[i].size() > 20 && cha == 1)
//		{
//			int change = 20 - now;
//			for (int i = 0; i <= change; i++)
//				cout << ' ';
//			cout << endl;
//			now = 0;
//			cha = 0;
//		}
//		else if (now + s[i].size() <= 20)
//		{
//			if (i+1<=x &&now + s[i].size() + s[i + 1].size()+1 > 20)
//			{
//				int change = 20 - now - s[i].size();
//				if (cha != 0)
//				{
//					for (int i = 0; i < change; i++)
//						cout << ' ';
//					cout << s[i] << endl;
//				}
//				else
//				{
//					cout << s[i];
//					for (int i = 0; i < change; i++)
//						cout << ' ';
//					cout << endl;
//				}
//				now = 0;
//				cha = 0;
//			}
//			else
//			{
//				cout << s[i] << ' ';
//				now += s[i].size()+1;
//				cha++;
//			}
//		}
//		i++;
//	}
//	int change = 20 - now - s[i].size();
//	for (int i = 0; i < change; i++)
//		cout << ' ';
////	system("pause");
//	return 0;
//}
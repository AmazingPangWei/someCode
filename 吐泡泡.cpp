//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int flag = 1;
//		while (flag)
//		{
//			int i;
//			int flag1 = 0;
//			if (s.size() == 0)
//				break;
//			for (i = 0; i < s.size() - 1; i++)
//			{
//				if (s[i] == s[i + 1])
//				{
//					if (s[i] == 'O')
//					{
// 						s.erase(i, 2);
//						flag1 = 1;
//						break;
//					}
//					else if (s[i] == 'o')
//					{
//						s.replace(i, 2, "O");
//						flag1 = 1;
//						break;
//					}
//				}
//			}
//			if (!flag1)
//				flag = 0;
//		}
//		cout << s << endl;
//	}
//	//system("pause");
//	return 0;
//}
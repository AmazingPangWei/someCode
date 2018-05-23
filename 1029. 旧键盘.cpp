//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string str1, str2;
//	cin >> str1 >> str2;
//	string ans;
//	for (int i = 0;i < str1.size();i++)
//	{
//		if (str1[i] >= 'a' && str1[i] <= 'z')
//		{
//			if (str2.find(str1[i]) == -1 && str2.find(str1[i] - 32) == -1)
//			{
//				if (ans.find(str1[i] - 32) == -1)
//					ans.append(1, str1[i] - 32);
//			}
//		}
//		else if (str1[i] >= 'A' && str1[i] <= 'Z')
//		{
//			if (str2.find(str1[i]) == -1 && str2.find(str1[i] + 32) == -1)
//			{
//				if (ans.find(str1[i]) == -1)
//					ans.append(1, str1[i]);
//			}
//		}
//		else 
//			if(str2.find(str1[i]) == -1 && ans.find(str1[i]) == -1)
//				ans.append(1, str1[i]);
//	}
//	for (int i = 0;i < ans.size();i++)
//		cout << ans[i];
//	cout << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string str1, str2;
//	int i, j;
//	cin >> str1;
//	cin >> str2;
//	for(i=0;i<(int)str2.size();i++)
//		for (j = 0;j < (int)str1.size();j++)
//		{
//			if (str2[i] == str1[j]) {
//				str2.erase(i, 1);
//				str1.erase(j, 1);
//				i--;
//				break;
//			}
//	}
//	if (str2.empty())
//		cout << "Yes " << str1.size() << endl;
//	if (!str2.empty())
//		cout << "No " << str2.size() << endl;
//	system("pause");
//	return 0;
//}
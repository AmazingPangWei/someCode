//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//	int i;
//	int T_num = 0, TA_num = 0, TAP_num = 0;
//	for (i = str.size()- 1;i >= 0;i--)
//	{
//		if (str[i] == 'T')
//			T_num++;
//		if (str[i] == 'A')
//			TA_num = (TA_num + T_num) % 1000000007;
//		if (str[i] == 'P') {
//			TAP_num = (TA_num + TAP_num) % 1000000007;
//		}
//	}
//	cout << TAP_num;
//	system("pause");
//	return 0;
//}
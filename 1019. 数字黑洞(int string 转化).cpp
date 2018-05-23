//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//string change(string s)
//{
//	if (s.size() == 4)
//		return s;
//	if (s.size() == 3)
//	{
//		s.insert(0, "0");
//	}
//	else if (s.size() == 2)
//	{
//		s.insert(0, "00");
//	}
//	else if (s.size() == 1)
//	{
//		s.insert(0, "000");
//	}
//	return s;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	string s = to_string(n);
//	s = change(s);
//	if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3])
//	{
//		cout << s << " - " << s << " = 0000" << endl;
//		return 0;
//	}
//	do 
//	{
//		sort(s.begin(), s.end());
//		string MIN = s;
//		sort(s.rbegin(), s.rend());
//		string MAX = s;
//		int t = std::stoi(MAX) - std::stoi(MIN);
//		s = to_string(t);
//		s = change(s);
//		cout << MAX << " - " << MIN << " = "<< s << endl;
//	} while (s != "6174"); //考虑一开始就是6174的情况
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int _next[1000];
//string s;
//
//void get_next(string s)
//{
//	int k = -1;
//	_next[0] = -1;
//	int j = 0;
//	while (j < s.size() - 1)
//	{
//		if (k == -1 || s[k] == s[j])
//			_next[++j] = ++k;
//		else
//			k = _next[k];
//	}
//}
//
//
//int main()
//{
//	cin >> s;
//	get_next(s);
//	for (int i = 0; i < s.size(); i++)
//		cout << _next[i] << ' ';
//	system("pause");
//	return 0;
//}
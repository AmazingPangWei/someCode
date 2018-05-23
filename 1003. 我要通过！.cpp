////http://blog.csdn.net/acm_ted/article/details/19835069
//#include <iostream>
//#include <string>
//using namespace std;
//
//bool jauge(string str)
//{
//	for (int i = 0;i < str.size();i++)
//		if (str[i] != 'P' && str[i] != 'A' && str[i] != 'T')
//			return false;
//	if (str.find('P') == -1 || str.find('A') == -1 || str.find('T') == -1)
//		return false;
//	return true;
//}
//
//int main()
//{
//	int n;
//	int num_P, num_A, num_T;
//	cin >> n;
//	string *str, *ans;
//	str = new string[n];
//	ans = new string[n];
//	for (int i = 0;i < n;i++)
//	{
//		cin >> str[i];
//		num_P = str[i].find('P');
//		num_T = str[i].size() - str[i].find('T') - 1;
//		num_A = str[i].find('T') - num_P - 1;
//		if (num_P*num_A == num_T && jauge(str[i]))
//			ans[i] = "YES";
//		else
//			ans[i] = "NO";
//	}
//	for (int i = 0;i < n;i++)
//		cout << ans[i] << endl;
//	delete[]ans, str;
//	system("pause");
//	return 0;
//}
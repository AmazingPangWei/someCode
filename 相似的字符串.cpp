//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//
//bool used[100002];
//string s[100002];
//bool k[100002];
//int ans = 0;
//bool same(string a, string b,int index1, int index2)//≈–∂œab «∑Òœ‡À∆
//{
//	int i;
//	for (i = 1; i < a.size(); i++)
//	{
//		int t_a = a[i] - a[i - 1];
//		int t_b = b[i] - b[i - 1];
//		if (t_a != t_b && t_a != t_b + 26 && t_a + 26 != t_b)
//			break;
//	}
//	if (i == a.size())
//	{
//		used[index1] = 1;
//		used[index2] = 1;
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> s[i];
//	for (int i = 0; i < n-1; i++)
//	{
//		int flag = 1;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (s[i].size() == s[j].size()&&!used[j])
//			{
//				if (same(s[i], s[j], i, j))
//					flag = 0;
//			}
//		}
//		if (!flag)
//			ans++;
//	}
//	for (int i = 0; i < n; i++)
//		if (!used[i])
//			ans++;
//	cout << ans << endl;
////	system("pause");
//	return 0;
//}
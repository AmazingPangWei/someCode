//#include <iostream>
//#include <cstring>
//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//typedef struct Node
//{
//	string Address;
//	int data;
//	string Next;
//};
//
//Node p[100000];
//map<string, int> m;
//int main()
//{
//	vector<Node> v;
//	string a;
//	int n, k;
//	cin >> a >> n >> k;
//	if (a == "-1")
//	{
//		cout << a << endl;
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p[i].Address >> p[i].data >> p[i].Next;
//		if (p[i].Address == a)
//			v.push_back(p[i]);
//		m[p[i].Address] = i;
//	}
//	while (v.back().Next != "-1")
//	{
//		string temp = v.back().Next;
//		int i = m[temp];//下一位的下标
//		v.push_back(p[i]);
//	}
//	vector<Node> ans;
//	int t = v.size() / k;
//	for (int i = 0; i < t; i++)
//	{
//		for (int j = (i + 1)*k - 1; j >= i*k; j--)
//			ans.push_back(v[j]);
//	}
//	for (int i = t*k; i < v.size(); i++)
//	{
//		ans.push_back(v[i]);
//	}
//	for (int i = 0; i < ans.size() - 1; i++)
//		ans[i].Next = ans[i + 1].Address;
//	ans[ans.size() - 1].Next = "-1";
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i].Address << ' ' << ans[i].data << ' ' << ans[i].Next << endl;
////	system("pause");
//	return 0;
//}
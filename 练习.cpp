//#include <iostream>
//#include <stack>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<int> map[100002];
//stack <int> ans;
//bool succeed = 0;
//void dfs(int x,int y,int deep)
//{
//	if (x == y && deep != 1)
//	{
//		succeed = 1;
//		return;
//	}
//	for (int i = 0; i < map[x].size(); i++)
//	{
//		ans.push(x);
//		dfs(map[x][i], y, deep++);
//		if (succeed)
//			return;
//		ans.pop();
//	}
//}
//
//int main() 
//{
//	int n;
//	cin >> n;
//	int first;
//	for (int i = 0; i < n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		if (i == 0)
//			first = a;
//		map[a].push_back(b);
//	}
//	dfs(first, first,1);
//	vector<int> x;
//	int l = ans.size();
//	for (int i = 0; i < l; i++)
//	{
//		x.push_back(ans.top());
//		ans.pop();
//	}
//	sort(x.begin(), x.end());
//	for (int i = 0; i < x.size(); i++)
//		cout << x[i] << ' ';
//	system("pause");
//	return 0;
//}

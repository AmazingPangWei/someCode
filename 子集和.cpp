//#include <iostream>
//#include <vector>
//using namespace std;
//
//int a[50];
//bool used[50];
//int ANS = 0;
//vector<vector<int> > ans;
//bool cheack(int n)//通过检查used查看是否已经检索过
//{
//	vector<int> temp1;
//	vector<int> temp2;
//	for (int i = 0; i < n; i++)
//	{
//		if (!used[i])
//		{
//			temp1.push_back(a[i]);
//		}
//		else
//		{
//			temp2.push_back(a[i]);
//		}
//	}
//	for (int i = 0; i < ans.size(); i++)
//	{
//		int t = 0;
//		if (temp1.size() == ans[i].size())//判断是否存在该集合
//		{
//			for (int j = 0; j < temp1.size(); j++)
//			{
//				if (temp1[j] == ans[i][j])
//					t++;
//				else
//					break;
//			}
//		}
//		if (t == temp1.size()) //存在该集合
//			return false;
//	}
//	ans.push_back(temp1);
//	ans.push_back(temp2);
//	return true;
//}
//
//void dfs(int sum, int n, int other)
//{
//	if (sum > other)
//		return;
//	else if (sum == other)
//	{
//		if (cheack(n))
//			ANS++;
//		return;
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (!used[i])
//			{
//				used[i] = 1;
//				dfs(sum + a[i], n, other - a[i]);
//				used[i] = 0;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n,sum=0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = i + 1;
//		sum += a[i];
//		used[i] = 0;
//	}
//	dfs(0, n, sum);
//	cout << ANS << endl;
//	system("pause");
//	return 0;
//}
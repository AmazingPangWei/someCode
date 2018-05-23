//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int a[100002];
//struct set
//{
//	int x;
//	int y;
//	int MIN;
//	int MAX;
//	int id;
//};
//vector<set> post;
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= m; i++)
//	{
//		int t;
//		cin >> t;
//		a[t] += 1;
//	}
//	for (int i = 0; i < k; i++)
//	{
//		post.clear();
//		for (int i = 1; i <= n; i++)//判断最优的位置
//		{
//			if (a[i] == 0)
//			{
//				int x=0, y=0, MIN, MAX;
//				int temp = 1;
//				int flag_i = 0, flag_y = 0;
//				while (1)
//				{
//					if (i - temp >= 1 && a[i - temp] == 0&&!flag_i)
//					{
//						x++;
//					}
//					else
//						flag_i = 1;
//					if (i + temp <= n && a[i + temp] == 0 && !flag_y)
//					{
//						y++;
//					}
//					else
//						flag_y = 1;
//					temp++;
//					if (flag_y&&flag_i)
//						break;
//				}
//				MIN = min(x, y);
//				MAX = max(x, y);
//				set t;
//				t.x = x;
//				t.y = y;
//				t.MIN = MIN;
//				t.MAX = MAX;
//				t.id = i;
//				post.push_back(t);
//			}
//		}
//		int MIN=0, MAX=0;
//		int num_MIN=0, num_MAX=0, min_post;
//		int min_id = 10000000, max_id=10000000;
//		for (int i = 0; i < post.size(); i++)
//		{
//			if (MIN < post[i].MIN)
//				MIN = post[i].MIN;
//		}
//		vector<int>ans;
//		for (int i = 0; i < post.size(); i++)
//		{
//			if (MIN == post[i].MIN)
//			{
//				ans.push_back(i);
//			}
//		}
//		vector<int> ANS;
//		if (ans.size() != 1)
//		{
//			int MAX = 0;
//			for (int i = 0; i < ans.size(); i++)
//			{
//				if (MAX < post[ans[i]].MAX)
//					MAX = post[ans[i]].MAX;
//			}
//			for (int i = 0; i < ans.size(); i++)
//			{
//				if (MAX == post[ans[i]].MAX)
//					ANS.push_back(ans[i]);
//			}
//		}
//		else
//		{
//			cout << post[ans[0]].id << endl;
//			a[post[ans[0]].id] = 1;
//			continue;
//		}
//		if (ANS.size() != 1)
//		{
//			int MIN = 10000000;
//			for (int i = 0; i < ANS.size(); i++)
//			{
//				if (MIN > post[ANS[i]].id)
//					MIN = post[ANS[i]].id;
//			}
//			a[MIN] = 1;
//			cout << MIN << endl;
//			continue;
//		}
//		else
//		{
//			a[post[ANS[0]].id] = 1;
//			cout << post[ANS[0]].id << endl;
//			continue;
//		}
//		
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//vector<int> money;
//vector<vector<int> > ans;
//vector <int> temp;
//int a[1100],n;
//int order[1100];//�����ֵ�˳��
//bool used[1100];//��ʾ�Ƿ�ʹ��
//
//bool comp(vector<int> a, vector<int> b)//���������Ⱥ����������
//{
//	for (int i = 0; i < min(a.size(), b.size()); i++)
//	{
//		if (order[a[i]] < order[b[i]])
//			return true;
//		else if (order[a[i]] > order[b[i]])
//			return false;
//	}
//	if (a.size() < b.size())
//		return true;
//	else
//		return false;
//}
//
//void fun(int n)//�����
//{
//	for (int i = 0; i < n; i++)//����Ŀǰ�Ĵ�
//	{
//		if (used[i] == true)
//		{
//			temp.push_back(money[i]);
//		}
//	}
//	for (int i = 0; i < ans.size(); i++)//�ж��Ƿ����������
//	{
//		int x=0;
//		if (ans[i].size() == temp.size())
//		{
//			for (int j = 0; j < temp.size(); j++)
//			{
//				if (ans[i][j] == temp[j])
//				{
//					x++;
//				}
//				else
//					break;
//			}
//		}
//		if (x == temp.size())//�����Բ����
//		{
//			return;
//		}
//	}
//	ans.push_back(temp);
//	return;
//}
//
//void dfs(int sum, int n, int aim)
//{
//	if (sum > aim)
//		return;
//	else if (sum == aim)
//	{
//		temp.clear();
//		fun(n);
//		return;
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (!used[i])
//			{
//				used[i] = 1;
//				dfs(sum + money[i], n, aim);
//				used[i] = 0;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int sum = 0;
//	int w;
//	memset(used, 0, sizeof(used));
//	memset(order, 0, sizeof(order));
//	cin >> w >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		if (!order[a[i]])
//			order[a[i]] = i+1;
//		sum += a[i];
//	}
//	int change = sum - w;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] <= change)
//			money.push_back(a[i]);
//	}
//	sort(money.begin(), money.end());
//	dfs(0, money.size(), change);
//	//�������˳��
//	sort(ans.begin(), ans.end(), comp);
//	for (int i = 0; i < ans.size(); i++)
//	{
//		for (int j = 0; j < ans[i].size(); j++)
//		{
//			if (j == ans[i].size() - 1)
//				cout << ans[i][j] << endl;
//			else
//				cout << ans[i][j] << ' ';
//		}
//	}
////	system("pause");
//	return 0;
//}
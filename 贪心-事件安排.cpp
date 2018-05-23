//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//struct thing
//{
//	int day;
//	int reward;
//};
//
//struct judge
//{
//	int position;
//	int max;
//};
//
//bool comp(thing a, thing b)
//{
//	if (a.day == b.day)
//		return a.reward > b.reward;
//	return a.day < b.day;
//}
//
//int main()
//{
//	int n;
//	thing a[10000];
//	cin >> n;
//	for (int i = 0;i < n;i++)
//		cin >> a[i].day >> a[i].reward;
//	sort(a, a + n, comp);
//	int max_day, sum = 0;
//	judge temp = { 0,0 };//判断最大值
//	max_day = a[n - 1].day;
//	queue<int> Q[100];//i表示天数,Q[i]排价值
//	for (int i = 0;i < n;i++)
//		Q[a[i].day].push(a[i].reward);
//	for (int i = max_day;i >= 1;i--)
//	{
//		for (int j = i;j <= max_day;j++)
//			if (!Q[j].empty() && Q[j].front() > temp.max)
//			{
//				temp.max = Q[j].front();
//				temp.position = j;
//			}
//		sum += temp.max;
//		Q[temp.position].pop();
//		temp.max = 0;
//		temp.position = 0;
//	}
//	cout << sum << endl;
////	system("pause");
//	return 0;
//}

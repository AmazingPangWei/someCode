//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//bool comp(int a, int b)
//{
//	return a > b;
//}
//
//int main()
//{
//	int vec[10000];
//	int ans[10000];
//	int num[10000];
//	int n, t;
//	memset(num, 0, sizeof(num));
//	memset(ans, 0, sizeof(ans));
//	memset(vec, 0, sizeof(vec));
//	cin >> n;
//	for (int i = 0;i < n;i++)
//	{
//		cin >> t;
//		vec[i] = t;
//		num[t]++;
//	}
//	for (int i = 0;i < n;i++)
//	{
//		while (vec[i] != 1)
//		{
//			if (vec[i] % 2 == 0)
//			{
//				vec[i] /= 2;
//				if (num[vec[i]] != 0)
//					num[vec[i]]--;
//			}
//			else
//			{
//				vec[i] = ((vec[i] * 3) + 1) / 2;
//				if (num[vec[i]] != 0)
//					num[vec[i]]--;
//			}
//		}
//	}
//	int temp = 0;
//	for(int i=0;i<=100;i++)
//		if (num[i] != 0)
//		{
//			ans[temp] = i;
//			temp++;
//		}
//	sort(ans, ans + temp, comp);
//	for (int i = 0;i < temp;i++)
//	{
//		cout << ans[i];
//		if (i == temp - 1)
//			cout << endl;
//		else
//			cout << ' ';
//	}
//	system("pause");
//	return 0;
//}
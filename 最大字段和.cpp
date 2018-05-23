//#include <iostream>
//using namespace std;
//
//int a[10000];
//struct interval
//{
//	int start;
//	int end;
//	int sum;
//};
//
//interval t[10000];
//int num = 0;
//void solve(int n)
//{
//	int sum = 0;
//	t[0].start = 0;
//	t[0].sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (sum < 0)
//		{
//			sum = 0;
//			num++;
//			t[num].start = i;
//			t[num].sum = 0;
//		}
//		sum += a[i];
//		if (sum > t[num].sum)
//		{
//			t[num].sum = sum;
//			t[num].end = i;
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	solve(n);
//	int max_sum = 0;
//	int index;
//	for (int i = 0; i <= num; i++)
//		if (t[i].sum > max_sum)
//		{
//			max_sum = t[i].sum;
//			index = i;
//		}
//	for (int i = t[index].start; i <= t[index].end; i++)
//		cout << a[i] << ' ';
//
////	system("pause");
//	return 0;
//}
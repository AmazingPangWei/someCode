//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a[101];
//int is[101], ms[101];//分别是插入和归并排序
//int aim[101];//目标
//int n;
//int flag = 0;
//bool cheack(int x)
//{
//	int i;
//	if (x == 1)//插入排序
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (aim[i] != is[i])
//				return false;
//		}
//		if (i == n)
//			return true;
//	}
//	if (x == 2)//归并排序
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (aim[i] != ms[i])
//				return false;
//		}
//		if (i == n)
//			return true;
//	}
//}
//bool InsertSort()
//{
//	int t = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (aim[i] <= aim[i + 1])
//			t++;
//		else
//			break;
//	}
//	sort(is, is + t + 1);
//	if (cheack(1))
//	{
//		cout << "Insertion Sort" << endl;
//		if (t + 1 < n)
//			sort(is, is + t + 2);
//		else
//			sort(is, is + n);
//		flag = 1;
//	}
//	if (flag)
//	{
//		for (int i = 0; i < n - 1; i++)
//			cout << is[i] << ' ';
//		cout << is[n - 1] << endl;
//		return true;
//	}
//	return false;
//	//for (int i = 1; i < n; i++)
//	//{
//	//	if (is[i] < is[i - 1])
//	//	{
//	//		for (int j = i; j >= 1; j--)
//	//		{
//	//			if (is[j] < is[j - 1])
//	//			{
//	//				swap(is[j], is[j - 1]);
//	//			}
//	//			else
//	//				break;
//	//		}
//	//	}
//	//	if (flag)
//	//	{
//	//		for (int i = 0; i < n - 1; i++)
//	//			cout << is[i] << ' ';
//	//		cout << is[n - 1] << endl;
//	//		return true;
//	//	}
//	//	if (cheack(1) && !flag)
//	//	{
//	//		cout << "Insertion Sort" << endl;
//	//		flag = 1;
//	//	}
//	//}
//	//return false;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		is[i] = a[i];
//		ms[i] = a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> aim[i];
//	}
//	if (!InsertSort())//判断归并
//	{
//		int step = 2;
//		while (1)
//		{
//			for (int i = 0; i < n / step; i++)
//				sort(ms + i * step, ms + (i + 1) * step);
//			sort(ms + n / step * step, ms + n);
//			step *= 2;
//			if (flag)
//			{
//				for (int i = 0; i < n - 1; i++)
//					cout << ms[i] << ' ';
//				cout << ms[n - 1] << endl;
//				break;
//			}
//			if (cheack(2))
//			{
//				cout << "Merge Sort" << endl;
//				flag = 1;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//
////10
////3 1 2 8 7 5 9 4 6 0
////1 2 3 4 5 7 8 9 0 6
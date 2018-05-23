//#include <iostream>
//#include <cstring>
//using namespace std;
//long long a[100000];
//bool used[100000];
//const long long N = 1010;
//long long a[N];
//long long c[N];
//long long cnt = 0;
//
//void MergeSort(long long l, long long r)
//{
//	long long mid, i, j, tmp;
//	if (r > l + 1)
//	{
//		mid = (l + r) / 2;
//		MergeSort(l, mid);
//		MergeSort(mid, r);
//		tmp = l;
//		for (i = l, j = mid; i < mid && j < r;)
//		{
//			if (a[i] > a[j])
//			{
//				c[tmp++] = a[j++];
//				cnt += mid - i;
//			}
//			else
//			{
//				c[tmp++] = a[i++];
//			}
//		}
//		if (j < r)
//		{
//			for (; j < r; ++j)
//			{
//				c[tmp++] = a[j];
//			}
//		}
//		else
//		{
//			for (; i < mid; ++i)
//			{
//				c[tmp++] = a[i];
//			}
//		}
//		for (i = l; i < r; ++i)
//		{
//			a[i] = c[i];
//		}
//	}
//	return;
//}
//int main()
//{
//	long long n;
//	cin >> n;
//	long long count = 0;
//	memset(used, 0, sizeof(used));
//	for (long long i = 0; i < n; i++)
//		cin >> a[i];
//	for (long long i = 0; i < n - 1; i++)
//	{
//		if(!used[a[i]])
//			for (long long j = i + 1; j < n; j++)
//			{
//				if (a[i] > a[j])
//					count++;
//			}
//		used[a[i]] = 1;
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}
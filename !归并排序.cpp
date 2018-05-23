//#include <iostream>
//using namespace std;
//
//
//void merge(int *a,int *temp,int first,int mid,int last)
//{
//	int m = first;
//	int n = mid+1;
//	int k = 0;
//	while(m <= mid && n <= last)
//		if (a[m] > a[n])
//		{
//			temp[k] = a[n];
//			n++;
//			k++;
//		}
//		else
//		{
//			temp[k] = a[m];
//			m++;
//			k++;
//		}
//	while (m<=mid)
//	{
//		temp[k] = a[m];
//		m++;
//		k++;
//	}
//	while (n<=last)
//	{
//		temp[k] = a[n];
//		n++;
//		k++;
//	}
//	for (int i = 0; i < k; i++)
//		a[i+first] = temp[i];
//}
//
//
//void mergesort(int *a,int first,int last,int *temp)
//{
//	if (first < last)
//	{
//		int half = (first + last) / 2;
//		mergesort(a, first, half, temp);
//		mergesort(a, half + 1, last, temp);
//		merge(a, temp, first, half, last);
//	}
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a[1000], b[1000];
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	mergesort(a, 0, n-1,b);
//	for (int i = 0; i < n; i++)
//		cout << a[i] << ' ';
//
//	system("pause");
//	return 0;
//}
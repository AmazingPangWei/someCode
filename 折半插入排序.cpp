//#include <iostream>
//using namespace std;
//
//void BinSort(int *p, int len)
//{
//	int i;
//	for (i = 1;i < len;i++)
//	{
//		int low = 0, high = i - 1;
//		int t = p[i];
//		while (low <= high)
//		{
//			int mid = (high + low) / 2;
//			if (t < p[mid])
//				high = mid - 1;
//			else if (t == p[mid])
//			{
//				low = mid + 1;
//				break;
//			}
//			else
//				low = mid + 1;
//		}
//		for (int j = i-1;j >= low;j--)
//			p[j + 1] = p[j];
//		p[low] = t;
//	}
//}
//
//int main()
//{
//	int a[10] = { 93,86,2,63,723,456,218,24,364,2 };
//	BinSort(a, 10);
//	for (int i = 0;i < 10;i++)
//		cout << a[i] << ' ';
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void BubbleSort(int *p, int len)
//{
//	int i, j;
//	int t;
//	for(i=0;i<len-1;i++)//len-1趟
//		for(j=1;j<len-i;j++)//依次比较,大数沉底
//			if (p[j-1] > p[j])
//			{
//				t = p[j - 1];
//				p[j - 1] = p[j];
//				p[j] = t;
//			}
//}
//
//int main()
//{
//	int a[10] = { 93,86,2,63,723,456,218,24,364,2 };
//	BubbleSort(a, 10);
//	for (int i = 0;i < 10;i++)
//		cout << a[i] << ' ';
//	system("pause");
//	return 0;
//}
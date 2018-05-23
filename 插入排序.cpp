//#include <iostream>
//using namespace std;
//
//void Inssort(int *p,int n)
//{
//	int i;
//	int t;
//	int j;
//	for (i = 1;i < n;i++)
//	{
//		t = p[i];
//		j = i - 1;
//		while (t < p[j]&&j>=0)
//		{
//			p[j + 1] = p[j];
//			j--;
//		}
//		p[j + 1] = t;
//	}
//}
//
//int main()
//{
//	int a[10] = { 93,86,2,63,723,456,218,24,364,12 };
//	Inssort(a,10);
//	for (int i = 0;i < 10;i++)
//		cout << a[i] << ' ';
//	system("pause");
//	return 0;
//}
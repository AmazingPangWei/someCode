#include <iostream>
using namespace std;
int QuickPass(int *, int, int);
int pos;
bool flag = 1;
void QuickSort(int *p, int low,int high)
{
	if (low < high)
	{
		pos = QuickPass(p, low, high);
		QuickPass(p, pos + 1, high);
		QuickPass(p, low, pos - 1);
	}
}

int QuickPass(int *p, int low, int high)//对p在low和high范围内一次快速排序
{
	int t = p[low];
	while (low < high)
	{
		while (low<high&&t<p[high])
			high--;
		if (low < high)
		{
			p[low] = p[high];
			low++;
		}
		while (low<high&&t>p[low])
			low++;
		if (low < high)
		{
			p[high] = p[low];
			high--;
		}
	}
	p[low] = t;
		for (int i = 0; i < 10; i++)
			cout << p[i] << ' ';
		cout << endl;
	flag = 0;
	return low;
}
int main()
{
	int a[10] = { 93,86,2,63,723,456,218,24,364,2 };
	QuickSort(a, 0,9);
	/*for (int i = 0;i < 10;i++)
		cout << a[i] << ' ';*/
	system("pause");
	return 0;
}
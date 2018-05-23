//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n, i;
//	int *p;
//	int sum = 0;
//	cin >> n;
//	p = new int[n];
//	for (i = 0;i < n;i++)
//		cin >> p[i];
//	for (i = 0;i < n;i++)
//	{
//		while (p[i])
//		{
//			sum = sum + p[i] % 10;
//			p[i] /= 10;
//		}
//		p[i] = sum;
//		sum = 0;
//	}
//	sort(p, p + n);
//	for (i = 0;i < n;i++)
//		if (p[i] != p[i + 1])
//			sum++;
//	cout << sum << endl;
//	unique(p, p + n);
//	for (i = 0;i < sum;i++)
//	{
//		cout << p[i];
//		if (sum - 1 != i)
//			cout << ' ';
//		else
//			cout << endl;
//	}
//	delete[]p;
//	system("pause");
//	return 0;
//}
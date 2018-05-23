//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int sum[100000];
//int come[100000];//是否来了
//int main()
//{
//	memset(come, -1, sizeof(come));
//	memset(sum, 0, sizeof(sum));
//	int n, i, j;
//	int a, b;
//	cin >> n;
//	for (i = 0;i < n;i++)
//	{
//		cin >> a >> b;
//		sum[a] = b;//存对象的编号
//		sum[b] = a;
//	}
//	int m, x, t = 0;
//	int *dog, *p;
//	cin >> m;
//	dog = new int[m];//dog存单身狗
//	p = new int[m];//p存数据
//	for (i = 0;i < m;i++)
//	{
//		cin >> x;
//		p[i] = x;
//		if (sum[x] == 0)//没对象的
//		{
//			dog[t] = x;
//			t++;
//		}
//		else
//			come[x] = 1;//X来了
//	}
//	for (i = 0;i < m;i++)
//		if (sum[p[i]] != 0)//sum[p[i]]为p[i]的对象，没对象的为0
//		{
//			if (come[sum[p[i]]] == 1)
//				;
//			else
//			{
//				dog[t] = p[i];
//				t++;
//			}
//		}
//	sort(dog, dog + t);
//	cout << t  << endl;
//	for (i = 0;i < t;i++)
//	{
//		cout.width(5);
//		cout.fill('0');
//		cout << dog[i];
//		if (t - 1 == i)
//			cout << endl;
//		else
//			cout << ' ';
//	}
//	delete[]p;
//	delete[]dog;
//	system("pause");
//	return 0;
//}
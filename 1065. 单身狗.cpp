//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int sum[100000];
//int come[100000];//�Ƿ�����
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
//		sum[a] = b;//�����ı��
//		sum[b] = a;
//	}
//	int m, x, t = 0;
//	int *dog, *p;
//	cin >> m;
//	dog = new int[m];//dog�浥��
//	p = new int[m];//p������
//	for (i = 0;i < m;i++)
//	{
//		cin >> x;
//		p[i] = x;
//		if (sum[x] == 0)//û�����
//		{
//			dog[t] = x;
//			t++;
//		}
//		else
//			come[x] = 1;//X����
//	}
//	for (i = 0;i < m;i++)
//		if (sum[p[i]] != 0)//sum[p[i]]Ϊp[i]�Ķ���û�����Ϊ0
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
//#include <iostream>
//using namespace std;
//
//
//void warshall(int c[][100], int N)
//{
//	//	initc(r);/*��cװ��r*/
//	for (int i = 0; i<N; i++)
//		for (int j = 0; j<N; j++)
//			if (c[j][i])
//				for (int k = 0; k<N; k++)
//				{
//					c[j][k] = c[j][k] + c[i][k];
//					if (c[j][k])
//						c[j][k] = 1;
//				}
//
//}
//
//int main()
//{
//	cout << "*****��ӭʹ�ñ�ϵͳ*****" << endl;
//	cout << "��������Ҫ�жϵ��ڽӾ���Ĵ�СN" << endl;
//
//	int n;
//	cin >> n;
//
//	while (n <= 0)
//	{
//		cout << "N�����������������!" << endl;
//		cin >> n;
//	}
//
//	cout << "������Ҫ�жϵ��ڽӾ���" << endl;
//
//	int c[100][100], r[100][100];
//
//	for (int i = 0; i<n; i++)
//		for (int j = 0; j<n; j++)
//		{
//			cin >> c[i][j];
//			r[i][j] = c[i][j];
//		}
//	warshall(r, n);
//	//�ж�ǿ��ͨͼ 
//	int i, j;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (r[i][j] != 1 && i != j)
//				break;
//		}
//		if (j != n)
//			break;
//	}
//	if (i == n)
//	{
//		cout << "��ͼ��ǿ��ͨͼ!" << endl << endl;
//		system("pause");
//		return 0;
//	}
//	//�жϵ�����ͨͼ 
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (r[i][j] != 1 && r[i][j] + r[j][i] != 1 && i != j)
//				break;
//		}
//		if (j != n)
//			break;
//	}
//	if (i == n)
//	{
//		cout << "��ͼ�ǵ�����ͨͼ!" << endl << endl;
//		system("pause");
//		return 0;
//	}
//	//�ж���ͨͼ
//	//��c����ɵ�����ͨͼ 
//	for (i = 0; i<n; i++)
//		for (j = 0; j<n; j++)
//		{
//			if (c[i][j] == 1)
//			{
//				r[i][j] = 1;
//				r[j][i] = 1;
//			}
//		}
//	warshall(r, n);
//
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (r[i][j] != 1 && i != j)
//				break;
//		}
//		if (j != n)
//			break;
//	}
//	if (i == n)
//	{
//		cout << "��ͼ������ͨͼ!" << endl << endl;
//		system("pause");
//		return 0;
//	}
//	cout << "��ͼ����ͨ!" << endl << endl;
//	system("pause");
//	return 0;
//}

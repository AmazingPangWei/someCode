//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	int c[100][100];
//	bool t[100][100]; //����𰸵�����
//	cout << "***��ӭʹ�ù�ϵ�հ�����ϵͳ��***" << endl;
//
//	char judge = 'Y';
//	while (judge == 'Y')
//	{
//		int n;
//		memset(c, 0, sizeof(c));
//		memset(t, 0, sizeof(t));
//		cout << "���������n�Ĵ�С:" << endl;
//		cin >> n;
//		cout << "������" << n << '*' << n << "��С�ľ���" << endl;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				cin >> c[i][j];
//				t[i][j] = c[i][j];
//			}
//
//		bool temp = false;		//�ж�ԭ�������Ƿ�Ϸ�
//		for (int i = 0; i < n; i++)
//		{
//			int j;
//			for (j = 0; j < n; j++)
//			{
//				if (c[i][j] != 1 && c[i][j] != 0)
//				{
//					cout << "ԭ���󲻺Ϸ������Զ��˳�����" << endl;
//					temp = true;
//					break;
//				}
//			}
//			if (j != n)
//				break;
//		}
//		if (temp)
//			break;
//
//		//�Է��հ�
//		cout << "�Է��հ�Ϊ:" << endl;
//		for (int i = 0; i < n; i++)
//			t[i][i] = true;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				cout << t[i][j] << ' ';
//				if (j == n - 1)
//					cout << endl;
//			}
//		//�ԳƱհ�
//		memset(t, 0, sizeof(t));
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				if (c[i][j])
//				{
//					t[i][j] = c[i][j];
//					t[j][i] = true;
//				}
//			}
//		cout << "�ԳƱհ�Ϊ:" << endl;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				cout << t[i][j] << ' ';
//				if (j == n - 1)
//					cout << endl;
//			}
//
//		//�ԳƱհ�
//		memset(t, 0, sizeof(t));
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				if (c[i][j])
//				{
//					t[i][j] = true;
//				} 
//			}
//		cout << "Warshall�㷨���㴫�ݱհ�Ϊ:" << endl;
//		for (int i = 0; i < n; i++)    //��ʾ��
//			for (int j = 0; j < n; j++)//��ʾ��
//				if (t[j][i])    //��ʾָ��i�Ķ���
//					for (int k = 0; k < n; k++) //��������iָ��Ķ���
//						if (t[i][k])
//							t[j][k] = 1;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				cout << t[i][j] << ' ';
//				if (j == n - 1)
//					cout << endl;
//			}
//
//		memset(t, 0, sizeof(t));
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				if (c[i][j])
//				{
//					t[i][j] = true;
//				}
//			}
//
//		cout << "R+�㷨���㴫�ݱհ�Ϊ:" << endl;
//		for (int i = 1; i < n; i++) //�õ�R+
//		{
//			for(int j=0;j<n;j++)    //����R^(i+1)
//				for (int k = 0; k < n; k++)
//				{
//					for (int m = 0; m < n; m++)
//					{
//						c[j][k] += c[j][m] * c[m][k];
//					}
//					if (c[j][k])
//						t[j][k] = true;
//				}
//		}
//
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				cout << t[i][j] << ' ';
//				if (j == n - 1)
//					cout << endl;
//			}
//
//
//		cout << endl;
//		cout << "�����Ѿ��ѽ������ظ�Y����ʹ�ó��򣬻ظ�N����ʹ��" << endl;
//		cin >> judge;
//		while (judge != 'N' && judge != 'Y')
//		{
//			cout << "��������������룡" << endl;
//			cin >> judge;
//		}
//	}
//
//	cout << "***��лʹ�ù�ϵ�հ�����ϵͳ��***" << endl;
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string.h>
//#define MAX 100
//using namespace std;
//
//int main()
//{
//	int a[MAX][MAX];
//	int s[MAX];//�ж��Ƿ����
//	memset(a, 0, sizeof(a));
//	memset(s, 0, sizeof(s));
//	int n, i, j;
//	cin >> n;
//	for (i = 0;i < n;i++)
//		for (j = 0;j < n;j++)
//			cin >> a[i][j];
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n;j++)
//			if (a[j][i] != 0)
//				break;
//		if (j == n&&s[i] == 0)//i��Ϊȫ��Ϊ0������£���i��δ������
//		{
//			s[i] = 1;//��־��i���Ѿ�������
//			for (int k = 0;k < n;k++)
//				a[i][k] = 0;//i����0
//			i = 0;//���´�i�м���
//		}
//	}
//	for (i = 0;i < n;i++)
//		if (s[i] != 1)
//			break;
//	if (i == n)
//		cout << 0 << endl;
//	else
//		cout << 1 << endl;
//	//	system("pause");
//	return 0;
//}
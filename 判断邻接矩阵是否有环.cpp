//#include <iostream>
//#include <string.h>
//#define MAX 100
//using namespace std;
//
//int main()
//{
//	int a[MAX][MAX];
//	int s[MAX];//判断是否被输出
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
//		if (j == n&&s[i] == 0)//i列为全部为0的情况下，且i列未被检索
//		{
//			s[i] = 1;//标志第i列已经被检索
//			for (int k = 0;k < n;k++)
//				a[i][k] = 0;//i行置0
//			i = 0;//重新从i列检索
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
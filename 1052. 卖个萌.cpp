//#include <iostream>
//using namespace std;
//
//struct Char
//{
//	char a[3];
//};
//
//int main()
//{
//	char a[3][100];
//	char b[3][100];
//	int x[5];
//	int i, n, j, k;
//	for (i = 0;i < 3;i++)
//	{
//		b[i][0] = ' ';
//	}
//	for (i = 0;i < 3;i++)
//		gets_s(a[i]);
//	int t = 1;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < strlen(a[i]);j++)
//			if (a[i][j] == '[')
//			{
//				for (k = j + 1;a[i][k] != ']';k++)
//				{
//					b[i][t] = a[i][k];
//					t++;
//				}
//			}
//		b[i][t] = '\0';
//		t = 1;
//	}
//	for (i = 0;i < 3;i++)
//		cout << b[i] << endl;
//	//cin >> n;
//	//while (n) {
//	//	for (i = 0;i < 5;i++)
//	//		cin >> x[i];
//	//	for (i = 0;i < 5;i++)
//	//	{
//	//		if (i == 0 && x[i] <= strlen(b[0]))
//	//			cout << b[0][x[i]] << '(';
//	//		else if (i == 1 && x[i] <= strlen(b[1]))
//	//			cout << b[1][x[i]];
//	//		else if (i == 2 && x[i] <= strlen(b[2]))
//	//			cout << b[2][x[i]];
//	//		else if (i == 3 && x[i] <= strlen(b[1]))
//	//			cout << b[1][x[i]] << ')';
//	//		else if (i == 4 && x[i] <= strlen(b[0]))
//	//			cout << b[0][x[i]] << endl;
//	//		else
//	//			cout << "Are you kidding me? @\/@" << endl;
//	//	}
//	//		n--;
//	//}
//	system("pause");
//	return 0;
//}
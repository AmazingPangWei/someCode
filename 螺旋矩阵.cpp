//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int a[500][500];
//int main()
//{
//	int n;
//	cin >> n;
//	int x, y;//对应i,j
//	if (n % 2 == 1)
//	{
//		x = (n + 1) / 2;
//		y = x;
//	}
//	else
//	{
//		x = n / 2;
//		y = x + 1;
//	}
//	int time = 0;
//	int sum = 0;//拐弯的次数
//	int di = 1;//1左，2下，3右，4上
//	int L = 1;//要走的长度
//	int t = 0;//已走的长度
//	for (int i = 1; i <= n*n; i++)
//	{
//		a[x][y] = i;
//		if (di == 1)
//		{
//			y--;
//			t++;
//			if (L == t)
//			{
//				di = 2;
//				sum++;
//				t = 0;
//				time++;
//			}
//		}
//		else if (di == 2)
//		{
//			x++;
//			t++;
//			if (L == t)
//			{
//				di = 3;
//				sum++;
//				t = 0;
//				time++;
//			}
//		}
//		else if (di == 3)
//		{
//			y++;
//			t++;
//			if (L == t)
//			{
//				di = 4;
//				sum++;
//				t = 0;
//				time++;
//			}
//		}
//		else if(di==4)
//		{
//			x--;
//			t++;
//			if (L == t)
//			{
//				di = 1;
//				sum++;
//				t = 0;
//				time++;
//			}
//		}
//		//增加长度
//		if ((sum + 1) == (2 * n - 1))
//		{
//			t = 0;
//			time = 0;
//		}
//		else if (time == 2)
//		{
//			L++;
//			time = 0;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j == 1)
//				printf("%d", a[i][j]);
//			else
//				printf("%5d", a[i][j]);
//		}
//		cout << endl;
//	}
////	system("pause");
//	return 0;
//}
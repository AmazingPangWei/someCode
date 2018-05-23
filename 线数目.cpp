//#include <iostream>
//using namespace std;
//
//
//int a[1000][1000];
//int ans[1000];
//int fun[8][2] = { {1,1},{1,-1},{1,0}, {-1,1},{-1,0},{-1,-1},{0,1},{0,-1} };
//int tot = 0;
//void judge(int i,int j)
//{
//	for (int k = 0; k < 8; k++)
//	{
//		if (a[i + fun[k][0]][j + fun[k][1]] && i + fun[k][0] >= 0 && j + fun[k][1] >= 0) //´æÔÚºÚµã
//		{
//			a[i][j] = 0;
//			judge(i + fun[k][0], j + fun[k][1]);
//			ans[tot]++;
//		}
//	}
//	a[i][j] = 0;
//}
//int main()
//{
//	int w, h;
//	cin >> w >> h;
//	for(int i=0;i<h;i++)
//		for (int j = 0; j < w; j++)
//		{
//			cin >> a[i][j];
//		}
//	for(int i=0;i<h;i++)
//		for (int j = 0; j < w; j++)
//		{
//			if (a[i][j])
//			{
//				judge(i, j);
//				ans[tot]++;
//				tot++;
//			}
//		}
//	cout << tot << endl;
//	for (int i = 0; i < tot; i++)
//		cout << ans[i] << endl;
////	system("pause");
//	return 0;
//}
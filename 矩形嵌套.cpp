////建有向图，寻找最大路径
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#define max(a,b) a>b?a:b
//using namespace std;
//
//struct rectangle
//{
//	int lenth;
//	int width;
//};
//
//rectangle r[1002];
//int w[1000][1000];
//int MAX[1000];// 每行的最大路径
//int N;        //一共N个矩形
//
//int DFS(int n)
//{
//	if (MAX[n] != 0)
//		return MAX[n];
//	for(int i=0;i<N;i++)	
//		if (w[n][i] != 0)
//		{
//			MAX[n] = max(MAX[n], DFS(i) + 1);
//		}
//	return MAX[n];
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		cin >> N;
//		memset(w, 0, sizeof(w));
//		memset(MAX, 0, sizeof(MAX));
//		for (int i = 0; i < N; i++)
//		{
//			r[i].lenth = 0;
//			r[i].width = 0;
//		}
//		for (int i = 0; i < N; i++)
//		{
//			cin >> r[i].width >> r[i].lenth;
//			for (int j = 0; j < i; j++)
//				if ((r[i].lenth > r[j].lenth && r[i].width > r[j].width) || (r[i].lenth > r[j].width && r[i].width > r[j].lenth))//建图
//					w[i][j] = 1;
//		}
//	//	int max = 0;//DFS找到最大的路径
//		int ans = 0;
//		for (int i = 0; i < N; i++)
//		{
//			ans=max(ans,DFS(i));
//		}
//		cout << ans + 1 << endl; //能嵌套ans个，所以能ans+1个能排出一行
//	}
////	system("pause");
//	return 0;
//}
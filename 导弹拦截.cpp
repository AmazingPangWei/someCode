//#include <iostream>
//#include <algorithm>
//#define MAX(a,b) a>b?a:b
//using namespace std;
//
//int num[10005];//存每个位置可以拦截的最大的数量
//int slove(int *a,int n)
//{
//	int max_num = 0;
//	//num[0] = 1;
//	for (int i = 0; i < n; i++)
//		num[i] = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for(int j=0;j<i;j++)
//			if (a[i] <= a[j])
//			{
//				if (num[i] <= num[j])
//					num[i] = num[j] + 1;
//			}
//			
//		if (num[i] > max_num)
//			max_num = num[i];
//	}
//	return max_num;
//}
//
//int main()
//{
//	int a[10005];
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	cout << slove(a, n) << endl;
//
////	system("pause");
//	return 0;
//}
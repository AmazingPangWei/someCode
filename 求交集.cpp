//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//typedef long long LL;
//LL a[1000000];
//LL b[1000000];
//int n, m;
//int main()
//{
//	while (scanf("%d%d",&n,&m)!=EOF)
//	{
//		memset(a, 0, sizeof(a));
//		memset(b, 0, sizeof(b));
//		for (int i = 0; i < n; i++)
//			scanf("%lld", &a[i]);
//		for (int i = 0; i < m; i++)
//			scanf("%lld", &b[i]);
//		vector<int> res; //保存结果
//		int i = 0, j = 0;
//		while (i < n &&j < m) //查找  
//		{
//			if (a[i]>b[j])
//				j++;
//			else if (a[i] < b[j])
//				i++;
//			else
//			{
//				res.push_back(a[i]);
//				i++; 
//				j++;
//			}
//		}
//		if (res.empty())
//			printf("empty\n");
//		else
//		{
//			for (int i = 0; i < res.size() - 1; i++)
//				cout << res[i] << ' ';
//			cout << res[res.size() - 1] << endl;
//		}
//	}
////	system("pause");
//	return 0;
//}
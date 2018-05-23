//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n, m, s;//转发量，间隔，开始
//	string *p, *e;
//	cin >> n >> m >> s;
//	p = new string[n];
//	e = new string[n];
//	int i, j, k, t = 0;
//	int sum = s - 1;
//	for (i = 0;i < n;i++)
//		cin >> p[i];
//	if (s > n)
//	{
//		cout << "Keep going..." << endl;
//		system("pause");
//		return 0;
//	}
//	for (i = 0;i < n;i++)
//	{
//		if (i == sum)
//		{
//			for (j = i;j < n;j++)
//			{
//				for (k = 0;k < t;k++)
//				{
//					if (p[j] == e[k])
//						break;
//				}
//				if (k == t)
//					break;
//				else
//					sum++;
//			}
//			e[t] = p[sum];
//			sum = sum + m;
//			t++;
//		}	
//	}
//	for (i = 0;i < t;i++)
//		cout << e[i] << endl;
//	delete []p, e;
//	system("pause");
//	return 0;
//}
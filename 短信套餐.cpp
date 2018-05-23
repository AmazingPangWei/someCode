//#include <iostream>
//#include <cstdio>
//#define min(a,b) a>b?b:a
//using namespace std;
//
//int main()
//{
//	double n, m;
//	double a;
//	while (cin >> n >> m >> a)
//	{
//		double MIN = 0x3f3f3f3f;
//		while (n--)
//		{
//			double p, f;
//			cin >> p >> f;
//			double sum;
//			if (m >= f)
//			{
//				sum = p + (m - f)*a;
//			}
//			else
//				sum = p;
//			MIN = min(sum, MIN);
//		}
//		int temp = MIN;
//		if(MIN-temp==0)
//			printf("%.0lf\n", MIN);
//		else
//			printf("%.2lf\n", MIN);
//	}
//
////	system("pause");
//	return 0;
//}
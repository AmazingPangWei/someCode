//#include <iostream>
//using namespace std;
//
//
//bool a[10000000];
//int preme[1000000];
//int pre[1000000];
//int main()
//{
//	memset(a, 1, sizeof(a));
//	a[0] = 0;
//	a[1] = 0;
//	int sum = 0;
//	for(int i=2;i< 10000000;i++)
//		if (a[i] == 1)
//		{
//			for (int j = i + i; j < 10000000; j = j + i)
//				a[j] = 0;
//			preme[sum] = i;
//			sum++;
//		}
//	for (int i = 2; i < 1000; i++)//Ã¶¾Ù¹«²î
//	{
//		int sum = 0;
//		for (int j = 2; j < 1000000; j++)
//		{
//			int t = j;
//			while (a[t + i] == 1 && t+i<1000000)
//			{
//				t = t + i;
//				sum++;
//			}
//			if (sum == 9)
//			{
//				cout << i << endl;
//				system("pause");
//				return 0;
//			}
//			sum = 0;
//		}
//	}
//	system("pause");
//	return 0;
//}
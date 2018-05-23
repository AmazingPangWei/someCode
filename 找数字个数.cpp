//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int a, b;
//		cin >> a >> b;
//		//É¸·¨
//		bool d[10];
//		memset(d, 0, sizeof(d));
//		for (int i = a; i != 0; i /= 10)
//			d[i % 10] = 1;
//		for (int i = b; i != 0; i /= 10)
//			d[i % 10] = 1;
//		int sum = 0;
//		for (int i = 1; i <= 1000; i++)
//		{
//			if (i%a == 0 || i%b == 0)
//				continue;
//			int j;
//			for (j = i; j != 0; j /= 10)
//				if (d[j % 10])
//					break;
//			if (j != 0)
//				continue;
//			sum++;
//		}
//		cout << sum << endl;
//
//	}
//
//
////	system("pause");
//	return 0;
//}
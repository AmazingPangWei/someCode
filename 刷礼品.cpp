//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//int num(int x)
//{
//	int tot = 0;
//	while (x != 0)
//	{
//		tot++;
//		x = x / 10;
//	}
//	return tot;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int x, a, b;
//		cin >> x >> a >> b;
//		int temp = num(x);
//		int judge = pow(10, temp);
//		int tot = 0;
//		for (int i = a; i <= b; i++)
//			if (i%judge == x)
//				tot++;
//		cout << tot << endl;
//	}
////	system("pause");
//	return 0;
//}
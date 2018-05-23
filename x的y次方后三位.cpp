//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int x, y, temp1 , temp2; //x的y次方
//		cin >> x >> y;
//		if (y == 0)
//			cout << 0 << endl;
//		else
//		{
//			temp1 = x;
//			int n = 1;
//			while (n != y)
//			{
//				temp1 = temp1 % 1000;//乘数
//				temp2 = x % 1000;//被乘数
//				temp1 = temp1*temp2;
//				n++;
//			}
//			temp1 = temp1 % 1000;
//			cout << temp1 << endl;
//		}
//	}
//
////	system("pause");
//	return 0;
//}
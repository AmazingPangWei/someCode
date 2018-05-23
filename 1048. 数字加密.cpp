//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//void show_o(char A,char B)
//{
//	int t = B - A;
//	if (t < 0)
//		cout << t + 10;
//	else
//		cout << t;
//}
//
//void show_j(char A, char B)
//{
//	int t = (A - '0') + (B - '0');
//	t = t % 13;
//	if (t <= 9)
//		cout << t;
//	else if (t == 10)
//		cout << 'J';
//	else if (t == 11)
//		cout << 'Q';
//	else
//		cout << 'K';
//}
//
//
//int main()
//{
//	string A, B;
//	cin >> A >> B;
//	int i;
//	if (B.size() > A.size())
//	{
//		int t = B.size() - A.size();
//		for (i = 0;i < t;i++)
//			cout << B[i];
//		B.erase(0, t);
//	}
//	else
//	{
//		int t = A.size() - B.size();
//		for (i = 0;i < t;i++)
//			B.insert(0, "0");
//	}
//	if(B.size()%2==1)//ÆæÊý
//	{ 
//		for (i = 0;i < B.size();i++)
//		{
//			if (i % 2 == 0)
//				show_j(A[i], B[i]);
//			else
//				show_o(A[i], B[i]);
//		}
//	}
//	if(B.size()%2==0)//Å¼Êý
//	{
//		for (i = 0;i < B.size();i++)
//		{
//			if (i % 2 == 0)
//				show_o(A[i], B[i]);
//			else
//				show_j(A[i], B[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}
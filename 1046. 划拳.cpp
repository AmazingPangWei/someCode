//#include <iostream>
//
//using namespace std;
//
//struct Node
//{
//	int H = 0;//º°
//	int a = 0;//»®
//	int Aa = 0;//ºÈµÄ±­Êý
//};
//
//int main()
//{
//	int n, *p, i;
//	cin >> n;
//	Node a, b;
//	for (i = 0;i < n;i++)
//	{
//		cin >> a.H >> a.a >> b.H >> b.a;
//		if (a.a == (a.H + b.H) && b.a != (a.H + b.H))
//			b.Aa++;
//		else if (a.a != (a.H + b.H) && b.a == (a.H + b.H))
//			a.Aa++;
//		else
//			;
//	}
//	cout << a.Aa << ' ' << b.Aa << endl;
//	system("pause");
//	return 0;
//}
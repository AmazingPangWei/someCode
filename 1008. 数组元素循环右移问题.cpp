//#include <iostream>
//
//using namespace std;
//
//int main()
//{	
//	int n,m,*p,i;
//	cin >> n;
//	cin >> m;
//	m = m%n;
//	p = new int[n];
//	for (i = 0;i < n;i++)
//		cin >> p[i];
//	for (i = n - m;i < n;i++)
//		cout << p[i] << ' ';
//	for (i = 0;i < n - m;i++)
//		if (i != n - m - 1)
//			cout << p[i] << ' ';
//		else
//			cout << p[i];
//
//	delete[]p;
//	system("pause");
//	return 0;
//}
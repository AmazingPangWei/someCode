//#include <iostream>
//using namespace std;
//
//bool a[int(1e8)];
//int main()
//{
//	a[1] = 1;
//	a[2] = 1;
//	a[3] = 0;
//	a[4] = 1;
//	a[5] = 1;
//	for (int i = 6; i<int(1e8); i++)
//	{
//		if (a[i - 1] == 0 || a[i - 2] == 0 || a[i - 5] == 0)
//			a[i] = 1;
//	}
//	int n;
//	cin >> n;
//	if (a[n] == 1)
//		cout << "Y" << endl;
//	else
//		cout << "N" << endl;
////	system("pause");
//	return 0;
//}
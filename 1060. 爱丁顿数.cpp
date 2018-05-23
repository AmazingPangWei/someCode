//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, *p, i;
//	cin >> n;
//	p = new int[n];
//	for (i = 0;i < n;i++)
//		cin >> p[i];
//	int E = n;
//	while (1)
//	{
//		int sum = 0;
//		for (i = 0;i < n;i++)
//			if (E < p[i])
//				sum++;
//		if (sum >= E)
//			break;
//		else
//			E--;
//	}
//	cout << E << endl;
//	delete[]p;
//	system("pause");
//	return 0;
//}
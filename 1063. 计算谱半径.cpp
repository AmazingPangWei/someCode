//#include <iostream>
//#include <cmath>
//using namespace std;
//
//struct Num
//{
//	double a;//Êµ²¿
//	double b;//Ðé²¿
//};
//
//int main()
//{
//	int n, i;
//	Num *p;
//	double *q;
//	cin >> n;
//	p = new Num[n];
//	q = new double[n];
//	for (i = 0;i < n;i++)
//	{
//		cin >> p[i].a >> p[i].b;
//		q[i] = sqrt(p[i].a*p[i].a + p[i].b*p[i].b);
//	}
//	double max = q[0];
//	for (i = 1;i < n;i++)
//		if (max < q[i])
//			max = q[i];
//	cout.precision(2);
//	cout.setf(ios::fixed);
//	cout << max << endl;
//	delete[]q;
//	delete[]p;
//	system("pause");
//	return 0;
//}
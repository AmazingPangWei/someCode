//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	cout.precision(2);
//	cout.setf(ios::fixed);        //指定用定点形式输出
//	double r1, r2, p1, p2;
//	double A, B;
//	cin >> r1 >> p1 >> r2 >> p2;
//	A = r1*r2*(cos(p1)*cos(p2) - sin(p1)*sin(p2));
//	B = r1*r2*(sin(p2)*cos(p1) + sin(p1)*cos(p2));
//	if (fabs(A) < 0.01)
//		A = 0;
//	if (fabs(B) < 0.01)
//		B = 0;
//	cout << A;
//	if (B >= 0)
//		cout << '+';
//	cout << B << 'i' << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int fun(int t)
//{
//	float x = t;
//	x = x / 100;
//	t = t / 100;
//	if (x - t > 0.4)
//		t++;
//	return t;
//}
//
//int main()
//{
//	int c1, c2;
//	int t;
//	cin >> c1 >> c2;
//	t = c2 - c1;
//	t = fun(t);
//	cout.width(2);
//	cout.fill('0');
//	cout <<t / 60 / 60 << ':';
//	t = t%3600;
//	cout.width(2);
//	cout.fill('0');
//	cout << t / 60 << ':';
//	cout.width(2);
//	cout.fill('0');
//	t = t % 60;
//	cout << t << endl;
//	system("pause");
//	return 0;
//}
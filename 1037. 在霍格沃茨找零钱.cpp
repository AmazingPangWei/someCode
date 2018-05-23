//#include <iostream>
//#include <algorithm>
//using namespace std;
//typedef long long LL;
//
//int main()
//{
//	//Galleon.Sickle.Knut
//	//1 <- 17 <- 29
//	LL g, s, k;
//	char c;
//	cin >> g >> c >> s >> c >> k;
//	LL pg, ps, pk;
//	cin >> pg >> c >> ps >> c >> pk;
//	LL sum = (g * 17 + s) * 29 + k;
//	LL psum = (pg * 17 + ps) * 29 + pk;
//
//	if (sum > psum)
//	{
//		cout << '-';
//		swap(sum, psum);
//	}
//
//	sum = psum - sum;//¸¶Ç®
//	k = sum % 29;
//	s = sum / 29;
//	g = s / 17;
//	s = s % 17;
//	cout << g << '.' << s << '.' << k << endl;
//	system("pause");
//	return 0;
//}
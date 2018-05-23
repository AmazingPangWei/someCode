//#include <iostream>
//#include <cstring>
//using namespace std;
//
//
//int main()
//{
//	char a[10000];
//	cin >> a;
//	int P = 0, A = 0, T = 0, e = 0, s = 0, t = 0;
//	for (int i = 0;i < strlen(a);i++)
//	{
//		if (a[i] == 'P')
//			P++;
//		else if (a[i] == 'A')
//			A++;
//		else if (a[i] == 'T')
//			T++;
//		else if (a[i] == 'e')
//			e++;
//		else if (a[i] == 's')
//			s++;
//		else if (a[i] == 't')
//			t++;
//	}
//	while (P != 0 || A != 0 || T != 0 || e != 0 || s != 0 || t != 0)
//	{
//		if (P != 0)
//		{
//			cout << 'P';
//			P--;
//		}
//		if (A != 0)
//		{
//			cout << 'A';
//			A--;
//		}
//		if (T != 0)
//		{
//			cout << 'T';
//			T--;
//		}
//		if (e != 0)
//		{
//			cout << 'e';
//			e--;
//		}
//		if (s != 0)
//		{
//			cout << 's';
//			s--;
//		}
//		if (t != 0)
//		{
//			cout << 't';
//			t--;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
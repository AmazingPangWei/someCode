//#include <iostream>
//#include <string.h>
//
//using namespace std;
//void print1(char t)
//{
//	switch (t) {
//	case'A':cout << "MON ";break;
//	case'B':cout << "TUE ";break;
//	case'C':cout << "WED ";break;
//	case'D':cout << "THU ";break;
//	case'E':cout << "FRI ";break;
//	case'F':cout << "SAT ";break;
//	case'G':cout << "SUN ";break;
//	}
//}
//void print2(char t)
//{
//	switch (t)
//	{
//	case'A':cout << "10:";break;
//	case'B':cout << "11:";break;
//	case'C':cout << "12:";break;
//	case'D':cout << "13:";break;
//	case'E':cout << "14:";break;
//	case'F':cout << "15:";break;
//	case'G':cout << "16:";break;
//	case'H':cout << "17:";break;
//	case'I':cout << "18:";break;
//	case'J':cout << "19:";break;
//	case'K':cout << "20:";break;
//	case'L':cout << "21:";break;
//	case'M':cout << "22:";break;
//	case'N':cout << "23:";break;
//	default:cout << '0' << t << ':';
//	}
//}
//
//void fun1(char a[],char b[])
//{
//	int i,j,m=0;
//	char t;
//	for (i = 0;i < strlen(a);i++)
//		if (a[i] >= 'A'&&a[i] <= 'G')
//			if (a[i] == b[i]) {
//				print1(a[i]);
//				break;
//			}
//	for(i=i+1;i<strlen(a);i++)
//		if (a[i] == b[i])
//			if((a[i]>='0'&&a[i]<='9')||(a[i] >= 'A') && (a[i] <= 'N'))
//		{
//			print2(a[i]);
//			break;
//		}
//}
//
//void fun2(char c[], char d[])
//{
//	int i;
//	char t;
//	for (i = 0;i < strlen(c);i++)
//		if (c[i] == d[i]&&((c[i]>='a'&&c[i]<='z')||(c[i]>='A')&&(c[i]<='Z')))
//		{
//			if (i < 10)
//				cout << 0 << i;
//			else
//				cout << i;
//			break;
//		}
//
//}
//int main()
//{
//	char a[70], b[70], c[70], d[70];
//	cin >> a >> b >> c >> d;
//	fun1(a, b);
//	fun2(c, d);
//
//	system("pause");
//	return 0;
//}
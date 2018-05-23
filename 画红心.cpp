//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
//	int n;
//	cin >> n;
////╣зр╩ее
//	for (int i = 0; i < n; i++)
//		cout << ' ';
//	for (int i = 0; i < n; i++)
//		cout << '_';
//	for (int i = 0; i < n + 2 * n; i++)
//		cout << ' ';
//	for (int i = 0; i < n; i++)
//		cout << '_';
//	cout << endl;
//
//	int temp = n-1;
//	for (int i = 1; i <n+1; i++)
//	{
//		for (int j = temp; j > 0; j--)
//			cout << ' ';
//		cout << '/';
//		for (int j = 0; j < n+(i-1)*2; j++)
//			cout << ' ';
//		cout<<'\\';
//		if (i == n)
//			for(int j=0;j<n;j++)
//				cout << '_';
//		else
//		{
//			for (int j = 0; j < n + 2 * (temp); j++)
//				cout << ' ';
//		}
//		cout << '/';
//		for (int j = 0; j < n + (i - 1) * 2; j++)
//			cout << ' ';
//		cout << '\\';
//		cout << endl;
//		temp--;
//	}
//	for (int j = 0; j < n; j++)
//	{
//		cout << '|';
//		for (int i = 0; i < 7 * n-2; i++)
//			cout << ' ';
//		cout << '|';
//		cout << endl;
//	}
//	temp = 0;
//	for (int j = 0; j < n*3; j++)
//	{
//		for (int k = 0; k < temp; k++)
//			cout << ' ';
//		cout << '\\';
//		temp++;
//		if (j == n * 3 -1)
//			for(int i=0;i<n;i++)
//			 cout << '_';
//		else
//		{
//			for (int i = 0; i < (7 * n - 2 - 2 * j); i++)
//				cout << ' ';
//		}
//
//		cout << '/';
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}